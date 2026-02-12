
/* Library Function - Single Match
    __ismbcspace_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __ismbcspace_l(uint _Ch,_locale_t _Locale)

{
  BOOL BVar1;
  uint uVar2;
  undefined1 uVar3;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  WORD local_8;
  short local_6;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Ch < 0x100) {
    if ((int)(local_18.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_18.locinfo[1].lc_category[0].locale + _Ch * 2) & 8;
    }
    else {
      uVar2 = __isctype_l(_Ch,8,&local_18);
    }
  }
  else {
    local_8 = 0;
    local_6 = 0;
    uVar2 = _Ch >> 8;
    uVar3 = (undefined1)_Ch;
    _Ch._0_2_ = CONCAT11(uVar3,(char)uVar2);
    if (((local_18.mbcinfo)->ismbcodepage == 0) ||
       (BVar1 = ___crtGetStringTypeA
                          ((_locale_t)0x0,1,(LPCSTR)&_Ch,2,&local_8,(local_18.mbcinfo)->mbcodepage,
                           *(BOOL *)(local_18.mbcinfo)->mbulinfo), BVar1 == 0)) {
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    if ((local_6 == 0) && ((local_8 & 8) != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}

