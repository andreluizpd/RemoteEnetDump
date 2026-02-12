
void * __thiscall FUN_004129b0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044584e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    FreeStdCallThunk(*(void **)((int)this + 0x14));
  }
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return this;
}

