
undefined4 __thiscall FUN_00404a20(void *this,int param_1,int param_2)

{
  int iVar1;
  rsize_t _DstSize;
  errno_t eVar2;
  int iVar3;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar3 = *(int *)(iVar1 + -0xc);
  if (0x7fffffff - param_2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070216);
  }
  if (iVar3 < param_1 + param_2) {
    param_2 = iVar3 - param_1;
  }
  if (0 < param_2) {
    _DstSize = ((iVar3 - param_1) - param_2) + 1;
    iVar3 = iVar3 - param_2;
    if (1 < *(int *)(iVar1 + -4)) {
      FUN_00402860(this,*(int *)(iVar1 + -0xc));
    }
                    /* WARNING: Load size is inaccurate */
    eVar2 = _memmove_s((void *)(param_1 + *this),_DstSize,(void *)(param_1 + *this + param_2),
                       _DstSize);
    switch(eVar2) {
    case 0:
    case 0x50:
                    /* WARNING: Load size is inaccurate */
      if ((-1 < iVar3) && (iVar3 <= *(int *)(*this + -8))) {
        *(int *)(*this + -0xc) = iVar3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)(iVar3 + *this) = 0;
        break;
      }
switchD_00404a9b_caseD_16:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    default:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    case 0xc:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    case 0x16:
    case 0x22:
      goto switchD_00404a9b_caseD_16;
    }
  }
                    /* WARNING: Load size is inaccurate */
  return *(undefined4 *)(*this + -0xc);
}

