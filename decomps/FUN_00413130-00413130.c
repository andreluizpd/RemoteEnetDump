
void __thiscall FUN_00413130(void *this,undefined4 param_1,int param_2)

{
  int local_240 [3];
  LPCWSTR local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044504b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    FUN_00405a90((void *)((int)this + 0x6a4),*(undefined4 *)((int)this + 4),0x413);
  }
  else {
    *(undefined1 *)((int)this + 0x108) = 0;
    EnableWindow(*(HWND *)((int)this + 0xf8),1);
    EnableWindow(*(HWND *)((int)this + 0xfc),1);
    SetWindowTextW(*(HWND *)((int)this + 0xfc),L"Activate");
    FUN_0040b820(local_240);
    local_8 = 0;
    FUN_00412ea0(local_234,L"Error 0x%08x configuring port proxy.\r\n\r\nRemote session not active."
                );
    MessageBoxW(*(HWND *)((int)this + 4),local_234[0],L"RemoteENET",0x10);
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

