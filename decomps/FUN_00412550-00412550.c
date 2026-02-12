
LRESULT FUN_00412550(int *param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  WPARAM WVar1;
  int *piVar2;
  WPARAM wParam;
  LPARAM lParam;
  int iVar3;
  UINT UVar4;
  int local_28;
  UINT local_24;
  WPARAM local_20;
  LPARAM local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  lParam = param_4;
  wParam = param_3;
  piVar2 = param_1;
  WVar1 = param_1[6];
  local_28 = param_1[1];
  local_24 = param_2;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  param_1 = (int *)0x0;
  piVar2[6] = (int)&local_28;
  local_c = 0x24;
  local_8 = 1;
  local_20 = param_3;
  local_1c = param_4;
  param_3 = WVar1;
  iVar3 = (**(code **)*piVar2)(local_28,param_2,wParam,param_4,&param_1,0);
  if (iVar3 == 0) {
    if (param_2 == 0x82) {
      param_2 = GetWindowLongW((HWND)piVar2[1],-4);
      param_1 = (int *)CallWindowProcW((WNDPROC)piVar2[8],(HWND)piVar2[1],0x82,wParam,lParam);
      if ((code *)piVar2[8] != DefWindowProcW_exref) {
        UVar4 = GetWindowLongW((HWND)piVar2[1],-4);
        if (UVar4 == param_2) {
          SetWindowLongW((HWND)piVar2[1],-4,piVar2[8]);
        }
      }
      piVar2[7] = piVar2[7] | 1;
    }
    else {
      param_1 = (int *)CallWindowProcW((WNDPROC)piVar2[8],(HWND)piVar2[1],param_2,wParam,lParam);
    }
  }
  if (((piVar2[7] & 1U) != 0) && (param_3 == 0)) {
    iVar3 = piVar2[1];
    piVar2[1] = 0;
    piVar2[6] = 0;
    piVar2[7] = piVar2[7] & 0xfffffffe;
    (**(code **)(*piVar2 + 0xc))(iVar3);
    return (LRESULT)param_1;
  }
  piVar2[6] = param_3;
  return (LRESULT)param_1;
}

