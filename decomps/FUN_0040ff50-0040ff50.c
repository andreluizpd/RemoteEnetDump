
WPARAM __thiscall FUN_0040ff50(void *this,int param_1)

{
  LRESULT LVar1;
  WPARAM wParam;
  
  if (param_1 == 0) {
    return 0;
  }
  wParam = 0;
  LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x18b,0,0);
  if (0 < LVar1) {
    do {
      LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x199,wParam,0);
      if (LVar1 == param_1) {
        return wParam;
      }
      wParam = wParam + 1;
      LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x18b,0,0);
    } while ((int)wParam < LVar1);
  }
  return 0xffffffff;
}

