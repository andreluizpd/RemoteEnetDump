
HWND __thiscall
FUN_00412340(void *this,HWND param_1,int *param_2,LPCWSTR param_3,uint param_4,DWORD param_5,
            HMENU param_6,ushort param_7,LPVOID param_8)

{
  void *pvVar1;
  HANDLE hProcess;
  HWND pHVar2;
  undefined4 *lpBaseAddress;
  SIZE_T dwSize;
  
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = __AllocStdCallThunk_cmn();
    *(void **)((int)this + 0x14) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      SetLastError(0xe);
      return (HWND)0x0;
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
  if (param_7 == 0) {
    return (HWND)0x0;
  }
  FUN_00411110(0x459830,(int *)((int)this + 8),(int)this);
  if ((param_6 == (HMENU)0x0) && ((param_4 & 0x40000000) != 0)) {
    param_6 = (HMENU)this;
  }
  if (param_2 == (int *)0x0) {
    param_2 = &DAT_0045692c;
  }
  pHVar2 = CreateWindowExW(param_5,(LPCWSTR)(uint)param_7,param_3,param_4,*param_2,param_2[1],
                           param_2[2] - *param_2,param_2[3] - param_2[1],param_1,param_6,
                           DAT_004597ec,param_8);
  return pHVar2;
}

