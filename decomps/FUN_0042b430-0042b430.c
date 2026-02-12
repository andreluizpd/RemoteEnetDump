
void FUN_0042b430(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  bool bVar3;
  u_short uVar4;
  uint uVar5;
  HRESULT HVar6;
  int iVar7;
  DWORD DVar8;
  ulonglong uVar9;
  _FILETIME local_214;
  _FILETIME local_20c;
  int local_204 [74];
  sockaddr local_dc [8];
  _SYSTEMTIME local_5c;
  _SYSTEMTIME local_4c;
  short local_3c [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447806;
  local_10 = ExceptionList;
  uVar5 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  HVar6 = CoInitializeEx((LPVOID)0x0,2);
  FUN_00403220(local_204);
  local_8 = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  local_3c[9] = 0;
  local_3c[10] = 0;
  local_3c[0xb] = 0;
  local_3c[0xc] = 0;
  local_3c[0xd] = 0;
  local_3c[0xe] = 0;
  local_3c[0xf] = 0;
  local_3c[0x10] = 0;
  local_3c[0x11] = 0;
  local_3c[0x12] = 0;
  local_3c[0x13] = 0;
  if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) == 0) {
    FUN_00403710((void *)(param_1 + 0x28),L"0.0.0.0",7);
  }
  (**(code **)(*(int *)(param_1 + 0x3b0) + 0x16c))(uVar5);
  bVar3 = FUN_00429d00((void *)(param_1 + 0xe0),L"0.0.0.0",*(short **)(param_1 + 0x28),local_3c,2,2,
                       0x24);
  if (bVar3) {
    FUN_00421680(local_dc);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00421210((void *)(param_1 + 0xec),local_dc);
    uVar4 = htons(local_dc[0].sa_data._0_2_);
    local_20c.dwLowDateTime = 0;
    local_20c.dwHighDateTime = 0;
    local_4c.wYear = 0;
    local_4c.wMonth = 0;
    local_4c.wDayOfWeek = 0;
    local_4c.wDay = 0;
    local_4c.wHour = 0;
    local_4c.wMinute = 0;
    local_4c.wSecond = 0;
    local_4c.wMilliseconds = 0;
    *(uint *)(param_1 + 0x18) = (uint)uVar4;
    GetSystemTime(&local_4c);
    SystemTimeToFileTime(&local_4c,&local_20c);
    DVar1 = local_20c.dwHighDateTime;
    DVar8 = local_20c.dwLowDateTime;
    local_20c.dwHighDateTime = 0x102;
    DVar2 = local_20c.dwHighDateTime;
    local_20c.dwHighDateTime._0_2_ = (undefined2)DVar1;
    local_20c.dwHighDateTime._2_2_ = SUB42(DVar1,2);
    local_4c.wSecond = (undefined2)local_20c.dwHighDateTime;
    local_4c.wMilliseconds = local_20c.dwHighDateTime._2_2_;
    local_20c.dwHighDateTime = DVar2;
    while( true ) {
      local_214.dwLowDateTime = 0;
      local_214.dwHighDateTime = 0;
      local_5c.wYear = 0;
      local_5c.wMonth = 0;
      local_5c.wDayOfWeek = 0;
      local_5c.wDay = 0;
      local_5c.wHour = 0;
      local_5c.wMinute = 0;
      local_5c.wSecond = 0;
      local_5c.wMilliseconds = 0;
      GetSystemTime(&local_5c);
      SystemTimeToFileTime(&local_5c,&local_214);
      uVar9 = __alldiv(local_214.dwLowDateTime - DVar8,
                       (local_214.dwHighDateTime - local_4c._12_4_) -
                       (uint)(local_214.dwLowDateTime < DVar8),10000,0);
      if ((0xffffffff < (longlong)uVar9) ||
         ((uVar9 < 0x8000000000000000 && (*(uint *)(param_1 + 0x10) < (uint)uVar9)))) break;
      iVar7 = FUN_0042b1c0(param_1);
      *(int *)(param_1 + 0x48c) = iVar7;
      if (-1 < iVar7) {
        local_20c.dwHighDateTime =
             WaitForSingleObject(*(HANDLE *)(param_1 + 4),*(DWORD *)(param_1 + 0xc));
      }
      if ((*(int *)(param_1 + 0x48c) < 0) || (local_20c.dwHighDateTime == 0)) goto LAB_0042b62f;
    }
    *(undefined4 *)(param_1 + 0x48c) = 1;
LAB_0042b62f:
    FUN_004216a0((LONG *)(param_1 + 0xec));
    if (*(HANDLE *)(param_1 + 0xe4) != (HANDLE)0x0) {
      DVar8 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xe4),1000);
      if (DVar8 == 0x102) {
        TerminateThread(*(HANDLE *)(param_1 + 0xe4),1);
      }
      CloseHandle(*(HANDLE *)(param_1 + 0xe4));
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_004103c0();
  }
  else {
    DVar8 = GetLastError();
    if (0 < (int)DVar8) {
      DVar8 = DVar8 & 0xffff | 0x80070000;
    }
    *(DWORD *)(param_1 + 0x48c) = DVar8;
  }
  if ((*(int *)(param_1 + 0x484) != 0) && (*(int *)(param_1 + 0x488) != 0)) {
    local_20c.dwHighDateTime = 0;
    if (*(int *)(param_1 + 0x48c) == 0) {
      iVar7 = FUN_00426730((void *)(param_1 + 0x3b0),&local_20c.dwHighDateTime);
      *(int *)(param_1 + 0x48c) = iVar7;
    }
    PostMessageW(*(HWND *)(param_1 + 0x484),*(UINT *)(param_1 + 0x488),*(WPARAM *)(param_1 + 0x48c),
                 local_20c.dwHighDateTime);
  }
  if (-1 < HVar6) {
    CoUninitialize();
  }
  local_8 = 0xffffffff;
  FUN_00402e50(local_204);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

