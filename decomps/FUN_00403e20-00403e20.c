
void * __thiscall FUN_00403e20(void *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    FUN_00403850(this,(wchar_t *)0x0,0);
    return this;
  }
  pwVar2 = param_1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  FUN_00403850(this,param_1,(int)pwVar2 - (int)(param_1 + 1) >> 1);
  return this;
}

