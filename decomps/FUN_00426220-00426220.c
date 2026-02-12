
void __fastcall FUN_00426220(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00447066;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStringStringPairCollection::vftable;
  param_1[3] = CStringStringPairCollection::vftable;
  local_8 = 1;
  FUN_00425d50((int)param_1);
  local_8 = local_8 & 0xffffff00;
  if ((void *)param_1[0x2e] != (void *)0x0) {
    _free((void *)param_1[0x2e]);
  }
  local_8 = 0xffffffff;
  FUN_0040bd90(param_1);
  ExceptionList = local_10;
  return;
}

