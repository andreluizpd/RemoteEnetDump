
void __fastcall FUN_0041ad10(int param_1)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00459078 + 0x10);
  local_8 = 1;
  EnterCriticalSection(lpCriticalSection);
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if ((puVar1 != (undefined4 *)0x0) && (0 < (int)puVar1[1])) {
    DestroyWindow(*(HWND *)*puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      _free((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_0042bc24(puVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

