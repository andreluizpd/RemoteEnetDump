# ENET Connection Protocol Specification

This document describes the protocol and logic required to implement a connector for the vehicle's ENET interface, derived from reverse engineering the original Windows application.

## 1. Discovery (Connecting to the Car)

The TCP/IP address of the car is discovered via a UDP Broadcast.

### Protocol Details
- **Protocol**: UDP
- **Target IP**: `169.254.255.255` (Link-Local Broadcast)
- **Target Port**: `6811` (0x1A9B)
- **Source Port**: Any ephemeral port (OS assigned) or 6811 (if needed by firewall).

### Request Payload
Send the following 6-byte hex sequence:
```
00 00 00 00 00 11
```

### Response
- **Source IP**: The Car's IP Address (e.g., `169.254.x.y`).
- **Logic**: Listen for a UDP response on the socket used to send the broadcast. The source IP of the first valid response is the target vehicle's IP.

---

## 2. Network Exposure (Port Proxy)

The vehicle exposes services on TCP Port **6801**. To allow external tools or other devices on the network to access it, you must implement a TCP Proxy.

### Implementation Logic
1.  **Listen**: Create a TCP Server listening on `0.0.0.0` (all interfaces) on Port **6801**.
2.  **Accept**: When a client connects to your listener:
    a.  **Connect**: Open a new TCP connection to the **Car's IP** (discovered in Step 1) on Port **6801**.
    b.  **Pipe**: Continuously forward all data received from the Client to the Car, and all data received from the Car to the Client.
3.  **Handle Disconnects**: If either side (Car or Client) closes the connection, close the other side.

### Diagram
```mermaid
graph LR
    Client[External Tool/Client] -- TCP 6801 --> Proxy[Your Application]
    Proxy -- TCP 6801 --> Car[Vehicle (169.254.x.y)]
```

## 3. Implementation Steps (Pseudocode)

```python
def main():
    # Step 1: Discovery
    udp_sock = socket(AF_INET, SOCK_DGRAM)
    udp_sock.setsockopt(SOL_SOCKET, SO_BROADCAST, 1)
    udp_sock.sendto(b'\x00\x00\x00\x00\x00\x11', ('169.254.255.255', 6811))
    
    data, (car_ip, car_port) = udp_sock.recvfrom(1024)
    print(f"Car discovered at {car_ip}")

    # Step 2: Proxy
    server = socket(AF_INET, SOCK_STREAM)
    server.bind(('0.0.0.0', 6801))
    server.listen(5)
    
    while True:
        client_sock, addr = server.accept()
        # Spawn thread/coroutine to pipe client_sock <-> car_ip:6801
        start_proxy_thread(client_sock, car_ip, 6801)
```
