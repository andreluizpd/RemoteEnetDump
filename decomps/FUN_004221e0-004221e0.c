
undefined4 FUN_004221e0(int *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == (void *)0x0) {
    return 0x80030009;
  }
  uVar5 = param_1[4] + param_3;
  uVar2 = param_1[5] + (uint)CARRY4(param_1[4],param_3);
  if (((uint)param_1[9] <= uVar2) && (((uint)param_1[9] < uVar2 || ((uint)param_1[8] < uVar5)))) {
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1,uVar5,uVar2);
    if (iVar3 < 0) {
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1,uVar5,uVar2);
      return uVar4;
    }
  }
  if (param_3 != 0) {
    FID_conflict__memcpy((void *)(param_1[2] + param_1[4]),param_2,param_3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
  puVar1 = (uint *)(param_1 + 4);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  param_1[5] = param_1[5] + (uint)CARRY4(uVar2,param_3);
  uVar2 = param_1[5];
  if (((uint)param_1[7] <= uVar2) &&
     (((uint)param_1[7] < uVar2 || ((uint)param_1[6] < (uint)param_1[4])))) {
    param_1[6] = param_1[4];
    param_1[7] = uVar2;
  }
  return 0;
}

