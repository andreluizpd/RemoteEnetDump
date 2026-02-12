
void __fastcall FUN_004216a0(LONG *param_1)

{
  bool bVar1;
  LONG LVar2;
  SOCKET SVar3;
  
  LVar2 = InterlockedCompareExchange(param_1,-1,-1);
  bVar1 = FUN_00401f30((int)(param_1 + 1));
  if (bVar1) {
    FUN_00404550(param_1 + 2,PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  if (LVar2 != -1) {
    SVar3 = InterlockedExchange(param_1,-1);
    FUN_00421540(SVar3);
  }
  return;
}

