
undefined4 __thiscall FUN_0041c2b0(void *this,undefined4 param_1,undefined4 param_2,HWND param_3)

{
  BOOL BVar1;
  LRESULT LVar2;
  
  BVar1 = IsWindow(param_3);
  if ((BVar1 != 0) && (*(WPARAM *)((int)this + 0xa8) != 0xffffffff)) {
    LVar2 = SendMessageW(*(HWND *)((int)this + 4),0x199,*(WPARAM *)((int)this + 0xa8),0);
    if (LVar2 != 0) {
      FUN_004104d0(this,*(WPARAM *)((int)this + 0xa8));
      FUN_00410000((int)this);
    }
  }
  return 0;
}

