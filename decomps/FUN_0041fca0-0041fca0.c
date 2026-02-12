
undefined4 * __fastcall FUN_0041fca0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446856;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CSharedMemory::vftable;
  param_1[4] = 0;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))(uVar1);
  param_1[5] = iVar2 + 0x10;
  local_8 = 1;
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))();
  param_1[9] = iVar2 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[8] = 1;
  ExceptionList = local_10;
  return param_1;
}

