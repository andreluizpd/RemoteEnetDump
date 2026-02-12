
void __fastcall FUN_0040fc20(int param_1)

{
  BOOL BVar1;
  WINDOWPLACEMENT local_34;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  SetWindowPos(*(HWND *)(param_1 + 4),(HWND)0xffffffff,0,0,0,0,3);
  _memset(&local_34,0,0x2c);
  BVar1 = GetWindowPlacement(*(HWND *)(param_1 + 4),&local_34);
  if ((BVar1 != 0) && (local_34.showCmd == 2)) {
    ShowWindow(*(HWND *)(param_1 + 4),1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

