
/* Library Function - Single Match
    __mbslwr_s_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __mbslwr_s_l(uchar *_Str,size_t _SizeInBytes,_locale_t _Locale)

{
  byte bVar1;
  errno_t eVar2;
  uchar *puVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  byte *pbVar7;
  byte *_LpSrcStr;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  puVar3 = _Str;
  if (_Str == (uchar *)0x0) {
    if (_SizeInBytes != 0) goto LAB_0043034e;
  }
  else if (_SizeInBytes == 0) goto LAB_0043034e;
  if (_Str == (uchar *)0x0) {
    return 0;
  }
  sVar5 = _strnlen((char *)_Str,_SizeInBytes);
  if (sVar5 < _SizeInBytes) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    bVar1 = *puVar3;
    _LpSrcStr = puVar3;
    pbVar7 = puVar3;
    do {
      if (bVar1 == 0) {
        *pbVar7 = 0;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
      bVar1 = *_LpSrcStr;
      if (((local_14.mbcinfo)->mbctype[bVar1 + 5] & 4) == 0) {
        if (((local_14.mbcinfo)->mbctype[bVar1 + 5] & 0x10) != 0) {
          bVar1 = (local_14.mbcinfo)->mbcasemap[bVar1 + 4];
        }
        *pbVar7 = bVar1;
LAB_004303ea:
        pbVar7 = pbVar7 + 1;
      }
      else {
        iVar6 = ___crtLCMapStringA(&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x100,
                                   (LPCSTR)_LpSrcStr,2,(LPSTR)&_Str,2,(local_14.mbcinfo)->mbcodepage
                                   ,1);
        if (iVar6 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x2a;
          *puVar3 = '\0';
          piVar4 = __errno();
          eVar2 = *piVar4;
          if (local_8 == '\0') {
            return eVar2;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return eVar2;
        }
        *pbVar7 = (byte)_Str;
        pbVar7 = pbVar7 + 1;
        _LpSrcStr = _LpSrcStr + 1;
        if (1 < iVar6) {
          *pbVar7 = (byte)((uint)_Str >> 8);
          goto LAB_004303ea;
        }
      }
      _LpSrcStr = _LpSrcStr + 1;
      bVar1 = *_LpSrcStr;
    } while( true );
  }
  *puVar3 = '\0';
LAB_0043034e:
  piVar4 = __errno();
  *piVar4 = 0x16;
  FUN_00433a30();
  return 0x16;
}

