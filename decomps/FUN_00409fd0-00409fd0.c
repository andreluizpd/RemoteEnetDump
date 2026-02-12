
undefined4 * __thiscall FUN_00409fd0(void *this,byte param_1)

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
  *(undefined ***)this = CAtlSecureMemMgr::vftable;
  local_8 = 0;
  piVar1 = *(int **)((int)this + 0x10);
  if ((piVar1 != (int *)0x0) && (piVar1 != (int *)((int)this + 4))) {
    (**(code **)(*piVar1 + 0x10))(1,uVar2);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  local_8 = 0xffffffff;
  *(undefined ***)((int)this + 4) = ATL::CWin32Heap::vftable;
  if ((*(char *)((int)this + 0xc) != '\0') && (*(HANDLE *)((int)this + 8) != (HANDLE)0x0)) {
    HeapDestroy(*(HANDLE *)((int)this + 8));
  }
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

