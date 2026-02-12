
undefined4 * __cdecl FUN_00411010(LPCWSTR param_1,undefined4 param_2)

{
  undefined4 *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044550e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (undefined4 *)operator_new(0x24);
  local_8 = 0;
  if (this != (undefined4 *)0x0) {
    FUN_00410200(this,param_1,param_2);
    *this = CCategoryProperty::vftable;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    *(undefined1 *)(this + 8) = 1;
    ExceptionList = local_10;
    return this;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

