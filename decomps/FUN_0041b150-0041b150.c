
INT_PTR __thiscall FUN_0041b150(void *this,HWND param_1,LPARAM param_2)

{
  void *pvVar1;
  HANDLE hProcess;
  INT_PTR IVar2;
  undefined4 *lpBaseAddress;
  SIZE_T dwSize;
  
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = __AllocStdCallThunk_cmn();
    *(void **)((int)this + 0x14) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      SetLastError(0xe);
      return -1;
    }
  }
  lpBaseAddress = *(undefined4 **)((int)this + 0x14);
  dwSize = 0xd;
  *lpBaseAddress = 0x42444c7;
  lpBaseAddress[1] = 0;
  *(undefined1 *)(lpBaseAddress + 2) = 0xe9;
  *(int *)((int)lpBaseAddress + 9) = -0xd - (int)lpBaseAddress;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  FUN_00411110(0x459830,(int *)((int)this + 8),(int)this);
  IVar2 = DialogBoxParamW(DAT_004597f0,(LPCWSTR)0x81,param_1,FUN_00412420,param_2);
  return IVar2;
}

