
void __fastcall FUN_004220a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (puVar1 != (undefined1 *)0x0) {
    if ((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
      if (*(char *)(param_1 + 0x3c) != '\0') {
        for (iVar2 = *(int *)(param_1 + 0x20); iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        }
      }
      VirtualFree(*(LPVOID *)(param_1 + 8),*(SIZE_T *)(param_1 + 0x20),0x4000);
    }
    VirtualFree(*(LPVOID *)(param_1 + 8),0,0x8000);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

