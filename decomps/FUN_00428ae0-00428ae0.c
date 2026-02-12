
wchar_t * __cdecl FUN_00428ae0(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t _MaxCount;
  int iVar4;
  wchar_t *_Str1;
  int iVar5;
  uint local_8;
  
  _Str1 = param_1;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) {
    return param_1;
  }
  pwVar3 = param_2;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _MaxCount = (int)pwVar3 - (int)(param_2 + 1) >> 1;
  if (_MaxCount != 0) {
    pwVar3 = param_1 + 1;
    do {
      wVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (wVar1 != L'\0');
    iVar4 = (int)param_1 - (int)pwVar3 >> 1;
    if ((param_3 != -1) && (param_3 <= iVar4)) {
      iVar4 = param_3;
    }
    param_1 = (wchar_t *)(uint)(ushort)*param_2;
    CharUpperBuffW((LPWSTR)&param_1,1);
    iVar5 = 0;
    if (-1 < (int)(iVar4 - _MaxCount)) {
      do {
        local_8 = (uint)(ushort)*_Str1;
        CharUpperBuffW((LPWSTR)&local_8,1);
        if (((WCHAR)param_1 == (WCHAR)local_8) &&
           (iVar2 = __wcsnicmp(_Str1,param_2,_MaxCount), iVar2 == 0)) {
          return _Str1;
        }
        iVar5 = iVar5 + 1;
        _Str1 = _Str1 + 1;
      } while (iVar5 <= (int)(iVar4 - _MaxCount));
    }
    return (wchar_t *)0x0;
  }
  return param_1;
}

