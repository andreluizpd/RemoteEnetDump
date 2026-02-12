
void __fastcall FUN_00429ab0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004473b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CVehicleDetectTask::vftable;
  local_8 = 2;
  FUN_004295c0((int)param_1);
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  local_8._0_1_ = 1;
  FUN_00426220(param_1 + 0xec);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004299d0((int)(param_1 + 0x38));
  local_8 = 0xffffffff;
  FUN_00428180(param_1 + 7);
  ExceptionList = local_10;
  return;
}

