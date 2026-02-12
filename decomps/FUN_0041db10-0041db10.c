
undefined4 __thiscall FUN_0041db10(void *this,undefined4 param_1,int param_2)

{
  LRESULT LVar1;
  
  if ((param_2 == 0x26) || (param_2 == 0x28)) {
    LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0);
    SendMessageW(*(HWND *)((int)this + 4),0x186,LVar1 + -1 + (uint)(param_2 != 0x26) * 2,0);
    FUN_0041d7e0(this);
  }
  return 0;
}

