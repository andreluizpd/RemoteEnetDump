
LRESULT __fastcall FUN_00412820(int param_1)

{
  int iVar1;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  LVar2 = 0;
  if (iVar1 != 0) {
    LVar2 = CallWindowProcW(*(WNDPROC *)(param_1 + 0x20),*(HWND *)(param_1 + 4),*(UINT *)(iVar1 + 4)
                            ,*(WPARAM *)(iVar1 + 8),*(LPARAM *)(iVar1 + 0xc));
  }
  hWnd = GetParent(*(HWND *)(param_1 + 4));
  wParam = SendMessageW(hWnd,0x31,0,0);
  SendMessageW(*(HWND *)(param_1 + 4),0x30,wParam,1);
  SendMessageW(*(HWND *)(param_1 + 4),0xd3,3,2);
  return LVar2;
}

