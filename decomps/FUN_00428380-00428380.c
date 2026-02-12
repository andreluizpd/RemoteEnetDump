
int __thiscall FUN_00428380(void *this,int param_1,undefined1 param_2)

{
  int iVar1;
  errno_t eVar2;
  int iVar3;
  undefined1 *_Src;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar3 = *(int *)(iVar1 + -0xc);
  if (iVar3 < param_1) {
    param_1 = iVar3;
  }
  iVar3 = iVar3 + 1;
  if (-1 < iVar3) {
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar3) < 0) {
      FUN_00402d90(this,iVar3);
    }
                    /* WARNING: Load size is inaccurate */
    _Src = (undefined1 *)(param_1 + *this);
    eVar2 = _memmove_s(_Src + 1,iVar3 - param_1,_Src,iVar3 - param_1);
    switch(eVar2) {
    case 0:
    case 0x50:
      *_Src = param_2;
                    /* WARNING: Load size is inaccurate */
      if (iVar3 <= *(int *)(*this + -8)) {
        *(int *)(*this + -0xc) = iVar3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)(iVar3 + *this) = 0;
        return iVar3;
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    case 0xc:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    case 0x16:
    case 0x22:
      break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

