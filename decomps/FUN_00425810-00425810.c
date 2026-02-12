
bool __thiscall FUN_00425810(void *this,uint param_1,int *param_2)

{
  int iVar1;
  
  if (*(uint *)((int)this + 0xbc) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0xb8) + param_1 * 4);
  if (iVar1 != 0) {
    if (iVar1 == 0) {
      return false;
    }
    *param_2 = iVar1;
  }
  return iVar1 != 0;
}

