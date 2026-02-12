
int * __thiscall FUN_0040fee0(void *this,int *param_1)

{
  LPARAM lParam;
  WPARAM wParam;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  (**(code **)(*param_1 + 8))(*(undefined4 *)((int)this + 4),0);
  lParam = (**(code **)(*param_1 + 0xc))();
  wParam = SendMessageW(*(HWND *)((int)this + 4),0x180,0,lParam);
  if (wParam == 0xffffffff) {
    return (int *)0x0;
  }
  SendMessageW(*(HWND *)((int)this + 4),0x19a,wParam,(LPARAM)param_1);
  return param_1;
}

