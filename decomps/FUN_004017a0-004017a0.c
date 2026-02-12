
void __fastcall FUN_004017a0(undefined4 *param_1)

{
  *param_1 = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 2) != '\0') && ((HANDLE)param_1[1] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[1]);
  }
  return;
}

