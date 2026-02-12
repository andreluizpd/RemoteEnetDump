
/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(wchar_t const *,wchar_t const * *,int,int)
   
   Library: Visual Studio 2010 Release */

ulong __cdecl wcstoxl(wchar_t *param_1,wchar_t **param_2,int param_3,int param_4)

{
  wchar_t _C;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ushort uVar8;
  uint local_8;
  
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (wchar_t *)0x0) || ((param_3 != 0 && ((param_3 < 2 || (0x24 < param_3)))))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    return 0;
  }
  local_8 = 0;
  pwVar7 = param_1;
  do {
    pwVar6 = pwVar7;
    _C = *pwVar6;
    pwVar7 = pwVar6 + 1;
    iVar2 = _iswctype(_C,8);
  } while (iVar2 != 0);
  if (_C == L'-') {
    param_4 = param_4 | 2;
LAB_0043019f:
    _C = *pwVar7;
    pwVar7 = pwVar6 + 2;
  }
  else if (_C == L'+') goto LAB_0043019f;
  uVar5 = (uint)(ushort)_C;
  if (param_3 == 0) {
    iVar2 = __wchartodigit(_C);
    if (iVar2 != 0) {
      param_3 = 10;
      goto LAB_004301fd;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_3 = 8;
      goto LAB_004301fd;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar2 = __wchartodigit(_C), iVar2 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar5 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_004301fd:
  uVar3 = (uint)(0xffffffff / (ulonglong)(uint)param_3);
  do {
    uVar8 = (ushort)uVar5;
    uVar4 = __wchartodigit(uVar8);
    if (uVar4 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_0043025e:
        pwVar7 = pwVar7 + -1;
        if ((param_4 & 8U) == 0) {
          if (param_2 != (wchar_t **)0x0) {
            pwVar7 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4U) != 0) ||
                (((param_4 & 1U) == 0 &&
                 ((((param_4 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar1 = __errno();
          *piVar1 = 0x22;
          if ((param_4 & 1U) == 0) {
            local_8 = ((param_4 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_2 = pwVar7;
        }
        if ((param_4 & 2U) != 0) {
          local_8 = -local_8;
        }
        return local_8;
      }
      if ((ushort)(uVar8 - 0x61) < 0x1a) {
        uVar5 = uVar5 - 0x20;
      }
      uVar4 = uVar5 - 0x37;
    }
    if ((uint)param_3 <= uVar4) goto LAB_0043025e;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar4 <= (uint)(0xffffffff % (ulonglong)(uint)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
      if (param_2 == (wchar_t **)0x0) goto LAB_0043025e;
    }
    uVar5 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}

