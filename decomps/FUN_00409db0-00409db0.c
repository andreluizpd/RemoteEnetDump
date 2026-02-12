
undefined4 * __thiscall FUN_00409db0(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  param_2 = param_2 + 1;
  uVar1 = ((int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3) * 8;
  if (param_2 != uVar1) {
    param_2 = uVar1 + 8;
  }
  iVar3 = *(int *)((int)this + 4);
  if ((0 < iVar3) && (uVar1 = ((int)param_2 / iVar3) * iVar3, param_2 != uVar1)) {
    param_2 = uVar1 + iVar3;
  }
  uVar1 = (uint)((ulonglong)param_2 * (ulonglong)param_3);
  if (((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) && (uVar1 < 0xfffffff0)) {
    if (*(char *)((int)this + 0xc) == '\0') {
      puVar2 = (undefined4 *)(*(code *)((undefined4 *)**(int **)((int)this + 0x10))[2])(param_1);
    }
    else {
      puVar2 = (undefined4 *)(**(code **)**(int **)((int)this + 0x10))(uVar1 + 0x10);
    }
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = param_2 - 1;
      if (*(char *)((int)this + 0xc) != '\0') {
        *puVar2 = *param_1;
        puVar2[1] = param_1[1];
        puVar2[3] = param_1[3];
        FID_conflict__memcpy(puVar2 + 4,param_1 + 4,(param_1[2] + 1) * param_3);
        iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(param_1);
        puVar4 = param_1;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        (**(code **)(**(int **)((int)this + 0x10) + 4))(param_1);
      }
      return puVar2;
    }
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

