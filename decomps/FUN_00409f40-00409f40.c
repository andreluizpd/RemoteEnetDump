
void __fastcall FUN_00409f40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004449bb;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CAtlSecureMemMgr::vftable;
  local_8 = 0;
  piVar1 = (int *)param_1[4];
  if ((piVar1 != (int *)0x0) && (piVar1 != param_1 + 1)) {
    (**(code **)(*piVar1 + 0x10))(1,uVar2);
  }
  param_1[4] = 0;
  local_8 = 0xffffffff;
  param_1[1] = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 3) != '\0') && ((HANDLE)param_1[2] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[2]);
  }
  ExceptionList = local_10;
  return;
}

