
void __fastcall FUN_004299d0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0044736d;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 700) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 700) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_8._0_1_ = 1;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2b8) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x2b8) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2b4) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x2b4) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_8 = 0xffffffff;
  FUN_00421a50((LONG *)(param_1 + 0xc));
  ExceptionList = local_10;
  return;
}

