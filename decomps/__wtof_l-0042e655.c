
/* Library Function - Single Match
    __wtof_l
   
   Library: Visual Studio 2010 Release */

double __cdecl __wtof_l(wchar_t *_Str,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  localeinfo_struct local_30;
  int local_28;
  char local_24;
  _flt local_20;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_30,_Locale);
  if (_Str == (wchar_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  else {
    while (iVar2 = _iswctype(*_Str,8), iVar2 != 0) {
      _Str = _Str + 1;
    }
    __wfltin2(&local_20,_Str,&local_30);
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  fVar3 = (float10)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)fVar3;
}

