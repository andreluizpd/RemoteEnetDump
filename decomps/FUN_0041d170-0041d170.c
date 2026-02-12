
void __fastcall FUN_0041d170(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  HPEN pHVar3;
  HWND pHVar4;
  HANDLE h;
  HFONT pHVar5;
  HDC hdc;
  HGDIOBJ h_00;
  LOGFONTW local_70;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446368;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xac);
  DVar1 = GetSysColor(8);
  *(DWORD *)(param_1 + 0x48) = DVar1;
  DVar1 = GetSysColor(5);
  *(DWORD *)(param_1 + 0x4c) = DVar1;
  DVar1 = GetSysColor(0xe);
  *(DWORD *)(param_1 + 0x50) = DVar1;
  DVar1 = GetSysColor(0xd);
  *(DWORD *)(param_1 + 0x54) = DVar1;
  DVar1 = GetSysColor(0x11);
  *(DWORD *)(param_1 + 0x5c) = DVar1;
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x58) = DVar1;
  if (*(int *)(param_1 + 0xb8) != 0) {
    BVar2 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb8));
    if (BVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  pHVar3 = CreatePen(0,1,*(COLORREF *)(param_1 + 0x58));
  *(HPEN *)(param_1 + 0xb8) = pHVar3;
  *(HPEN *)(param_1 + 0x44) = pHVar3;
  if (*(int *)(param_1 + 0xb0) != 0) {
    BVar2 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb0));
    if (BVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    BVar2 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb4));
    if (BVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  pHVar4 = GetParent(*(HWND *)(param_1 + 4));
  h = (HANDLE)SendMessageW(pHVar4,0x31,0,0);
  if (h == (HANDLE)0x0) {
    h = GetStockObject(0x11);
  }
  GetObjectW(h,0x5c,&local_70);
  pHVar5 = CreateFontIndirectW(&local_70);
  *(HFONT *)(param_1 + 0xb0) = pHVar5;
  *(HFONT *)(param_1 + 0x3c) = pHVar5;
  SendMessageW(*(HWND *)(param_1 + 4),0x30,(WPARAM)pHVar5,1);
  if ((*(byte *)(param_1 + 0xac) & 4) == 0) {
    local_70.lfWeight = local_70.lfWeight + 700;
  }
  pHVar5 = CreateFontIndirectW(&local_70);
  *(HFONT *)(param_1 + 0xb4) = pHVar5;
  pHVar4 = *(HWND *)(param_1 + 4);
  *(HFONT *)(param_1 + 0x40) = pHVar5;
  local_8 = 0;
  hdc = GetDC(pHVar4);
  local_8 = 1;
  h_00 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x3c));
  GetTextMetricsW(hdc,(LPTEXTMETRICW)(param_1 + 100));
  SelectObject(hdc,h_00);
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,1);
  local_8 = 2;
  ReleaseDC(pHVar4,hdc);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

