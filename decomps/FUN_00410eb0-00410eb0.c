
void __thiscall FUN_00410eb0(void *this,undefined4 *param_1)

{
  HDC hdc;
  LPCWSTR lpString;
  HGDIOBJ h;
  DWORD DVar1;
  int c;
  tagSIZE local_2c;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004454c8;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hdc = (HDC)*param_1;
  local_8 = 0;
  h = SelectObject(hdc,(HGDIOBJ)param_1[7]);
  if ((*(byte *)(param_1 + 0x1f) & 4) == 0) {
    FUN_00410660(this,param_1);
  }
  else {
    param_1[0xb] = param_1[9];
    DVar1 = GetSysColor(0xf);
    param_1[10] = DVar1;
    DVar1 = GetSysColor(0xf);
    param_1[0xc] = DVar1;
    FUN_00410660(this,param_1);
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      local_24.top = param_1[2];
      local_24.left = param_1[1];
      local_24.right = param_1[3];
      local_24.bottom = param_1[4];
      InflateRect(&local_24,-1,-1);
      local_2c.cx = 0;
      local_2c.cy = 0;
      c = lstrlenW(*(LPCWSTR *)((int)this + 8));
      lpString = *(LPCWSTR *)((int)this + 8);
      if (c == -1) {
        c = lstrlenW(lpString);
      }
      GetTextExtentPoint32W(hdc,lpString,c,&local_2c);
      local_24.right = local_24.left + 3 + local_2c.cx;
      local_24.bottom = local_2c.cy + local_24.top;
      DrawFocusRect(hdc,&local_24);
    }
  }
  SelectObject(hdc,h);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

