
void __fastcall FUN_0040a070(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00444a27;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CSecureAllocator::vftable;
  param_1[1] = CSecureAllocator::vftable;
  param_1[2] = CSecureAllocator::vftable;
  param_1[0xe] = ATL::CAtlSecureStringMgr::vftable;
  param_1[9] = CAtlSecureMemMgr::vftable;
  local_8._1_3_ = 0;
  local_8._0_1_ = 4;
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 != (int *)0x0) && (piVar1 != param_1 + 10)) {
    (**(code **)(*piVar1 + 0x10))(1,uVar2);
  }
  param_1[0xd] = 0;
  local_8._0_1_ = 1;
  param_1[10] = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 0xc) != '\0') && ((HANDLE)param_1[0xb] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[0xb]);
  }
  param_1[4] = CAtlSecureMemMgr::vftable;
  local_8._0_1_ = 5;
  piVar1 = (int *)param_1[8];
  if ((piVar1 != (int *)0x0) && (piVar1 != param_1 + 5)) {
    (**(code **)(*piVar1 + 0x10))(1);
  }
  param_1[8] = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[5] = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 7) != '\0') && ((HANDLE)param_1[6] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[6]);
  }
  *param_1 = ISecureAllocator::vftable;
  param_1[1] = ISecureAllocator::vftable;
  param_1[2] = ISecureAllocator::vftable;
  *param_1 = IAllocator::vftable;
  ExceptionList = local_10;
  return;
}

