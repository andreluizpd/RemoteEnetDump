
void __thiscall FUN_0041d5b0(void *this,int param_1)

{
  HGDIOBJ h;
  HWND hWnd;
  uint dwNewLong;
  HDC hdc;
  undefined4 *puVar1;
  HGDIOBJ local_28;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004463b8;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0xbc) != 0) {
    hWnd = GetParent(*(HWND *)((int)this + 4));
    dwNewLong = GetWindowLongW(hWnd,-0x10);
    SetWindowLongW(hWnd,-0x10,dwNewLong & 0xfdffffff);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)((int)this + 4),&local_24);
    local_24.left = param_1;
    local_24.right = param_1 + 1;
    MapWindowPoints(*(HWND *)((int)this + 4),hWnd,(LPPOINT)&local_24,2);
    local_8 = 0;
    hdc = GetDC(hWnd);
    local_8 = 1;
    puVar1 = (undefined4 *)FUN_0041c4c0(&local_28);
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    h = (HGDIOBJ)*puVar1;
    local_8._0_1_ = 4;
    local_28 = (HGDIOBJ)0x0;
    if (h != (HGDIOBJ)0x0) {
      local_28 = SelectObject(hdc,h);
    }
    PatBlt(hdc,local_24.left,local_24.top,2,local_24.bottom - local_24.top,0x5a0049);
    SelectObject(hdc,local_28);
    SetWindowLongW(hWnd,-0x10,dwNewLong);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (h != (HGDIOBJ)0x0) {
      DeleteObject(h);
    }
    local_8 = 5;
    ReleaseDC(hWnd,hdc);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

