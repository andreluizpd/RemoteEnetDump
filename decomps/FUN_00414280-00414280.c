
void __fastcall FUN_00414280(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00445aaf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CPortProxyTask::vftable;
  local_8 = 3;
  if ((HANDLE)param_1[0x49] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x49]);
  }
  local_8._0_1_ = 2;
  FUN_004140f0(param_1 + 0x2a);
  local_8._0_1_ = 1;
  FUN_004140f0(param_1 + 0xd);
  local_8 = (uint)local_8._1_3_ << 8;
  if ((void *)param_1[9] != (void *)0x0) {
    _free((void *)param_1[9]);
  }
  local_8 = 0xffffffff;
  if ((void *)param_1[5] != (void *)0x0) {
    _free((void *)param_1[5]);
  }
  ExceptionList = local_10;
  return;
}

