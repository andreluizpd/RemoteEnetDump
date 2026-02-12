
void __fastcall FUN_00406ae0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444683;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  _free(*(void **)(param_1 + 0xc));
  FUN_0042bc24(*(void **)(param_1 + 8));
  ExceptionList = local_10;
  return;
}

