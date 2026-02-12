
int * __fastcall FUN_0040c2b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444cfb;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = (int)ATL::CFixedStringMgr::vftable;
  param_1[1] = (int)&PTR_vftable_004575c8;
  param_1[2] = (int)(param_1 + 4);
  param_1[7] = -1;
  *(undefined4 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 8) = 0x80;
  *(int **)param_1[2] = param_1;
  *(undefined2 *)(param_1[2] + 0x10) = 0;
  local_8 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))(uVar1);
  param_1[3] = iVar2 + 0x10;
  *param_1 = (int)ATL::
                  CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,128>
                  ::vftable;
  ExceptionList = local_10;
  return param_1;
}

