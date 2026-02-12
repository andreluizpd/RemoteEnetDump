
void __thiscall
FUN_00421dc0(void *this,WCHAR *param_1,WCHAR *param_2,WCHAR *param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  LONG LVar2;
  SOCKET s;
  undefined4 uVar3;
  int iVar4;
  DWORD dwErrCode;
  sockaddr local_88 [8];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  LVar2 = InterlockedCompareExchange((LONG *)this,-1,-1);
  bVar1 = FUN_00401f30((int)this + 4);
  if (bVar1) {
    FUN_00404550((void *)((int)this + 8),PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  if (LVar2 != -1) {
    SetLastError(5);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  s = WSASocketW(param_4,param_5,0,0,0,1);
  if (s != 0xffffffff) {
    _memset(local_88,0,0x80);
    FUN_00421840(param_1,L"0",(short)param_4,local_88);
    uVar3 = FUN_00421050(local_88,&DAT_004593a8);
    if ((char)uVar3 == '\0') {
      iVar4 = bind(s,local_88,((local_88[0].sa_family != 2) - 1 & 0xffffff90) + 0x80);
      if (iVar4 != -1) {
        FUN_00421a10(local_88,param_2,param_3,(short)param_4);
        iVar4 = connect(s,local_88,((local_88[0].sa_family != 2) - 1 & 0xffffff90) + 0x80);
        if (iVar4 != -1) {
          *(SOCKET *)this = s;
          goto LAB_00421f48;
        }
      }
    }
    dwErrCode = WSAGetLastError();
    SetLastError(dwErrCode);
    closesocket(s);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00421f48:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

