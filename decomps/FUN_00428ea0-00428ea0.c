
void __cdecl FUN_00428ea0(short *param_1,ulong *param_2)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *_Str;
  size_t sVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *local_24c;
  ulong *local_248;
  undefined1 local_241;
  undefined4 local_240 [3];
  wchar_t *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004450cb;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_248 = param_2;
  local_241 = 0;
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) goto LAB_0042903f;
  FUN_00405ba0(local_240,param_1);
  local_8 = 0;
  piVar2 = FUN_0040cea0((int *)local_234);
  FUN_0040cd70(piVar2);
  if (0 < *(int *)(local_234[0] + -6)) {
    FUN_00420df0((int *)local_234);
    if (*(int *)(local_234[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    _Str = local_234[0];
    if (*local_234[0] == L'x') {
      FUN_00428540(local_234,0,0x30);
      _Str = local_234[0];
    }
    uVar6 = (uint)(*_Str == L'-');
    sVar3 = _wcsspn(_Str + uVar6,(wchar_t *)PTR_u_0123456789abcdefxABCDEFX_0045754c);
    if (_Str[sVar3 + uVar6] == L'\0') {
      sVar3 = _wcsspn(_Str + uVar6,(wchar_t *)PTR_u_0123456789_00457550);
      if (_Str[sVar3 + uVar6] == L'\0') {
        uVar4 = __wtol(_Str);
        *local_248 = uVar4;
      }
      else {
        pwVar5 = _wcschr(_Str,L'x');
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar5 = _Str;
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != L'\0');
          if ((((uint)((int)pwVar5 - (int)(_Str + 1) >> 1) < 2) || (*_Str != L'0')) ||
             (_Str[1] != L'x')) goto LAB_0042902d;
        }
        uVar4 = FID_conflict___wcstoul_l(_Str,&local_24c,0x10);
        *local_248 = uVar4;
        if (*local_24c != L'\0') {
          *local_248 = 0;
          goto LAB_0042902d;
        }
      }
      local_241 = 1;
    }
  }
LAB_0042902d:
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
LAB_0042903f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

