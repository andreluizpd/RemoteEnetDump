
undefined4 * __thiscall FUN_004269a0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00447066;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CStringStringPairCollection::vftable;
  *(undefined ***)((int)this + 0xc) = CStringStringPairCollection::vftable;
  local_8 = 1;
  FUN_00425d50((int)this);
  local_8 = local_8 & 0xffffff00;
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    _free(*(void **)((int)this + 0xb8));
  }
  local_8 = 0xffffffff;
  FUN_0040bd90((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00409af0(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

