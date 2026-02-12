
/* Library Function - Single Match
    __mbscmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbscmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str1 == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (*(int *)(local_10 + 8) == 0) {
    iVar2 = _strcmp((char *)_Str1,(char *)_Str2);
LAB_0042e1e9:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    do {
      uVar5 = (uint)*_Str1;
      pbVar7 = _Str1 + 1;
      if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) != 0) {
        if (*pbVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)CONCAT11(*_Str1,*pbVar7);
          pbVar7 = _Str1 + 2;
        }
      }
      uVar3 = (uint)*_Str2;
      pbVar6 = _Str2 + 1;
      if ((*(byte *)(uVar3 + 0x1d + local_10) & 4) != 0) {
        if (*pbVar6 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)CONCAT11(*_Str2,*pbVar6);
          pbVar6 = _Str2 + 2;
        }
      }
      uVar4 = (ushort)uVar5;
      if ((ushort)uVar3 != uVar4) {
        iVar2 = (-(uint)((ushort)uVar3 < uVar4) & 2) - 1;
        goto LAB_0042e1e9;
      }
      _Str2 = pbVar6;
      _Str1 = pbVar7;
    } while (uVar4 != 0);
    if (local_8 != (char)uVar5) {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0;
  }
  return iVar2;
}

