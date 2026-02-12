
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcslwr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _wcslwr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *in_ECX;
  wchar_t *_LpDestStr;
  int iVar6;
  
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (in_ECX == (wchar_t *)0x0) {
LAB_0042f3fd:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(in_ECX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *in_ECX = L'\0';
      goto LAB_0042f3fd;
    }
    if (*(LPCWSTR *)(*(int *)param_2 + 0x14) == (LPCWSTR)0x0) {
      wVar1 = *in_ECX;
      while (wVar1 != L'\0') {
        wVar1 = *in_ECX;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          *in_ECX = wVar1 + L' ';
        }
        in_ECX = in_ECX + 1;
        wVar1 = *in_ECX;
      }
      goto LAB_0042f53f;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,(LPWSTR)0x0,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_0042f485:
      __errno();
      goto LAB_0042f53f;
    }
    if (pwVar4 <= param_1) {
      _LpDestStr = (wchar_t *)0x0;
      if ((0 < (int)pwVar4) && (1 < 0xffffffe0U / (uint)pwVar4)) {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          pwVar5 = (wchar_t *)&stack0xffffffe8;
          _LpDestStr = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0042f4e6:
            _LpDestStr = pwVar5 + 4;
          }
        }
        else {
          pwVar5 = (wchar_t *)_malloc(_Size);
          _LpDestStr = pwVar5;
          if (pwVar5 != (wchar_t *)0x0) {
            pwVar5[0] = L'\xdddd';
            pwVar5[1] = L'\0';
            goto LAB_0042f4e6;
          }
        }
      }
      if (_LpDestStr != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,_LpDestStr,
                                   (int)pwVar4);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(in_ECX,(rsize_t)param_1,_LpDestStr);
        }
        __freea(_LpDestStr);
        goto LAB_0042f53f;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_0042f485;
    }
    *in_ECX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_00433a30();
LAB_0042f53f:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

