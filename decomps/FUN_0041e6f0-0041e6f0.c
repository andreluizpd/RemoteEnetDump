
void __fastcall FUN_0041e6f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0044671c;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ATL::CSid::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puVar4 = (undefined4 *)(param_1[0x17] + -0x10);
  piVar1 = (int *)(param_1[0x17] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_8._0_1_ = 1;
  puVar4 = (undefined4 *)(param_1[0x16] + -0x10);
  piVar1 = (int *)(param_1[0x16] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar4 = (undefined4 *)(param_1[0x15] + -0x10);
  piVar1 = (int *)(param_1[0x15] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)(param_1[0x14] + -0x10);
  piVar1 = (int *)(param_1[0x14] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  ExceptionList = local_10;
  return;
}

