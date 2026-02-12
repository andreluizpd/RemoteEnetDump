
/* Library Function - Single Match
    __wfltin2
   
   Library: Visual Studio 2010 Release */

FLT __cdecl __wfltin2(FLT _Fit,wchar_t *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  wchar_t *local_28;
  wchar_t *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = ___wstrgtold12_l(&local_14,&local_28,_Str,0,0,0,0,_Locale);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Fit->nbytes = (int)local_28 - (int)local_24 >> 1;
  *(undefined4 *)&_Fit->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Fit->dval + 4) = local_20.x._4_4_;
  _Fit->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}

