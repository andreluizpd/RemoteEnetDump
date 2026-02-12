
void __thiscall FUN_0040fd00(void *this,HWND param_1)

{
  uint uVar1;
  HMONITOR hMonitor;
  BOOL BVar2;
  HWND pHVar3;
  int X;
  int iVar4;
  int iVar5;
  int Y;
  tagMONITORINFO local_60;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
                    /* WARNING: Load size is inaccurate */
  uVar1 = GetWindowLongW(*this,-0x10);
  if (param_1 == (HWND)0x0) {
    if ((uVar1 & 0x40000000) == 0) {
                    /* WARNING: Load size is inaccurate */
      param_1 = GetWindow(*this,4);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      param_1 = GetParent(*this);
    }
  }
                    /* WARNING: Load size is inaccurate */
  GetWindowRect(*this,&local_38);
  if ((uVar1 & 0x40000000) != 0) {
                    /* WARNING: Load size is inaccurate */
    pHVar3 = GetParent(*this);
    GetClientRect(pHVar3,&local_28);
    GetClientRect(param_1,&local_18);
    MapWindowPoints(param_1,pHVar3,(LPPOINT)&local_18,2);
    goto LAB_0040fe25;
  }
  if (param_1 == (HWND)0x0) {
LAB_0040fd82:
                    /* WARNING: Load size is inaccurate */
    pHVar3 = *this;
  }
  else {
    uVar1 = GetWindowLongW(param_1,-0x10);
    if (((uVar1 & 0x10000000) == 0) || (pHVar3 = param_1, (uVar1 & 0x20000000) != 0)) {
      param_1 = (HWND)0x0;
      goto LAB_0040fd82;
    }
  }
  hMonitor = MonitorFromWindow(pHVar3,2);
  if (hMonitor != (HMONITOR)0x0) {
    local_60.cbSize = 0x28;
    BVar2 = GetMonitorInfoW(hMonitor,&local_60);
    if (BVar2 != 0) {
      local_28.left = local_60.rcWork.left;
      local_28.top = local_60.rcWork.top;
      local_28.right = local_60.rcWork.right;
      local_28.bottom = local_60.rcWork.bottom;
      if (param_1 == (HWND)0x0) {
        local_18.left = local_60.rcWork.left;
        local_18.top = local_60.rcWork.top;
        local_18.right = local_60.rcWork.right;
        local_18.bottom = local_60.rcWork.bottom;
      }
      else {
        GetWindowRect(param_1,&local_18);
      }
LAB_0040fe25:
      iVar5 = local_38.right - local_38.left;
      iVar4 = local_38.bottom - local_38.top;
      X = (local_18.right + local_18.left) / 2 - iVar5 / 2;
      Y = (local_18.top + local_18.bottom) / 2 - iVar4 / 2;
      if (local_28.right < X + iVar5) {
        X = local_28.right - iVar5;
      }
      if (X < local_28.left) {
        X = local_28.left;
      }
      if (local_28.bottom < Y + iVar4) {
        Y = local_28.bottom - iVar4;
      }
      if (Y < local_28.top) {
        Y = local_28.top;
      }
                    /* WARNING: Load size is inaccurate */
      SetWindowPos(*this,(HWND)0x0,X,Y,-1,-1,0x15);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

