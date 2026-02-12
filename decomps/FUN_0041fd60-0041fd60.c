
undefined4 * __thiscall FUN_0041fd60(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044689b;
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
  FUN_0041fbb0((void *)((int)this + 0xc),*(void **)(param_1 + 0xc),
               *(int *)((int)*(void **)(param_1 + 0xc) + -0xc),(undefined4 *)this);
  *(undefined ***)this =
       ATL::
       CFixedStringT<class_ATL::CStringT<wchar_t,class_ATL::StrTraitATL<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,260>
       ::vftable;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

