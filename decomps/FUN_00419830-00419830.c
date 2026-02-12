
void __fastcall FUN_00419830(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00445d56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = ATL::CRegObject::vftable;
  local_8 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = param_1 + 1;
  FUN_00419440(piVar1);
  LeaveCriticalSection(lpCriticalSection);
  local_8 = local_8 & 0xffffff00;
  if (*(char *)(param_1 + 10) != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    DeleteCriticalSection(lpCriticalSection);
  }
  local_8 = 3;
  FUN_00419440(piVar1);
  local_8 = 0xffffffff;
  if ((void *)*piVar1 != (void *)0x0) {
    _free((void *)*piVar1);
    *piVar1 = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
    param_1[2] = 0;
  }
  param_1[3] = 0;
  ExceptionList = local_10;
  return;
}

