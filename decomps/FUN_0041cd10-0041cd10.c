
undefined4 __thiscall
FUN_0041cd10(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  WPARAM wParam;
  int *piVar1;
  int iVar2;
  
  if (0x20 < param_2) {
    wParam = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
    if (wParam != 0xffffffff) {
      piVar1 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,wParam,0);
      iVar2 = (**(code **)(*piVar1 + 0x14))();
      if (iVar2 != 0) {
        iVar2 = FUN_00410530(this,piVar1,wParam);
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 0x2c))(7,0);
          SendMessageW(*(HWND *)((int)this + 0xa4),0x102,param_2,1);
        }
      }
    }
    return 0;
  }
  if (param_2 != 0x20) {
    *param_4 = 0;
  }
  return 0;
}

