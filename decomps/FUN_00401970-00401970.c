
undefined4 * __fastcall FUN_00401970(undefined4 *param_1)

{
  HANDLE pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00443ff9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = IAllocator::vftable;
  local_8 = 0;
  *param_1 = CAllocator::vftable;
  param_1[1] = CAllocator::vftable;
  param_1[2] = ATL::CWin32Heap::vftable;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  pvVar1 = HeapCreate(0,0x400,0);
  param_1[3] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00401780();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[5] = ATL::CWin32Heap::vftable;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  pvVar1 = HeapCreate(0,0x400,0);
  param_1[6] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00401780();
  }
  param_1[8] = ATL::CAtlStringMgr::vftable;
  param_1[9] = param_1 + 5;
  param_1[0xd] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[10] = param_1 + 8;
  param_1[0xf] = 0;
  ExceptionList = local_10;
  return param_1;
}

