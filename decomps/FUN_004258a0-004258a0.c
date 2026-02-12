
bool __thiscall FUN_004258a0(void *this,uint param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(uint *)((int)this + 0xbc) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  piVar1 = *(int **)(*(int *)((int)this + 0xb8) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      return false;
    }
    (**(code **)(*piVar1 + 0x10))(param_2);
  }
  return piVar1 != (int *)0x0;
}

