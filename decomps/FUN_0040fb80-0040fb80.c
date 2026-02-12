
undefined4 * __thiscall FUN_0040fb80(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445278;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CProperty::vftable;
  local_8 = 0;
  FUN_0042eaea(*(void **)((int)this + 8));
  local_8 = 0xffffffff;
  *(undefined ***)this = IProperty::vftable;
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

