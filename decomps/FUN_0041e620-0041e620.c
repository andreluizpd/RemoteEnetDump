
undefined4 * __fastcall FUN_0041e620(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004466ac;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ATL::CSid::vftable;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 7;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))(uVar1);
  param_1[0x14] = iVar2 + 0x10;
  local_8 = 1;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[0x15] = iVar2 + 0x10;
  local_8._0_1_ = 3;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[0x16] = iVar2 + 0x10;
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[0x17] = iVar2 + 0x10;
  ExceptionList = local_10;
  return param_1;
}

