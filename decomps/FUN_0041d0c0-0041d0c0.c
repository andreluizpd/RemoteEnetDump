
undefined4 __thiscall FUN_0041d0c0(void *this,int *param_1)

{
  HWND hWnd;
  char cVar1;
  int iVar2;
  WPARAM wParam;
  
  hWnd = *(HWND *)((int)this + 4);
  SendMessageW(hWnd,0xb,0,0);
  wParam = (int)param_1 + 1;
  iVar2 = SendMessageW(hWnd,0x18b,0,0);
  while ((int)wParam < iVar2) {
    param_1 = (int *)SendMessageW(hWnd,0x199,wParam,0);
    cVar1 = (**(code **)(*param_1 + 4))();
    if (cVar1 == '\x01') break;
    SendMessageW(hWnd,0x19a,wParam,0);
    SendMessageW(hWnd,0x182,wParam,0);
    FUN_0041ca50((void *)((int)this + 0x14),&param_1);
    iVar2 = SendMessageW(hWnd,0x18b,0,0);
  }
  *(undefined1 *)((int)this + 0x20) = 0;
  SendMessageW(hWnd,0xb,1,0);
  InvalidateRect(hWnd,(RECT *)0x0,1);
  return 1;
}

