
undefined4 __fastcall FUN_00408cc0(undefined4 *param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  
  param_1[4] = param_1[4] + -8;
  if (*(int *)param_1[4] != 0) {
    pvVar2 = (void *)*param_1;
    if (*(uint *)((int)pvVar2 + 0x10) < *(int *)((int)pvVar2 + 0xc) + 1U) {
      FUN_00407ec0(pvVar2,1);
    }
    puVar3 = *(undefined1 **)((int)pvVar2 + 0xc);
    *(undefined1 **)((int)pvVar2 + 0xc) = puVar3 + 1;
    *puVar3 = 10;
    uVar1 = *(undefined1 *)(param_1 + 9);
    iVar4 = ((uint)(param_1[4] - param_1[3]) >> 3) * param_1[10];
    pvVar2 = (void *)*param_1;
    if (*(uint *)((int)pvVar2 + 0x10) < (uint)(*(int *)((int)pvVar2 + 0xc) + iVar4)) {
      FUN_00407ec0(pvVar2,iVar4);
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = *(undefined1 **)((int)pvVar2 + 0xc);
      *(undefined1 **)((int)pvVar2 + 0xc) = puVar3 + 1;
      *puVar3 = uVar1;
    }
  }
  pvVar2 = (void *)*param_1;
  if (*(uint *)((int)pvVar2 + 0x10) < *(int *)((int)pvVar2 + 0xc) + 1U) {
    FUN_00407ec0(pvVar2,1);
  }
  puVar3 = *(undefined1 **)((int)pvVar2 + 0xc);
  *(undefined1 **)((int)pvVar2 + 0xc) = puVar3 + 1;
  *puVar3 = 0x7d;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}

