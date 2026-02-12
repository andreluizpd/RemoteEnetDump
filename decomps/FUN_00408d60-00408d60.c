
undefined4 __fastcall FUN_00408d60(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  param_1[4] = param_1[4] + -8;
  if ((*(int *)param_1[4] != 0) && ((*(byte *)(param_1 + 0xb) & 1) == 0)) {
    pvVar1 = (void *)*param_1;
    if (*(uint *)((int)pvVar1 + 0x10) < *(int *)((int)pvVar1 + 0xc) + 1U) {
      FUN_00407ec0(pvVar1,1);
    }
    puVar2 = *(undefined1 **)((int)pvVar1 + 0xc);
    *(undefined1 **)((int)pvVar1 + 0xc) = puVar2 + 1;
    *puVar2 = 10;
    FUN_00408a50(param_1);
  }
  pvVar1 = (void *)*param_1;
  if (*(uint *)((int)pvVar1 + 0x10) < *(int *)((int)pvVar1 + 0xc) + 1U) {
    FUN_00407ec0(pvVar1,1);
  }
  puVar2 = *(undefined1 **)((int)pvVar1 + 0xc);
  *(undefined1 **)((int)pvVar1 + 0xc) = puVar2 + 1;
  *puVar2 = 0x5d;
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}

