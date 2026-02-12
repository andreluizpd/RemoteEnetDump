
undefined4 * __thiscall FUN_00403490(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444129;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CClassLogger::vftable;
  local_8 = 0;
  FUN_00402e50((undefined4 *)((int)this + 0x17c));
  local_8 = 0xffffffff;
  FUN_00402e50((undefined4 *)((int)this + 0x54));
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

