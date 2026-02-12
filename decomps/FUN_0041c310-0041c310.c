
undefined4 __thiscall FUN_0041c310(void *this,int *param_1)

{
  char cVar1;
  WPARAM WVar2;
  int iVar3;
  HWND hWnd;
  HWND local_14;
  WPARAM local_10;
  undefined4 local_c;
  int *local_8;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 4))();
    if (cVar1 == '\x01') {
      WVar2 = FUN_0040ff50(this,(int)param_1);
      iVar3 = FUN_0041bde0(param_1,WVar2);
      if (iVar3 != 0) {
        local_14 = *(HWND *)((int)this + 4);
        local_10 = GetDlgCtrlID(local_14);
        local_c = 0xfffff443;
        local_8 = param_1;
        hWnd = GetParent(*(HWND *)((int)this + 4));
        SendMessageW(hWnd,0x4e,local_10,(LPARAM)&local_14);
      }
      return 1;
    }
  }
  return 0;
}

