
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *pcVar1;
  byte *pbVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  PCNZWCH pWVar5;
  uint uVar6;
  LPWSTR pWVar7;
  int *in_ECX;
  char *pcVar8;
  int iVar9;
  byte *in_EDX;
  LPWSTR lpWideCharStr;
  PCNZWCH local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)param_3;
  pcVar8 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) goto LAB_00437af0;
  }
  else {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar1 == '\0') goto LAB_004378cb;
      pcVar1 = pcVar1 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_004378cb:
    param_4 = param_4 + (-1 - (int)pcVar8);
  }
  pbVar2 = in_EDX;
  iVar9 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_00437af0;
  }
  else {
    do {
      iVar9 = iVar9 + -1;
      if (*pbVar2 == 0) goto LAB_004378ee;
      pbVar2 = pbVar2 + 1;
    } while (iVar9 != 0);
    iVar9 = -1;
LAB_004378ee:
    param_5 = param_5 + (-1 - iVar9);
  }
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if ((param_4 == (char *)param_5) ||
       (((1 < param_5 || (1 < (int)param_4)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_00437af0;
    if (0 < (int)param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*(byte *)param_3 < *pBVar4 || (pBVar4[1] < *(byte *)param_3))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00437af0;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00437af0;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_00437af0;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_20 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      pWVar5 = (PCNZWCH)&stack0xffffffc4;
      local_20 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00437a26:
        local_20 = pWVar5 + 4;
      }
    }
    else {
      pWVar5 = (PCNZWCH)_malloc(uVar6);
      local_20 = pWVar5;
      if (pWVar5 != (PCNZWCH)0x0) {
        pWVar5[0] = L'\xdddd';
        pWVar5[1] = L'\0';
        goto LAB_00437a26;
      }
    }
  }
  if (local_20 == (PCNZWCH)0x0) goto LAB_00437af0;
  iVar9 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)param_3,(int)param_4,local_20,cchWideChar);
  if ((iVar9 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        pWVar7 = (LPWSTR)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00437aa6:
          lpWideCharStr = pWVar7 + 4;
        }
      }
      else {
        pWVar7 = (LPWSTR)_malloc(_Size);
        lpWideCharStr = pWVar7;
        if (pWVar7 != (LPWSTR)0x0) {
          pWVar7[0] = L'\xdddd';
          pWVar7[1] = L'\0';
          goto LAB_00437aa6;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar9 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_5,lpWideCharStr,uVar6);
      if (iVar9 != 0) {
        CompareStringW((LCID)param_1,param_2,local_20,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
  __freea(local_20);
LAB_00437af0:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
}

