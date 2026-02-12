
undefined4 FUN_00422160(int param_1,void *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == (void *)0x0) {
    return 0x80030009;
  }
  uVar2 = *(int *)(param_1 + 0x14) + (uint)CARRY4(param_3,*(uint *)(param_1 + 0x10));
  if ((*(uint *)(param_1 + 0x1c) <= uVar2) &&
     ((*(uint *)(param_1 + 0x1c) < uVar2 ||
      (*(uint *)(param_1 + 0x18) < param_3 + *(uint *)(param_1 + 0x10))))) {
    param_3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  }
  if (param_3 == 0) {
    return 1;
  }
  FID_conflict__memcpy(param_2,(void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)),param_3);
  puVar1 = (uint *)(param_1 + 0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar2,param_3);
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
  return 0;
}

