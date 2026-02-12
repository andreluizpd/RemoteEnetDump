
void __fastcall FUN_00421a50(LONG *param_1)

{
  bool bVar1;
  LONG LVar2;
  SOCKET SVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446aeb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  LVar2 = InterlockedCompareExchange(param_1,-1,-1);
  bVar1 = FUN_00401f30((int)(param_1 + 1));
  if (bVar1) {
    FUN_00404550(param_1 + 2,PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  if (LVar2 != -1) {
    SVar3 = InterlockedExchange(param_1,-1);
    FUN_00421540(SVar3);
  }
  local_8 = 0xffffffff;
  FUN_004031c0(param_1 + 1);
  ExceptionList = local_10;
  return;
}

