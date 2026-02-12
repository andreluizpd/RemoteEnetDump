
void __cdecl FUN_00402140(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,rsize_t param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  errno_t eVar3;
  
  if (param_4 == 0xffffffff) {
    pwVar2 = param_3;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_4 = ((int)pwVar2 - (int)(param_3 + 1) >> 1) + 1;
  }
  eVar3 = _wmemcpy_s(param_1,param_2,param_3,param_4);
  switch(eVar3) {
  case 0:
  case 0x50:
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  case 0xc:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  case 0x16:
  case 0x22:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
}

