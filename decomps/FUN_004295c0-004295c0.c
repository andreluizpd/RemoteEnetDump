
void __fastcall FUN_004295c0(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),1);
    if (DVar1 != 0) {
      SetEvent(*(HANDLE *)(param_1 + 4));
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),2000);
      if (DVar1 != 0) {
        TerminateThread(*(HANDLE *)(param_1 + 8),0xffffffff);
        uVar2 = FUN_00421160((LONG *)(param_1 + 0xec));
        if ((char)uVar2 != '\0') {
          FUN_00429570((void *)(param_1 + 0xe0),1000);
        }
      }
    }
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

