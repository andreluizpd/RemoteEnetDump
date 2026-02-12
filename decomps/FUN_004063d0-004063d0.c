
undefined4 __cdecl FUN_004063d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)param_1[3];
  param_1[5] = (int)piVar1;
  *param_1 = piVar1[1];
  param_1[1] = piVar1[2] / 2;
  param_1[2] = (uint)*(ushort *)((int)piVar1 + 0xe) * (uint)*(ushort *)(piVar1 + 3);
  iVar2 = FUN_004047c0(piVar1);
  param_1[6] = iVar2;
  uVar3 = FUN_004047a0(param_1[5]);
  param_1[7] = uVar3 * param_1[1] + param_1[6];
  return 1;
}

