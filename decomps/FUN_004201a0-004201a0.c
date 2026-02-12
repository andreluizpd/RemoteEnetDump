
void __fastcall FUN_004201a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00446916;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CSharedMemory::vftable;
  local_8 = 1;
  FUN_0041ff40((int)param_1);
  FUN_00404410(&DAT_00459110);
  local_8 = local_8 & 0xffffff00;
  puVar4 = (undefined4 *)(param_1[9] + -0x10);
  piVar1 = (int *)(param_1[9] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)(param_1[5] + -0x10);
  piVar1 = (int *)(param_1[5] + -4);
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

