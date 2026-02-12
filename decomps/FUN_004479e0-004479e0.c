
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004479e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004465fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00418390(0x4590c0);
  _DAT_00458f04 = &DAT_004590c0;
  _DAT_004590c0 = WTL::CAppModule::vftable;
  local_8 = 0xffffffff;
  _atexit(FUN_00447cc0);
  ExceptionList = local_10;
  return;
}

