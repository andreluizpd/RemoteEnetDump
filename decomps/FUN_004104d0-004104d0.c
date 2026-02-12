
void __thiscall FUN_004104d0(void *this,WPARAM param_1)

{
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0xffffffff) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SendMessageW(*(HWND *)((int)this + 4),0x198,param_1,(LPARAM)&local_18);
    InvalidateRect(*(HWND *)((int)this + 4),&local_18,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

