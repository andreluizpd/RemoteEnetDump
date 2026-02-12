
void __thiscall FUN_00413320(void *this,undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_46c [3];
  int local_460 [136];
  int local_240 [3];
  LPCWSTR local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445a06;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)((int)this + 0x6c8) + 0x16c))(local_14);
  if ((param_2 == 0) && (param_3 != (int *)0x0)) {
    FUN_0040a2e0((void *)((int)this + 0x6c8),param_3);
    FUN_00424b60((void *)((int)this + 0x6c8),param_3);
    (**(code **)(*param_3 + 0xc))(1);
  }
  FUN_00411e10((int)this);
  FUN_0040b820(local_46c);
  local_8 = 0;
  (**(code **)(*(int *)((int)this + 0x6c8) + 0x100))(&DAT_004496f4,local_460);
  iVar1 = *(int *)(local_460[0] + -0xc);
  EnableWindow(*(HWND *)((int)this + 0xf8),1);
  if (iVar1 != 0) {
    EnableWindow(*(HWND *)((int)this + 0xfc),1);
  }
  if (param_2 < 0) {
    FUN_0040b820(local_240);
    local_8._0_1_ = 1;
    FUN_00412ea0(local_234,
                 L"Error 0x%08x starting vehicle detection daemon.\r\n\r\nRemote session not active."
                );
    MessageBoxW(*(HWND *)((int)this + 4),local_234[0],L"RemoteENET",0x10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004030c0(local_240);
  }
  local_8 = 0xffffffff;
  FUN_004030c0(local_46c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

