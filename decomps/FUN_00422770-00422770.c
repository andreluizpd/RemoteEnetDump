
LONG FUN_00422770(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = CStream::vftable;
      FUN_004220a0((int)param_1);
      FUN_0042bc24(param_1);
    }
    LVar1 = 0;
  }
  return LVar1;
}

