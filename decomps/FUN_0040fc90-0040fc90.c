
void __thiscall FUN_0040fc90(void *this,UINT param_1,WPARAM param_2,LPARAM param_3,int param_4)

{
  int iVar1;
  HWND hWnd;
  HWND pHVar2;
  
                    /* WARNING: Load size is inaccurate */
  hWnd = GetTopWindow(*this);
  iVar1 = param_4;
  for (; hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    SendMessageW(hWnd,param_1,param_2,param_3);
    if ((iVar1 != 0) && (pHVar2 = GetTopWindow(hWnd), pHVar2 != (HWND)0x0)) {
      param_4 = (int)hWnd;
      FUN_0040fc90(&param_4,param_1,param_2,param_3,iVar1);
    }
  }
  return;
}

