
uint __thiscall FUN_00424eb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar3 = FUN_00404900(this,uVar2 + 1);
    if ((char)uVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar1 = (undefined4 *)(*this + uVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

