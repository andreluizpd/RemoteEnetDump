
undefined4 __thiscall FUN_004212a0(void *this,sockaddr *param_1)

{
  sockaddr *name;
  bool bVar1;
  LONG LVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  DWORD dwErrCode;
  uint extraout_EAX;
  
  LVar2 = InterlockedCompareExchange((LONG *)this,-1,-1);
  bVar1 = FUN_00401f30((int)this + 4);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    uVar3 = FUN_00404550((void *)((int)this + 8),PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  name = param_1;
  if (LVar2 != -1) {
                    /* WARNING: Load size is inaccurate */
    param_1 = (sockaddr *)(((param_1->sa_family != 2) - 1 & 0xffffff90) + 0x80);
    iVar4 = getpeername(*this,name,(int *)&param_1);
    if (iVar4 != -1) {
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    dwErrCode = WSAGetLastError();
    SetLastError(dwErrCode);
    uVar3 = extraout_EAX;
  }
  return uVar3 & 0xffffff00;
}

