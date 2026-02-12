
void __fastcall FUN_00411cc0(int param_1)

{
  uint uVar1;
  int local_240 [3];
  short *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004459bb;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (*(char *)(param_1 + 0x108) == '\0') {
    EnableWindow(*(HWND *)(param_1 + 0xf8),0);
    EnableWindow(*(HWND *)(param_1 + 0xfc),0);
    FUN_0040b820(local_240);
    local_8 = 0;
    (**(code **)(*(int *)(param_1 + 0x6c8) + 0x100))(&DAT_004496f4,local_234,uVar1);
    if (*(int *)(local_234[0] + -6) != 0) {
      FUN_00414690((void *)(param_1 + 0x59c),*(undefined4 *)(param_1 + 4),0x412,(short *)0x0,
                   *(int *)(param_1 + 0x20),local_234[0],*(int *)(param_1 + 0x20));
    }
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  else {
    if (*(char *)(param_1 + 0x6a8) != '\0') {
      FUN_00405ab0((void *)(param_1 + 0x6a4),0,0);
    }
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      FUN_004148c0((void *)(param_1 + 0x59c),0,0);
    }
    *(undefined1 *)(param_1 + 0x108) = 0;
    EnableWindow(*(HWND *)(param_1 + 0xf8),1);
    SetWindowTextW(*(HWND *)(param_1 + 0xfc),L"Activate");
    EnableWindow(*(HWND *)(param_1 + 0xfc),1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

