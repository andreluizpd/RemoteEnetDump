
int * __fastcall FUN_0040cd70(int *param_1)

{
  wint_t *pwVar1;
  void *_Dst;
  int iVar2;
  errno_t eVar3;
  _locale_t unaff_ESI;
  wint_t *pwVar4;
  int iVar5;
  
  pwVar4 = (wint_t *)*param_1;
  iVar2 = FID_conflict___iswspace_l(*pwVar4,unaff_ESI);
  while (iVar2 != 0) {
    pwVar1 = pwVar4 + 1;
    pwVar4 = pwVar4 + 1;
    iVar2 = FID_conflict___iswspace_l(*pwVar1,unaff_ESI);
  }
  pwVar1 = (wint_t *)*param_1;
  if (pwVar4 == pwVar1) {
    return param_1;
  }
  iVar2 = *(int *)(pwVar1 + -6);
  iVar5 = (int)pwVar4 - (int)pwVar1 >> 1;
  if (-1 < iVar2) {
    if ((int)(1U - *(int *)(pwVar1 + -2) | *(int *)(pwVar1 + -4) - iVar2) < 0) {
      FUN_00402df0(param_1,iVar2);
    }
    _Dst = (void *)*param_1;
    iVar2 = *(int *)((int)_Dst + -0xc) - iVar5;
    eVar3 = _memmove_s(_Dst,*(int *)((int)_Dst + -0xc) * 2 + 2,(void *)((int)_Dst + iVar5 * 2),
                       iVar2 * 2 + 2);
    switch(eVar3) {
    case 0:
    case 0x50:
      if ((-1 < iVar2) && (iVar2 <= *(int *)(*param_1 + -8))) {
        *(int *)(*param_1 + -0xc) = iVar2;
        *(undefined2 *)(*param_1 + iVar2 * 2) = 0;
        return param_1;
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

