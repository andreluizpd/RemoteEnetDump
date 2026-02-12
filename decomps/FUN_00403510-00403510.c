
int __thiscall FUN_00403510(void *this,int param_1,char *param_2)

{
  void *_Src;
  char cVar1;
  errno_t eVar2;
  rsize_t _DstSize;
  char *pcVar3;
  rsize_t _DstSize_00;
  int iVar4;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar4 = *(int *)(*this + -0xc);
  if (iVar4 < param_1) {
    param_1 = iVar4;
  }
  if (param_2 == (char *)0x0) {
    _DstSize_00 = 0;
  }
  else {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _DstSize_00 = (int)pcVar3 - (int)(param_2 + 1);
  }
  if ((int)_DstSize_00 < 1) {
    return iVar4;
  }
  iVar4 = iVar4 + _DstSize_00;
  if (-1 < iVar4) {
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar4) < 0) {
      FUN_00402d90(this,iVar4);
    }
                    /* WARNING: Load size is inaccurate */
    _DstSize = ((iVar4 - _DstSize_00) - param_1) + 1;
    _Src = (void *)(*this + param_1);
    eVar2 = _memmove_s((void *)(*this + _DstSize_00 + param_1),_DstSize,_Src,_DstSize);
    switch(eVar2) {
    case 0:
    case 0x50:
      eVar2 = _memcpy_s(_Src,_DstSize_00,param_2,_DstSize_00);
      switch(eVar2) {
      case 0:
      case 0x50:
                    /* WARNING: Load size is inaccurate */
        if (iVar4 <= *(int *)(*this + -8)) {
          *(int *)(*this + -0xc) = iVar4;
                    /* WARNING: Load size is inaccurate */
          *(undefined1 *)(iVar4 + *this) = 0;
          return iVar4;
        }
        break;
      default:
        goto switchD_004035a2_caseD_1;
      case 0xc:
        goto switchD_004035a2_caseD_c;
      case 0x16:
      case 0x22:
        break;
      }
      break;
    default:
switchD_004035a2_caseD_1:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    case 0xc:
switchD_004035a2_caseD_c:
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

