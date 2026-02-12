
undefined1 __thiscall FUN_00424fd0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  if (((int)param_1 < 0) || (iVar3 = (**(code **)(*this + 0x14))(), iVar3 <= (int)param_1)) {
    return 0;
  }
  if (param_1 < *(uint *)((int)this + 0xbc)) {
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xb8) + param_1 * 4);
    uVar1 = param_1 + 1;
    if (((param_1 <= uVar1) && (uVar1 != 0)) && (uVar1 <= *(uint *)((int)this + 0xbc))) {
      iVar3 = *(uint *)((int)this + 0xbc) - uVar1;
      if (iVar3 != 0) {
        FUN_00404840((void *)(*(int *)((int)this + 0xb8) + param_1 * 4),
                     (void *)(*(int *)((int)this + 0xb8) + uVar1 * 4),iVar3);
      }
      *(int *)((int)this + 0xbc) = *(int *)((int)this + 0xbc) + -1;
      if (puVar2 == (undefined4 *)0x0) {
        return 1;
      }
      (**(code **)*puVar2)(1);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

