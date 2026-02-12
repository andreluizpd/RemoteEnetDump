
undefined4 __thiscall FUN_0041bde0(void *this,int param_1)

{
  WPARAM wParam;
  HWND hWnd;
  int iVar1;
  int *lParam;
  errno_t eVar2;
  LPARAM lParam_00;
  WPARAM wParam_00;
  
  hWnd = *(HWND *)((int)this + 4);
  SendMessageW(hWnd,0xb,0,0);
  wParam = param_1 + 1;
  iVar1 = *(int *)((int)this + 0x18);
  do {
    if (iVar1 < 1) {
      *(undefined1 *)((int)this + 0x20) = 1;
      SendMessageW(hWnd,0xb,1,0);
      InvalidateRect(hWnd,(RECT *)0x0,1);
      return 1;
    }
    lParam = (int *)**(LPARAM **)((int)this + 0x14);
    iVar1 = *(int *)((int)this + 0x18);
    if (0 < iVar1) {
      if (iVar1 != 1) {
        eVar2 = _memmove_s(*(void **)((int)this + 0x14),iVar1 * 4,
                           (void *)((int)*(void **)((int)this + 0x14) + 4),iVar1 * 4 - 4);
        switch(eVar2) {
        case 0:
        case 0x50:
          break;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x80004005);
        case 0xc:
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x8007000e);
        case 0x16:
        case 0x22:
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x80070057);
        }
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    }
    lParam_00 = (**(code **)(*lParam + 0xc))();
    wParam_00 = SendMessageW(hWnd,0x181,wParam,lParam_00);
    wParam = wParam + 1;
    SendMessageW(hWnd,0x19a,wParam_00,(LPARAM)lParam);
    iVar1 = *(int *)((int)this + 0x18);
  } while( true );
}

