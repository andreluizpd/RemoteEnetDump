
undefined4 * __thiscall FUN_00423bb0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00446bfe;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = CStringStringPair::vftable;
  local_8 = 2;
  FUN_00423300((int)this + 4);
  FUN_00423360((int)this + 0x70);
  local_8._0_1_ = 1;
  *(undefined ***)((int)this + 0x70) = CBufferedString<260,0>::vftable;
  FUN_00423360((int)this + 0x70);
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined ***)((int)this + 4) = CBufferedString<80,0>::vftable;
  FUN_00423300((int)this + 4);
  local_8 = 0xffffffff;
  *(undefined ***)this = IStringStringPair::vftable;
  if (((param_1 & 1) != 0) && (DAT_0045973c != 0)) {
    (**(code **)(DAT_00459738 + 4))(this,uVar1);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

