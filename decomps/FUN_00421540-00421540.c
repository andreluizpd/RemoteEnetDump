
bool __cdecl FUN_00421540(SOCKET param_1)

{
  int iVar1;
  
  iVar1 = shutdown(param_1,2);
  if (iVar1 != 0) {
    WSAGetLastError();
  }
  iVar1 = closesocket(param_1);
  if (iVar1 != 0) {
    WSAGetLastError();
  }
  FUN_00404550(&DAT_00459438,PTR_s_KJDm0Iq3hJtQ5alVMQZBRb1IfVMM3FIx_00457270,
               " %d, socket=%d, shutdown=%d, %d close=%d, %d");
  return iVar1 == 0;
}

