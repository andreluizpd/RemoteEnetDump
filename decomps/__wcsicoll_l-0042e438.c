
/* Library Function - Single Match
    __wcsicoll_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __wcsicoll_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
LAB_0042e466:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if (*(LPCWSTR *)(local_14[0] + 0x10) == (LPCWSTR)0x0) {
      iVar2 = (int)_Str1 - (int)_Str2;
      do {
        uVar4 = *(ushort *)(iVar2 + (int)_Str2);
        if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
          uVar4 = uVar4 + 0x20;
        }
        uVar3 = (uint)(ushort)*_Str2;
        if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
          uVar3 = uVar3 + 0x20 & 0xffff;
        }
        _Str2 = _Str2 + 1;
      } while ((uVar4 != 0) && (uVar4 == (ushort)uVar3));
      iVar2 = uVar4 - uVar3;
    }
    else {
      iVar2 = ___crtCompareStringW(*(LPCWSTR *)(local_14[0] + 0x10),0x1001,_Str1,-1,_Str2,-1);
      if (iVar2 == 0) {
        piVar1 = __errno();
        *piVar1 = 0x16;
        goto LAB_0042e466;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}

