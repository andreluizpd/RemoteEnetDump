
undefined4 * __fastcall FUN_004298e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004472fd;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00421100(param_1 + 3);
  local_8 = 0;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))(uVar1);
  param_1[0xad] = iVar2 + 0x10;
  local_8._0_1_ = 2;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[0xae] = iVar2 + 0x10;
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[0xaf] = iVar2 + 0x10;
  param_1[0xb3] = 0;
  ExceptionList = local_10;
  return param_1;
}

