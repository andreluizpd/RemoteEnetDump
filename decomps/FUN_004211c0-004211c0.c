
undefined4 __fastcall FUN_004211c0(SOCKET *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  undefined4 uVar2;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (*param_1 != 0xffffffff) {
    local_c = 4;
    iVar1 = getsockopt(*param_1,0xffff,0x1008,(char *)&local_8,&local_c);
    uVar2 = local_8;
    if (iVar1 == -1) {
      dwErrCode = WSAGetLastError();
      SetLastError(dwErrCode);
      uVar2 = local_8;
    }
  }
  return uVar2;
}

