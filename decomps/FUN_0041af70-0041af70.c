
void __fastcall FUN_0041af70(int param_1)

{
  undefined4 *puVar1;
  
  FUN_0041ad10(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      _free((void *)*puVar1);
      *puVar1 = 0;
    }
    if ((void *)puVar1[1] != (void *)0x0) {
      _free((void *)puVar1[1]);
      puVar1[1] = 0;
    }
    puVar1[2] = 0;
    FUN_0042bc24(puVar1);
  }
  FUN_004184d0(param_1);
  return;
}

