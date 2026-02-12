
/* Library Function - Single Match
    _wcsspn
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _wcsspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  wVar4 = *_Str;
  pwVar3 = _Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Control;
    pwVar2 = _Control;
    do {
      while (wVar1 != wVar4) {
        if (wVar1 == L'\0') goto LAB_0042f60f;
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      pwVar3 = pwVar3 + 1;
      wVar4 = *pwVar3;
      wVar1 = *_Control;
      pwVar2 = _Control;
    } while (wVar4 != L'\0');
  }
LAB_0042f60f:
  return (int)pwVar3 - (int)_Str >> 1;
}

