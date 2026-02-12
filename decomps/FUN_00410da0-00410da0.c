
undefined4 __thiscall FUN_00410da0(void *this,int param_1)

{
  if (((param_1 == 2) || (param_1 == 4)) || (param_1 == 7)) {
    SendMessageW(*(HWND *)((int)this + 4),(*(char *)((int)this + 0x20) == '\x01') + 0x5b1,0,
                 (LPARAM)this);
  }
  return 1;
}

