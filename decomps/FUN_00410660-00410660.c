
void __thiscall FUN_00410660(void *this,undefined4 *param_1)

{
  HDC hdc;
  COLORREF color;
  COLORREF color_00;
  COLORREF local_28;
  RECT local_24;
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
  if ((param_1[5] & 4) == 0) {
    if ((param_1[5] & 1) != 0) {
      local_28 = param_1[0xb];
      color_00 = param_1[0xc];
      goto LAB_004106c3;
    }
    local_28 = param_1[9];
  }
  else {
    local_28 = param_1[0xe];
  }
  color_00 = param_1[10];
LAB_004106c3:
  local_24.left = param_1[1];
  local_24.top = param_1[2];
  local_24.right = param_1[3];
  local_24.bottom = param_1[4];
  color = SetBkColor(hdc,color_00);
  if (color != 0xffffffff) {
    ExtTextOutW(hdc,0,0,2,&local_24,(LPCWSTR)0x0,0,(INT *)0x0);
    SetBkColor(hdc,color);
  }
  local_24.left = local_24.left + 2;
  SetBkMode(hdc,1);
  SetBkColor(hdc,color_00);
  SetTextColor(hdc,local_28);
  DrawTextW(hdc,*(LPCWSTR *)((int)this + 8),-1,&local_24,0x2824);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

