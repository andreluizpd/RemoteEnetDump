
void __thiscall FUN_00413230(void *this,undefined4 param_1,int param_2)

{
  int local_240 [3];
  LPCWSTR local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004459bb;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    SetWindowTextW(*(HWND *)((int)this + 0xfc),L"Restore");
    EnableWindow(*(HWND *)((int)this + 0xfc),1);
    *(undefined1 *)((int)this + 0x108) = 1;
  }
  else {
    if (*(char *)((int)this + 0x5a4) != '\0') {
      FUN_004148c0((void *)((int)this + 0x59c),0,0);
    }
    FUN_0040b820(local_240);
    local_8 = 0;
    FUN_00412ea0(local_234,L"Error 0x%08x disabling firewall.\r\n\r\nRemote session not active.");
    MessageBoxW(*(HWND *)((int)this + 4),local_234[0],L"RemoteENET",0x10);
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

