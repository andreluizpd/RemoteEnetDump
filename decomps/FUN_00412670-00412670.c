
BOOL __thiscall
FUN_00412670(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  HWND pHVar2;
  BOOL BVar3;
  uint uVar4;
  void *local_8;
  
  uVar1 = param_2;
  local_8 = this;
  switch(param_2) {
  case 0x1b:
    *(undefined1 *)((int)this + 0x24) = 1;
  case 0xd:
    pHVar2 = GetParent(*(HWND *)((int)this + 4));
    SetFocus(pHVar2);
    return 0;
  case 0x25:
    SendMessageW(*(HWND *)((int)this + 4),0xb0,(WPARAM)&param_2,(LPARAM)&local_8);
    if (((void *)param_2 != local_8) || (param_2 != 0)) goto switchD_0041268e_caseD_a;
  case 9:
  case 0x26:
  case 0x28:
    pHVar2 = GetParent(*(HWND *)((int)this + 4));
    BVar3 = PostMessageW(pHVar2,0x5b3,uVar1 & 0xffff,0);
    return BVar3;
  case 0x27:
    SendMessageW(*(HWND *)((int)this + 4),0xb0,(WPARAM)&param_2,(LPARAM)&local_8);
    if (((void *)param_2 == local_8) &&
       (uVar4 = GetWindowTextLengthW(*(HWND *)((int)this + 4)), param_2 == uVar4)) {
      pHVar2 = GetParent(*(HWND *)((int)this + 4));
      BVar3 = PostMessageW(pHVar2,0x5b3,uVar1 & 0xffff,0);
      return BVar3;
    }
  default:
switchD_0041268e_caseD_a:
    *param_4 = 0;
    return 0;
  }
}

