
void __fastcall FUN_00408dd0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  void *pvVar4;
  
  if (param_1[4] == param_1[3]) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar1 = param_1[4];
  if (*(char *)(iVar1 + -4) != '\0') {
    if (*(int *)(iVar1 + -8) != 0) {
      pvVar4 = (void *)*param_1;
      if (*(uint *)((int)pvVar4 + 0x10) < *(int *)((int)pvVar4 + 0xc) + 1U) {
        FUN_00407ec0(pvVar4,1);
      }
      puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
      *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
      *puVar2 = 0x2c;
      if ((*(byte *)(param_1 + 0xb) & 1) == 0) goto LAB_00408e44;
      pvVar4 = (void *)*param_1;
      if (*(uint *)((int)pvVar4 + 0x10) < *(int *)((int)pvVar4 + 0xc) + 1U) {
        FUN_00407ec0(pvVar4,1);
      }
      puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
      *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
      *puVar2 = 0x20;
    }
    if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
LAB_00408e44:
      pvVar4 = (void *)*param_1;
      if (*(uint *)((int)pvVar4 + 0x10) < *(int *)((int)pvVar4 + 0xc) + 1U) {
        FUN_00407ec0(pvVar4,1);
      }
      puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
      *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
      *puVar2 = 10;
      FUN_00408a50(param_1);
      *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
      return;
    }
    goto LAB_00408ecc;
  }
  pvVar4 = (void *)*param_1;
  uVar3 = *(int *)((int)pvVar4 + 0xc) + 1;
  if (*(uint *)(iVar1 + -8) == 0) {
LAB_00408ea5:
    if (*(uint *)((int)pvVar4 + 0x10) < uVar3) {
      FUN_00407ec0(pvVar4,1);
    }
    puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
    *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
    *puVar2 = 10;
  }
  else {
    if ((*(uint *)(iVar1 + -8) & 1) == 0) {
      if (*(uint *)((int)pvVar4 + 0x10) < uVar3) {
        FUN_00407ec0(pvVar4,1);
      }
      puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
      *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
      *puVar2 = 0x2c;
      pvVar4 = (void *)*param_1;
      uVar3 = *(int *)((int)pvVar4 + 0xc) + 1;
      goto LAB_00408ea5;
    }
    if (*(uint *)((int)pvVar4 + 0x10) < uVar3) {
      FUN_00407ec0(pvVar4,1);
    }
    puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
    *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
    *puVar2 = 0x3a;
    pvVar4 = (void *)*param_1;
    if (*(uint *)((int)pvVar4 + 0x10) < *(int *)((int)pvVar4 + 0xc) + 1U) {
      FUN_00407ec0(pvVar4,1);
    }
    puVar2 = *(undefined1 **)((int)pvVar4 + 0xc);
    *(undefined1 **)((int)pvVar4 + 0xc) = puVar2 + 1;
    *puVar2 = 0x20;
  }
  if ((*(byte *)(iVar1 + -8) & 1) == 0) {
    FUN_00408a50(param_1);
  }
LAB_00408ecc:
  *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
  return;
}

