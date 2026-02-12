
int __thiscall FUN_00428540(void *this,int param_1,undefined2 param_2)

{
  undefined2 *_Src;
  int iVar1;
  int iVar2;
  rsize_t _DstSize;
  errno_t eVar3;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 < param_1) {
    param_1 = iVar2;
  }
  iVar2 = iVar2 + 1;
  if (-1 < iVar2) {
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar2) < 0) {
      FUN_00402df0(this,iVar2);
    }
                    /* WARNING: Load size is inaccurate */
    _DstSize = (iVar2 - param_1) * 2;
    _Src = (undefined2 *)(*this + param_1 * 2);
    eVar3 = _memmove_s(_Src + 1,_DstSize,_Src,_DstSize);
    switch(eVar3) {
    case 0:
    case 0x50:
      *_Src = param_2;
                    /* WARNING: Load size is inaccurate */
      if (iVar2 <= *(int *)(*this + -8)) {
        *(int *)(*this + -0xc) = iVar2;
                    /* WARNING: Load size is inaccurate */
        *(undefined2 *)(*this + iVar2 * 2) = 0;
        return iVar2;
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

