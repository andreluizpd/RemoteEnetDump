
undefined4 __thiscall FUN_0041c1d0(void *this,undefined4 param_1,undefined4 param_2,HWND param_3)

{
  BOOL BVar1;
  int *piVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  HWND local_14;
  WPARAM local_10;
  undefined4 local_c;
  int *local_8;
  
  BVar1 = IsWindow(param_3);
  if ((BVar1 != 0) && (*(WPARAM *)((int)this + 0xa8) != 0xffffffff)) {
    piVar2 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,*(WPARAM *)((int)this + 0xa8),0);
    if (piVar2 != (int *)0x0) {
      local_14 = *(HWND *)((int)this + 4);
      local_10 = GetDlgCtrlID(local_14);
      local_c = 0xfffff446;
      local_8 = piVar2;
      pHVar3 = GetParent(*(HWND *)((int)this + 4));
      LVar4 = SendMessageW(pHVar3,0x4e,local_10,(LPARAM)&local_14);
      if (LVar4 == 0) {
        iVar5 = (**(code **)(*piVar2 + 0x3c))(param_3);
        if (iVar5 == 0) {
          MessageBeep(0xffffffff);
        }
        local_c = 0xfffff445;
        pHVar3 = GetParent(*(HWND *)((int)this + 4));
        SendMessageW(pHVar3,0x4e,local_10,(LPARAM)&local_14);
        FUN_004104d0(this,*(WPARAM *)((int)this + 0xa8));
      }
      FUN_00410000((int)this);
    }
    return 0;
  }
  return 0;
}

