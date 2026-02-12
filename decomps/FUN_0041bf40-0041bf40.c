
LRESULT __thiscall FUN_0041bf40(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  WPARAM wParam;
  int *piVar3;
  HWND pHVar4;
  LRESULT LVar5;
  int iVar6;
  short sVar7;
  HWND local_14;
  WPARAM local_10;
  undefined4 local_c;
  int *local_8;
  
  pHVar4 = *(HWND *)((int)this + 4);
  pHVar1 = GetFocus();
  if (pHVar1 != pHVar4) {
    SetFocus(pHVar4);
  }
  LVar2 = CallWindowProcW(*(WNDPROC *)((int)this + 0x20),*(HWND *)((int)this + 4),param_1,param_2,
                          param_3);
  *(undefined4 *)((int)this + 0xbc) = 0;
  sVar7 = (short)param_3;
  if (((*(uint *)((int)this + 0xac) & 0x20) == 0) &&
     ((int)sVar7 == (*(uint *)((int)this + 0xac) & 1) * 0x10 + *(int *)((int)this + 0xc4))) {
    *(int *)((int)this + 0xbc) = (int)sVar7;
  }
  wParam = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
  if (wParam != 0xffffffff) {
    piVar3 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,wParam,0);
    local_14 = *(HWND *)((int)this + 4);
    local_10 = GetDlgCtrlID(local_14);
    local_c = 0xfffff441;
    local_8 = piVar3;
    pHVar4 = GetParent(*(HWND *)((int)this + 4));
    LVar5 = SendMessageW(pHVar4,0x4e,local_10,(LPARAM)&local_14);
    if (LVar5 == 0) {
      if (((*(byte *)((int)this + 0xac) & 1) == 0) || (0xf < sVar7)) {
        iVar6 = (**(code **)(*piVar3 + 0x14))();
        if (iVar6 != 0) {
          (**(code **)(*piVar3 + 0x2c))(3,param_3);
          return LVar2;
        }
      }
      else {
        (**(code **)(*piVar3 + 0x2c))(2,0);
      }
    }
    return LVar2;
  }
  return LVar2;
}

