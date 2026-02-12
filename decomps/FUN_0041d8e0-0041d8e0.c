
void __fastcall FUN_0041d8e0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004463e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  FUN_0041afd0(param_1);
  ExceptionList = local_10;
  return;
}

