
void FUN_00413e70(short *param_1,LPDWORD param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  WCHAR *lpCommandLine;
  BOOL BVar4;
  int iVar5;
  _STARTUPINFOW local_470;
  LPDWORD local_42c;
  _PROCESS_INFORMATION local_428;
  WCHAR local_418 [520];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_42c = param_2;
  if (param_1 == (short *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((int)((*param_1 != 0) - 1) < 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _memset(local_418,0,0x410);
  lpCommandLine = local_418;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = ((int)psVar2 - (int)(param_1 + 1) >> 1) + 5;
  if ((0x207 < uVar3) && (lpCommandLine = (WCHAR *)_malloc(uVar3 * 2), lpCommandLine == (LPWSTR)0x0)
     ) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = (int)lpCommandLine - (int)param_1;
  do {
    sVar1 = *param_1;
    *(short *)(iVar5 + (int)param_1) = sVar1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  _memset(&local_470,0,0x44);
  local_428.hProcess = (HANDLE)0x0;
  local_428.hThread = (HANDLE)0x0;
  local_428.dwProcessId = 0;
  local_428.dwThreadId = 0;
  local_470.cb = 0x44;
  local_470.dwFlags = 1;
  local_470.wShowWindow = 0;
  BVar4 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0x4000400,(LPVOID)0x0,(LPCWSTR)0x0,&local_470,
                         &local_428);
  if (BVar4 == 0) {
    GetLastError();
  }
  else {
    WaitForSingleObject(local_428.hProcess,0xffffffff);
    GetExitCodeProcess(local_428.hProcess,local_42c);
  }
  if (local_428.hThread != (HANDLE)0x0) {
    CloseHandle(local_428.hThread);
  }
  if (local_428.hProcess != (HANDLE)0x0) {
    CloseHandle(local_428.hProcess);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

