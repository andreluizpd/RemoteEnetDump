
undefined1 __thiscall FUN_00425cc0(void *this,LPCWSTR param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_00425c20(this,param_1);
  if (-1 < (int)uVar1) {
    if (*(uint *)((int)this + 0xbc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    if (*(int *)(*(int *)((int)this + 0xb8) + uVar1 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)((int)this + 0xb8) + uVar1 * 4) + 0x10))(param_2);
      uVar2 = 1;
    }
  }
  return uVar2;
}

