
void FUN_004122b0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  HANDLE hProcess;
  undefined4 *lpBaseAddress;
  SIZE_T dwSize;
  
  piVar2 = (int *)FUN_004111c0(0x459830);
  if (piVar2 == (int *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*piVar2 + 8);
  piVar2[1] = (int)param_1;
  iVar3 = (*pcVar1)();
  if (piVar2[5] == 0) {
    pvVar4 = __AllocStdCallThunk_cmn();
    piVar2[5] = (int)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00412316;
  }
  lpBaseAddress = (undefined4 *)piVar2[5];
  dwSize = 0xd;
  *lpBaseAddress = 0x42444c7;
  lpBaseAddress[1] = piVar2;
  *(undefined1 *)(lpBaseAddress + 2) = 0xe9;
  *(int *)((int)lpBaseAddress + 9) = (iVar3 - (int)lpBaseAddress) + -0xd;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
LAB_00412316:
  pcVar1 = (code *)piVar2[5];
  SetWindowLongW(param_1,-4,(LONG)pcVar1);
  (*pcVar1)(param_1,param_2,param_3,param_4);
  return;
}

