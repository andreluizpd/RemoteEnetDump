
void __fastcall FUN_00410000(int param_1)

{
  HWND hWnd;
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  HWND pHVar4;
  
  if (*(HWND *)(param_1 + 0xa4) != (HWND)0x0) {
    BVar2 = IsWindow(*(HWND *)(param_1 + 0xa4));
    if (BVar2 != 0) {
      piVar3 = (int *)SendMessageW(*(HWND *)(param_1 + 4),0x199,*(WPARAM *)(param_1 + 0xa8),0);
      cVar1 = (**(code **)(*piVar3 + 4))();
      hWnd = *(HWND *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
      pHVar4 = GetFocus();
      if (pHVar4 != *(HWND *)(param_1 + 4)) {
        pHVar4 = GetFocus();
        BVar2 = IsChild(*(HWND *)(param_1 + 4),pHVar4);
        if (BVar2 != 0) {
          SetFocus(*(HWND *)(param_1 + 4));
        }
      }
      if (cVar1 != '\b') {
        PostMessageW(hWnd,0x10,0,0);
        return;
      }
      DestroyWindow(hWnd);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  return;
}

