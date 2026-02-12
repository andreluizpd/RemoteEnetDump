
void __fastcall FUN_00419680(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445ce0;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ATL::CComModule::vftable;
  local_8 = 0xffffffff;
  if (param_1[1] != 0) {
    if (param_1[3] != 0) {
      FUN_00418340((int)(param_1 + 1));
      param_1[3] = 0;
    }
    piVar1 = (int *)param_1[10];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,uVar2);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    param_1[1] = 0;
  }
  ExceptionList = local_10;
  return;
}

