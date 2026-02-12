
void * __thiscall FUN_0041da20(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004464c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  FUN_0041afd0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return this;
}

