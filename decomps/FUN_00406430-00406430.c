
void __cdecl FUN_00406430(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (void *)0x0) {
    uVar1 = 0;
    if (*(int *)((int)param_1 + 0x414) != 0) {
      puVar2 = (undefined4 *)((int)param_1 + 0x424);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          _free((void *)*puVar2);
        }
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 8;
      } while (uVar1 < *(uint *)((int)param_1 + 0x414));
    }
    _free(param_1);
  }
  return;
}

