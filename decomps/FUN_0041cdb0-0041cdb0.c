
void __thiscall FUN_0041cdb0(void *this,undefined4 param_1,int param_2,int *param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  WPARAM wParam;
  HWND local_28;
  WPARAM local_24;
  undefined4 local_20;
  int *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_3 != (int *)0x0) && (param_2 != 0)) {
    local_28 = *(HWND *)((int)this + 4);
    local_24 = GetDlgCtrlID(local_28);
    local_20 = 0xfffff446;
    local_1c = param_3;
    pHVar1 = GetParent(*(HWND *)((int)this + 4));
    LVar2 = SendMessageW(pHVar1,0x4e,local_24,(LPARAM)&local_28);
    if (LVar2 == 0) {
      iVar3 = (**(code **)(*param_3 + 0x40))(param_2);
      if (iVar3 == 0) {
        MessageBeep(0xffffffff);
      }
      local_20 = 0xfffff445;
      pHVar1 = GetParent(*(HWND *)((int)this + 4));
      SendMessageW(pHVar1,0x4e,local_24,(LPARAM)&local_28);
    }
    wParam = FUN_0040ff50(this,(int)param_3);
    if (wParam != 0xffffffff) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)((int)this + 4),0x198,wParam,(LPARAM)&local_18);
      InvalidateRect(*(HWND *)((int)this + 4),&local_18,1);
    }
    if ((-1 < (int)wParam) && (wParam == *(WPARAM *)((int)this + 0xa8))) {
      FUN_00410530(this,param_3,wParam);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

