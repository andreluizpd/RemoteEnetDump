
undefined4 __thiscall FUN_004100d0(void *this,HWND param_1)

{
  int iVar1;
  void *pvVar2;
  HANDLE hProcess;
  LONG LVar3;
  undefined4 *lpBaseAddress;
  SIZE_T dwSize;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*this + 8))();
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar2 = __AllocStdCallThunk_cmn();
    *(void **)((int)this + 0x14) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  lpBaseAddress = *(undefined4 **)((int)this + 0x14);
  dwSize = 0xd;
  *lpBaseAddress = 0x42444c7;
  lpBaseAddress[1] = this;
  *(undefined1 *)(lpBaseAddress + 2) = 0xe9;
  *(int *)((int)lpBaseAddress + 9) = (iVar1 - (int)lpBaseAddress) + -0xd;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  LVar3 = SetWindowLongW(param_1,-4,*(LONG *)((int)this + 0x14));
  if (LVar3 == 0) {
    return 0;
  }
  *(HWND *)((int)this + 4) = param_1;
  *(LONG *)((int)this + 0x20) = LVar3;
  return 1;
}

