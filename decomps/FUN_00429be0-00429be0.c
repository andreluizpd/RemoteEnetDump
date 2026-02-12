
void __fastcall FUN_00429be0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004473eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStringTokenizerA::vftable;
  local_8 = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_004049b0((int *)param_1[1],param_1[2]);
    _free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  local_8 = 0xffffffff;
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_004049b0((int *)param_1[1],param_1[2]);
    _free((void *)param_1[1]);
  }
  ExceptionList = local_10;
  return;
}

