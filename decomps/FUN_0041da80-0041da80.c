
void __thiscall FUN_0041da80(void *this)

{
  undefined4 *in_stack_00000010;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  FUN_00410000((int)this);
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_18.left = 0;
  GetClientRect(*(HWND *)((int)this + 4),&local_18);
  if (*(char *)((int)this + 200) == '\0') {
    *(int *)((int)this + 0xc4) = (local_18.right - local_18.left) / 2;
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  FUN_0041d7e0(this);
  *in_stack_00000010 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

