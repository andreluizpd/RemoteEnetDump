
undefined4 __thiscall FUN_0041bbc0(void *this)

{
  HCURSOR hCursor;
  undefined4 *in_stack_00000010;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)((int)this + 4),&local_c);
  if (local_c.x == (*(uint *)((int)this + 0xac) & 1) * 0x10 + *(int *)((int)this + 0xc4)) {
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f84);
    SetCursor(hCursor);
    return 0;
  }
  *in_stack_00000010 = 0;
  return 0;
}

