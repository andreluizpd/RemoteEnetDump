
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447cc0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044663e;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _DAT_004590c0 = ATL::CComModule::vftable;
  local_8 = 0xffffffff;
  if (DAT_004590c4 != 0) {
    if (DAT_004590cc != 0) {
      FUN_00418340(0x4590c4);
      DAT_004590cc = 0;
    }
    if (DAT_004590e8 != (int *)0x0) {
      (**(code **)(*DAT_004590e8 + 8))(DAT_004590e8,uVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004590d0);
    DAT_004590c4 = 0;
  }
  ExceptionList = local_10;
  return;
}

