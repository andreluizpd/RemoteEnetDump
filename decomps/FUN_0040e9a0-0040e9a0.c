
int * __thiscall FUN_0040e9a0(void *this,char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004444b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = ATL::CFixedStringMgr::vftable;
  *(undefined ***)((int)this + 4) = &PTR_vftable_004575c8;
  *(int *)((int)this + 8) = (int)this + 0x10;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 8) + 4) = 0;
  *(undefined4 *)(*(int *)((int)this + 8) + 8) = 0x104;
  **(undefined4 **)((int)this + 8) = this;
  *(undefined2 *)(*(int *)((int)this + 8) + 0x10) = 0;
  local_8 = 0;
  FUN_0040dc50((void *)((int)this + 0xc),param_1,(int *)this);
  *(undefined ***)this =
       ATL::
       CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,260>
       ::vftable;
  ExceptionList = local_10;
  return (int *)this;
}

