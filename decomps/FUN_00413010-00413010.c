
void __thiscall FUN_00413010(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  HWND hDlg;
  int local_240 [3];
  LPCWSTR local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445986;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 < 0) {
    FUN_0040b820(local_240);
    local_8 = 1;
    FUN_00412ea0(local_234,
                 L"Error 0x%08x initializing firewall manager.\r\n\r\nApplication will terminate.");
    MessageBoxW(*(HWND *)((int)this + 4),local_234[0],L"RemoteENET",0x10);
    hDlg = *(HWND *)((int)this + 4);
  }
  else {
    iVar1 = FUN_004102d0(0x8d);
    if (-1 < iVar1) {
      FUN_0042b760((void *)((int)this + 0x10c),*(uint *)((int)this + 4),0x411);
      goto LAB_00413110;
    }
    FUN_0040b820(local_240);
    local_8 = 0;
    FUN_00412ea0(local_234,L"Oops not fair.\r\n\r\nApplication will terminate.");
    MessageBoxW(*(HWND *)((int)this + 4),local_234[0],L"RemoteENET",0x10);
    hDlg = *(HWND *)((int)this + 4);
  }
  EndDialog(hDlg,2);
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
LAB_00413110:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

