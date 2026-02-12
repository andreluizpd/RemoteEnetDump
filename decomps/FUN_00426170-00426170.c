
undefined4 * __thiscall FUN_00426170(void *this,int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446f36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040cb00(this,param_1);
  *(undefined ***)this = CStringStringPairCollection::vftable;
  *(undefined ***)((int)this + 0xc) = CStringStringPairCollection::vftable;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  local_8 = 3;
  FUN_00424b60(this,param_1);
  ExceptionList = local_10;
  return (undefined4 *)this;
}

