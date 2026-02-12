
LRESULT __thiscall FUN_0041c110(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  WPARAM wParam;
  int *piVar2;
  HWND hWnd;
  LRESULT LVar3;
  int iVar4;
  HWND local_14;
  WPARAM local_10;
  undefined4 local_c;
  int *local_8;
  
  LVar1 = CallWindowProcW(*(WNDPROC *)((int)this + 0x20),*(HWND *)((int)this + 4),param_1,param_2,
                          param_3);
  wParam = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
  if (wParam != 0xffffffff) {
    piVar2 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,wParam,0);
    local_14 = *(HWND *)((int)this + 4);
    local_10 = GetDlgCtrlID(local_14);
    local_c = 0xfffff440;
    local_8 = piVar2;
    hWnd = GetParent(*(HWND *)((int)this + 4));
    LVar3 = SendMessageW(hWnd,0x4e,local_10,(LPARAM)&local_14);
    if (LVar3 == 0) {
      iVar4 = (**(code **)(*piVar2 + 0x14))();
      if (iVar4 != 0) {
        (**(code **)(*piVar2 + 0x2c))(4,param_3);
      }
    }
    return LVar1;
  }
  return LVar1;
}

