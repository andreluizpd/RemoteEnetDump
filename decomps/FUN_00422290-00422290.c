
undefined4 FUN_00422290(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
    if ((uVar4 <= param_3) && ((uVar4 < param_3 || (*(uint *)(param_1 + 0x18) < param_2)))) {
      param_2 = *(uint *)(param_1 + 0x18);
      param_3 = uVar4;
    }
    *(uint *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x14) = param_3;
  }
  else {
    if (param_4 == 1) {
      uVar4 = *(uint *)(param_1 + 0x10) + param_2;
      iVar3 = *(int *)(param_1 + 0x14) + param_3 + (uint)CARRY4(*(uint *)(param_1 + 0x10),param_2);
      iVar2 = *(int *)(param_1 + 0x1c);
      if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (*(uint *)(param_1 + 0x18) < uVar4)))) {
        iVar3 = iVar2;
        uVar4 = *(uint *)(param_1 + 0x18);
      }
    }
    else {
      if (param_4 != 2) {
        return 0x80030001;
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
      uVar4 = uVar1 + param_2;
      iVar3 = iVar2 + param_3 + (uint)CARRY4(uVar1,param_2);
      if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (uVar1 < uVar4)))) {
        iVar3 = iVar2;
        uVar4 = uVar1;
      }
    }
    *(uint *)(param_1 + 0x10) = uVar4;
    *(int *)(param_1 + 0x14) = iVar3;
    if ((iVar3 < 1) && (iVar3 < 0)) {
      *(uint *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x10);
    param_5[1] = *(undefined4 *)(param_1 + 0x14);
  }
  return 0;
}

