
undefined4 * __thiscall
FUN_0040b120(void *this,undefined4 param_1,DWORD param_2,SIZE_T param_3,SIZE_T param_4)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444ac7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = IAllocator::vftable;
  *(undefined ***)this = ISecureAllocator::vftable;
  *(undefined ***)((int)this + 4) = ISecureAllocator::vftable;
  *(undefined ***)((int)this + 8) = ISecureAllocator::vftable;
  local_8 = 1;
  *(undefined ***)this = CSecureAllocator::vftable;
  *(undefined ***)((int)this + 4) = CSecureAllocator::vftable;
  *(undefined ***)((int)this + 8) = CSecureAllocator::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)((int)this + 0x10) = CAtlSecureMemMgr::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = ATL::CWin32Heap::vftable;
  *(undefined1 *)((int)this + 0x1c) = 1;
  pvVar1 = HeapCreate(param_2,param_3,param_4);
  *(HANDLE *)((int)this + 0x18) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00401780();
  }
  *(undefined4 **)((int)this + 0x20) = (undefined4 *)((int)this + 0x14);
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  *(undefined ***)((int)this + 0x24) = CAtlSecureMemMgr::vftable;
  *(undefined4 *)((int)this + 0x28) = ATL::CWin32Heap::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 1;
  pvVar1 = HeapCreate(param_2,param_3,param_4);
  uVar2 = 0;
  *(HANDLE *)((int)this + 0x2c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00401780();
    uVar2 = extraout_EDX;
  }
  *(undefined4 **)((int)this + 0x34) = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = uVar2;
  *(undefined4 *)((int)this + 0x38) = ATL::CAtlSecureStringMgr::vftable;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(int *)((int)this + 0x48) = (int)this + 0x24;
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = uVar2;
  *(undefined4 *)((int)this + 0x58) = 2;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 **)((int)this + 0x4c) = (undefined4 *)((int)this + 0x38);
  ExceptionList = local_10;
  return (undefined4 *)this;
}

