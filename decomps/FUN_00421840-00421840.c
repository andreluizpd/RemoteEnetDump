
void __cdecl FUN_00421840(WCHAR *param_1,WCHAR *param_2,short param_3,void *param_4)

{
  int iVar1;
  DWORD dwErrCode;
  undefined4 local_444;
  int local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  WCHAR local_424 [2];
  void *local_420;
  int local_41c;
  WCHAR local_418;
  undefined1 local_416 [518];
  CHAR local_210;
  undefined1 local_20f [259];
  CHAR local_10c;
  undefined1 local_10b [259];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_440 = (int)param_3;
  local_420 = param_4;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_430 = 0;
  local_42c = 0;
  local_428 = 0;
  local_424[0] = L'0';
  local_424[1] = L'\0';
  local_41c = 0;
  local_444 = 0x400;
  local_418 = L'\0';
  _memset(local_416,0,0x206);
  if ((param_1 == (WCHAR *)0x0) || (*param_1 == L'\0')) {
    FUN_00421700(&local_418,0x104);
    param_1 = &local_418;
  }
  if ((param_2 == (WCHAR *)0x0) || (*param_2 == L'\0')) {
    param_2 = local_424;
  }
  local_210 = '\0';
  _memset(local_20f,0,0x103);
  WideCharToMultiByte(0xfde9,0,param_1,-1,&local_210,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  local_10c = '\0';
  _memset(local_10b,0,0x103);
  WideCharToMultiByte(0xfde9,0,param_2,-1,&local_10c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = getaddrinfo(&local_210,&local_10c,&local_444,&local_41c);
  if ((iVar1 != -1) && (local_41c != 0)) {
    FID_conflict__memcpy(local_420,*(void **)(local_41c + 0x18),*(size_t *)(local_41c + 0x10));
    freeaddrinfo(local_41c);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  dwErrCode = WSAGetLastError();
  SetLastError(dwErrCode);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

