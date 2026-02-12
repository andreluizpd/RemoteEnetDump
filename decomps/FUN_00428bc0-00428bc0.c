
ulong __cdecl FUN_00428bc0(wchar_t *param_1)

{
  wchar_t wVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_1 != (wchar_t *)0x0) {
    if ((((*param_1 != L'\0') && (wVar1 = param_1[1], wVar1 != L'\0')) && (*param_1 == L'0')) &&
       ((wVar1 == L'x' || (wVar1 == L'X')))) {
      uVar2 = FID_conflict___wcstoul_l(param_1,&param_1,0x10);
      return uVar2;
    }
    uVar2 = __wtol(param_1);
  }
  return uVar2;
}

