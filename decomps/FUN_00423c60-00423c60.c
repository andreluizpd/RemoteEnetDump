
undefined4 * __thiscall FUN_00423c60(void *this,char *param_1,char *param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446c7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = IStringStringPair::vftable;
  local_8 = 0;
  *(undefined ***)this = CStringStringPair::vftable;
  FUN_004238a0((void *)((int)this + 4),param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004239b0((void *)((int)this + 0x70),param_2);
  *(undefined4 *)((int)this + 400) = param_3;
  *(undefined4 *)((int)this + 0x194) = 0xffffffff;
  *(undefined4 *)((int)this + 0x198) = 0;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

