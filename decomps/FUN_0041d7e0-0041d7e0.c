
undefined4 __fastcall FUN_0041d7e0(void *param_1)

{
  char cVar1;
  WPARAM wParam;
  int iVar2;
  HWND hWnd;
  int *piVar3;
  HWND local_14;
  WPARAM local_10;
  undefined4 local_c;
  int *local_8;
  
  if (0 < *(int *)((int)param_1 + 0xc0)) {
    FUN_0041d5b0(param_1,*(int *)((int)param_1 + 0xc0));
  }
  FUN_00410000((int)param_1);
  piVar3 = (int *)0x0;
  wParam = SendMessageW(*(HWND *)((int)param_1 + 4),0x188,0,0);
  if (wParam != 0xffffffff) {
    piVar3 = (int *)SendMessageW(*(HWND *)((int)param_1 + 4),0x199,wParam,0);
    cVar1 = (**(code **)(*piVar3 + 4))();
    if (cVar1 != '\x01') {
      iVar2 = (**(code **)(*piVar3 + 0x14))();
      if (iVar2 != 0) {
        FUN_00410530(param_1,piVar3,wParam);
        (**(code **)(*piVar3 + 0x2c))(1,0);
        if ((*(byte *)((int)param_1 + 0xac) & 0x10) != 0) {
          cVar1 = (**(code **)(*piVar3 + 4))();
          if (cVar1 == '\x03') {
            (**(code **)(*piVar3 + 0x2c))(4,0);
          }
        }
      }
    }
  }
  local_14 = *(HWND *)((int)param_1 + 4);
  local_10 = GetDlgCtrlID(local_14);
  local_c = 0xfffff447;
  local_8 = piVar3;
  hWnd = GetParent(*(HWND *)((int)param_1 + 4));
  SendMessageW(hWnd,0x4e,local_10,(LPARAM)&local_14);
  if (0 < *(int *)((int)param_1 + 0xc0)) {
    FUN_0041d5b0(param_1,*(int *)((int)param_1 + 0xc0));
  }
  return 0;
}

