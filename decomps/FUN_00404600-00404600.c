
void __fastcall FUN_00404600(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004442db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CClassLogger2::vftable;
  local_8 = 0xffffffff;
  FUN_00402e50(param_1 + 0xf);
  ExceptionList = local_10;
  return;
}

