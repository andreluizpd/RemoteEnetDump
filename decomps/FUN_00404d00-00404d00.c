
int * __thiscall FUN_00404d00(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = *this;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar1 = iVar3 + 1;
  if (-1 < iVar1) {
    if ((int)(1U - *(int *)(iVar2 + -4) | *(int *)(iVar2 + -8) - iVar1) < 0) {
      FUN_00402d90(this,iVar1);
    }
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)(iVar3 + *this) = param_1;
                    /* WARNING: Load size is inaccurate */
    if (iVar1 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = iVar1;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(iVar1 + *this) = 0;
      return (int *)this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

