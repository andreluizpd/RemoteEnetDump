
undefined4 __fastcall FUN_00421160(LONG *param_1)

{
  bool bVar1;
  LONG LVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  
  LVar2 = InterlockedCompareExchange(param_1,-1,-1);
  bVar1 = FUN_00401f30((int)(param_1 + 1));
  uVar3 = extraout_var;
  if (bVar1) {
    FUN_00404550(param_1 + 2,PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,LVar2 != -1);
}

