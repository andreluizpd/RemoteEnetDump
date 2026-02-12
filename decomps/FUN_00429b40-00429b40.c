
undefined4 * __thiscall FUN_00429b40(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004473b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CVehicleDetectTask::vftable;
  local_8 = 2;
  FUN_004295c0((int)this);
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  local_8._0_1_ = 1;
  FUN_00426220((undefined4 *)((int)this + 0x3b0));
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004299d0((int)this + 0xe0);
  local_8 = 0xffffffff;
  FUN_00428180((undefined4 *)((int)this + 0x1c));
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

