
void __fastcall FUN_00425d50(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    do {
      if ((*(int *)(*(int *)(param_1 + 0xb8) + uVar2 * 4) != 0) &&
         (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xb8) + uVar2 * 4),
         puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xbc));
  }
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
    _free(*(void **)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

