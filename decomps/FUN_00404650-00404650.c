
undefined4 * __thiscall FUN_00404650(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044430b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CClassLogger2::vftable;
  local_8 = 0xffffffff;
  FUN_00402e50((undefined4 *)((int)this + 0x3c));
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

