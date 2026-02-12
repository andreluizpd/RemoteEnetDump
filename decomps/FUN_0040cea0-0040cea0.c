
int * __fastcall FUN_0040cea0(int *param_1)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  int iVar3;
  _locale_t unaff_EDI;
  wint_t *pwVar4;
  
  pwVar4 = (wint_t *)*param_1;
  _C = *pwVar4;
  pwVar2 = (wint_t *)0x0;
  if (_C != 0) {
    do {
      iVar1 = FID_conflict___iswspace_l(_C,unaff_EDI);
      if (iVar1 == 0) {
        pwVar2 = (wint_t *)0x0;
      }
      else if (pwVar2 == (wint_t *)0x0) {
        pwVar2 = pwVar4;
      }
      _C = pwVar4[1];
      pwVar4 = pwVar4 + 1;
    } while (_C != 0);
    if (pwVar2 != (wint_t *)0x0) {
      iVar1 = *param_1;
      iVar3 = (int)pwVar2 - iVar1 >> 1;
      if (-1 < iVar3) {
        if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar3) < 0) {
          FUN_00402df0(param_1,iVar3);
        }
        if (iVar3 <= *(int *)(*param_1 + -8)) {
          *(int *)(*param_1 + -0xc) = iVar3;
          *(undefined2 *)(*param_1 + iVar3 * 2) = 0;
          return param_1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  return param_1;
}

