
undefined4 __thiscall FUN_00410c30(void *this,uint param_1)

{
  BOOL BVar1;
  
  if ((param_1 == 4) || ((5 < param_1 && (param_1 < 8)))) {
    BVar1 = IsWindow(*(HWND *)((int)this + 0x28));
    if (BVar1 != 0) {
      SetFocus(*(HWND *)((int)this + 0x28));
      SendMessageW(*(HWND *)((int)this + 0x28),0xb1,0,-1);
    }
  }
  return 1;
}

