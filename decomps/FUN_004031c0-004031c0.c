
void __fastcall FUN_004031c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444129;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CClassLogger::vftable;
  local_8 = 0;
  FUN_00402e50(param_1 + 0x5f);
  local_8 = 0xffffffff;
  FUN_00402e50(param_1 + 0x15);
  ExceptionList = local_10;
  return;
}

