
undefined4 * __thiscall FUN_00409c80(void *this,byte param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CStringSerializer::vftable;
  local_8 = 0;
  if ((*(char *)((int)this + 0x10) != '\0') &&
     (piVar1 = *(int **)((int)this + 0xc), piVar1 != (int *)0x0)) {
    FUN_00405550(piVar1);
    FUN_0042bc24(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  local_8 = 0xffffffff;
  *(undefined ***)this = IBasicSerializer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

