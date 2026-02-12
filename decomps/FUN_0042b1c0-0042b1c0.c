
void __fastcall FUN_0042b1c0(int param_1)

{
  bool bVar1;
  SOCKET s;
  int iVar2;
  uint uVar3;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  char *local_34;
  char local_2e;
  char local_2d;
  sockaddr local_2c;
  char local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004477c8;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  local_2e = '\x01';
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\x11';
  if ((undefined4 *)(param_1 + 0xec) == (undefined4 *)0x0) {
    s = socket(2,2,0);
    if (s == 0xffffffff) {
      WSAGetLastError();
      goto LAB_0042b3fd;
    }
    local_34 = (char *)0x1;
    iVar2 = setsockopt(s,0xffff,4,(char *)&local_34,4);
    if (iVar2 != 0) {
      closesocket(s);
      WSAGetLastError();
      goto LAB_0042b3fd;
    }
    local_2d = '1';
    iVar2 = setsockopt(s,0xffff,0x20,&local_2d,1);
    if (iVar2 < 0) {
      closesocket(s);
      WSAGetLastError();
      goto LAB_0042b3fd;
    }
  }
  else {
    s = FUN_004211b0((undefined4 *)(param_1 + 0xec));
    local_2e = '\0';
  }
  uVar3 = 0;
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8 = 0;
  FUN_0042aa00((int *)&local_48);
  local_2d = '\0';
  if (local_44 == 0) {
LAB_0042b33b:
    if (DAT_00459778 != '\0') {
      local_2c.sa_family = 2;
      local_2c.sa_data._0_2_ = htons(*(u_short *)(param_1 + 0x14));
      local_2c.sa_data._2_4_ = inet_addr("169.254.255.255");
      sendto(s,local_1c,6,0,&local_2c,0x10);
    }
  }
  else {
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    do {
      local_34 = (char *)local_48[uVar3];
      bVar1 = FUN_00422050(local_34,"169.254",'\0');
      if (bVar1) {
        local_2d = '\x01';
      }
      local_2c.sa_family = 2;
      local_2c.sa_data._0_2_ = htons(*(u_short *)(param_1 + 0x14));
      local_2c.sa_data._2_4_ = inet_addr(local_34);
      sendto(s,local_1c,6,0,&local_2c,0x10);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_44);
    if (local_2d == '\0') goto LAB_0042b33b;
  }
  local_2c.sa_family = 2;
  local_2c.sa_data._0_2_ = htons(*(u_short *)(param_1 + 0x14));
  local_2c.sa_data[2] = -1;
  local_2c.sa_data[3] = -1;
  local_2c.sa_data[4] = -1;
  local_2c.sa_data[5] = -1;
  iVar2 = sendto(s,local_1c,6,0,&local_2c,0x10);
  if (iVar2 == -1) {
    if (local_2e != '\0') {
      closesocket(s);
    }
    local_38 = WSAGetLastError();
    if (0 < (int)local_38) {
      local_38 = local_38 & 0xffff | 0x80070000;
    }
  }
  local_8 = 0xffffffff;
  if (local_48 != (int *)0x0) {
    FUN_004049b0(local_48,local_44);
    _free(local_48);
  }
LAB_0042b3fd:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

