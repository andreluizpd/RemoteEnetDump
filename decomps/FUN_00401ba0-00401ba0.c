
void __fastcall FUN_00401ba0(undefined4 *param_1)

{
  uint3 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00444049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CAllocator::vftable;
  param_1[1] = CAllocator::vftable;
  param_1[8] = ATL::CAtlStringMgr::vftable;
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  param_1[5] = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 7) != '\0') && (uVar1 = local_8._1_3_, (HANDLE)param_1[6] != (HANDLE)0x0)
     ) {
    HeapDestroy((HANDLE)param_1[6]);
    uVar1 = local_8._1_3_;
  }
  local_8._1_3_ = uVar1;
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[2] = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 4) != '\0') && ((HANDLE)param_1[3] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[3]);
  }
  *param_1 = IAllocator::vftable;
  ExceptionList = local_10;
  return;
}

