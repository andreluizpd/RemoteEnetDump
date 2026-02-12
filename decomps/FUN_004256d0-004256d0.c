
undefined1 __thiscall FUN_004256d0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = 0;
  uVar1 = (**(code **)(*this + 0x1e4))(param_1);
  if (-1 < (int)uVar1) {
    if (*(uint *)((int)this + 0xbc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    if (*(int *)(*(int *)((int)this + 0xb8) + uVar1 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)((int)this + 0xb8) + uVar1 * 4) + 0x14))(param_2);
      uVar2 = 1;
    }
  }
  return uVar2;
}

