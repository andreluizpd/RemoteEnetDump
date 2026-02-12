
undefined4 * __thiscall FUN_00409530(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004448b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = ISecureAllocator::vftable;
  *(undefined ***)((int)this + 4) = ISecureAllocator::vftable;
  *(undefined ***)((int)this + 8) = ISecureAllocator::vftable;
  local_8 = 0xffffffff;
  *(undefined ***)this = IAllocator::vftable;
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

