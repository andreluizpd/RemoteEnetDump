
void __fastcall FUN_00428180(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00444bcb;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ATL::
             CFixedStringT<class_ATL::CStringT<wchar_t,class_ATL::StrTraitATL<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,80>
             ::vftable;
  local_8 = 1;
  if (param_1[6] != 0) {
    _memset(param_1 + 8,0,param_1[6]);
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(param_1 + 3));
  local_8 = local_8 & 0xffffff00;
  iVar2 = *(int *)(param_1 + 3);
  puVar4 = (undefined4 *)(iVar2 + -0x10);
  piVar1 = (int *)(iVar2 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  *param_1 = ATL::CFixedStringMgr::vftable;
  ExceptionList = local_10;
  return;
}

