
void __cdecl FUN_00416f60(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = FUN_00416ec0(param_2,param_3);
  if (puVar3 == (uint *)0x0) {
    return;
  }
  puVar3[1] = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x14);
    *(uint **)(uVar2 + 0x18) = puVar3;
    puVar3[5] = uVar2;
    *(uint **)(iVar1 + 0x14) = puVar3;
    return;
  }
  *(uint **)(param_1 + 0x10) = puVar3;
  puVar3[5] = (uint)puVar3;
  return;
}

