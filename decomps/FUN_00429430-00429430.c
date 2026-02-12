
undefined4 FUN_00429430(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  DWORD local_14;
  DWORD local_10;
  undefined4 local_c;
  HANDLE local_8;
  
  TokenHandle = &local_8;
  DVar2 = 0;
  DesiredAccess = 8;
  local_8 = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = 0;
  }
  else {
    BVar1 = GetTokenInformation(local_8,TokenElevation,&local_c,4,&local_14);
    uVar3 = local_c;
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar3 = 0;
    }
  }
  if (local_8 != (HANDLE)0x0) {
    CloseHandle(local_8);
    local_8 = (HANDLE)0x0;
  }
  if (DVar2 != 0) {
    local_10 = DVar2;
    __CxxThrowException_8(&local_10,&DAT_00453ed0);
  }
  return uVar3;
}

