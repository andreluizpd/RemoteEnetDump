
void __fastcall FUN_00411920(int param_1)

{
  HFONT pHVar1;
  int iVar2;
  HANDLE pvVar3;
  HWND pHVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  LONG *pLVar8;
  LOGFONTW *pLVar9;
  LOGFONTW local_70;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445729;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00420d40(&DAT_004590b8,*(undefined4 *)(param_1 + 4));
  FUN_00405c40();
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_0040fd00((void *)(param_1 + 4),(HWND)0x0);
  pLVar8 = &DAT_004568d0;
  pLVar9 = &local_70;
  for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
    pLVar9->lfHeight = *pLVar8;
    pLVar8 = pLVar8 + 1;
    pLVar9 = (LOGFONTW *)&pLVar9->lfWidth;
  }
  pHVar1 = CreateFontIndirectW(&local_70);
  *(HFONT *)(param_1 + 0xf0) = pHVar1;
  SendMessageW(*(HWND *)(param_1 + 4),0x30,(WPARAM)pHVar1,1);
  FUN_0040fc90((void *)(param_1 + 4),0x30,*(WPARAM *)(param_1 + 0xf0),0,1);
  if (local_70.lfHeight < 1) {
    local_70.lfHeight = local_70.lfHeight + -2;
  }
  else {
    local_70.lfHeight = local_70.lfHeight + 2;
  }
  pHVar1 = CreateFontIndirectW(&local_70);
  *(HFONT *)(param_1 + 0xf4) = pHVar1;
  iVar7 = GetSystemMetrics(0xc);
  iVar2 = GetSystemMetrics(0xb);
  pvVar3 = LoadImageW(DAT_004597f0,(LPCWSTR)0x80,1,iVar2,iVar7,0);
  SendMessageW(*(HWND *)(param_1 + 4),0x80,1,(LPARAM)pvVar3);
  iVar7 = GetSystemMetrics(0x32);
  iVar2 = GetSystemMetrics(0x31);
  pvVar3 = LoadImageW(DAT_004597f0,(LPCWSTR)0x80,1,iVar2,iVar7,0);
  SendMessageW(*(HWND *)(param_1 + 4),0x80,0,(LPARAM)pvVar3);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ea);
  SendMessageW(pHVar4,0x30,*(WPARAM *)(param_1 + 0xf4),1);
  pvVar3 = LoadImageW(DAT_004597f0,(LPCWSTR)0x8d,1,0x30,0x30,0);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ef);
  *(HWND *)(param_1 + 0x104) = pHVar4;
  SendMessageW(pHVar4,0x170,(WPARAM)pvVar3,0);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ea);
  iVar7 = FUN_004100d0((void *)(param_1 + 0x24),pHVar4);
  if (iVar7 != 0) {
    SendMessageW(*(HWND *)(param_1 + 0x28),5,0,0);
    SendMessageW(*(HWND *)(param_1 + 0x28),0x1a,0,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0x19;
  SendMessageW(*(HWND *)(param_1 + 0x28),0x1a,0,0);
  piVar5 = FUN_00411010(L"Vehicle",0);
  FUN_0040fee0((void *)(param_1 + 0x24),piVar5);
  pvVar6 = operator_new(0x30);
  local_8 = 0;
  if (pvVar6 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_004110b0(&stack0xffffff64,L"");
    local_8 = local_8 & 0xffffff00;
    piVar5 = FUN_00410b60(pvVar6,L"Ip");
  }
  local_8 = 0xffffffff;
  FUN_0040fee0((void *)(param_1 + 0x24),piVar5);
  pvVar6 = operator_new(0x30);
  local_8 = 2;
  if (pvVar6 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_004110b0(&stack0xffffff64,L"");
    local_8 = CONCAT31((int3)(local_8 >> 8),2);
    piVar5 = FUN_00410b60(pvVar6,L"Mac");
  }
  local_8 = 0xffffffff;
  FUN_0040fee0((void *)(param_1 + 0x24),piVar5);
  pvVar6 = operator_new(0x30);
  local_8 = 4;
  if (pvVar6 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_004110b0(&stack0xffffff64,L"");
    local_8 = CONCAT31((int3)(local_8 >> 8),4);
    piVar5 = FUN_00410b60(pvVar6,L"Vin");
  }
  local_8 = 0xffffffff;
  FUN_0040fee0((void *)(param_1 + 0x24),piVar5);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ee);
  *(HWND *)(param_1 + 0xf8) = pHVar4;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),1000);
  *(HWND *)(param_1 + 0xfc) = pHVar4;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ed);
  *(HWND *)(param_1 + 0x100) = pHVar4;
  EnableWindow(*(HWND *)(param_1 + 0xf8),0);
  EnableWindow(*(HWND *)(param_1 + 0xfc),0);
  *(undefined4 *)(param_1 + 0xe8) = 0x50;
  *(undefined1 *)(param_1 + 0xec) = 1;
  InvalidateRect(*(HWND *)(param_1 + 0x28),(RECT *)0x0,1);
  FUN_00405a70((void *)(param_1 + 0x6a4),*(undefined4 *)(param_1 + 4),0x414);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

