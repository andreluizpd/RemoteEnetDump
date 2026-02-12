
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint _Size;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint cchWideChar;
  uint uVar5;
  LPCWSTR pWVar6;
  int iVar7;
  LPCWSTR local_10;
  
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_0043ddfc;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_0043ddfc:
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar1 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar1) {
      param_5 = iVar7;
    }
  }
  if (param_8 == 0) {
    param_8 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0043dfa1;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      pWVar6 = (LPCWSTR)&stack0xffffffe0;
      local_10 = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_0043de8c:
        local_10 = pWVar6 + 4;
      }
    }
    else {
      pWVar6 = (LPCWSTR)_malloc(uVar5);
      local_10 = pWVar6;
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_0043de8c;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_0043dfa1;
  iVar7 = MultiByteToWideChar(param_8,1,param_4,param_5,local_10,cchWideChar);
  if ((iVar7 != 0) &&
     (uVar5 = LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)0x0,0), uVar5 != 0)) {
    if ((param_3 & 0x400) == 0) {
      if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
        pWVar6 = (LPCWSTR)0x0;
      }
      else {
        _Size = uVar5 * 2 + 8;
        if (_Size < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_0043df95;
          pWVar6 = (LPCWSTR)&stack0xffffffe8;
        }
        else {
          pWVar6 = (LPCWSTR)_malloc(_Size);
          if (pWVar6 != (LPCWSTR)0x0) {
            pWVar6[0] = L'\xdddd';
            pWVar6[1] = L'\0';
            pWVar6 = pWVar6 + 4;
          }
        }
      }
      if (pWVar6 != (LPCWSTR)0x0) {
        iVar7 = LCMapStringW(param_2,param_3,local_10,cchWideChar,pWVar6,uVar5);
        if (iVar7 != 0) {
          if (param_7 == 0) {
            param_7 = 0;
            param_6 = (LPSTR)0x0;
          }
          WideCharToMultiByte(param_8,0,pWVar6,uVar5,param_6,param_7,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(pWVar6);
      }
    }
    else if ((param_7 != 0) && ((int)uVar5 <= param_7)) {
      LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)param_6,param_7);
    }
  }
LAB_0043df95:
  __freea(local_10);
LAB_0043dfa1:
  iVar7 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

