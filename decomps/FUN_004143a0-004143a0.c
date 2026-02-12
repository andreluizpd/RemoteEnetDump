
void FUN_004143a0(int param_1)

{
  WPARAM wParam;
  uint uVar1;
  uint local_248;
  DWORD local_244;
  int local_240 [3];
  short *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445ae6;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = 0;
  wParam = 0;
  if (*(int *)(param_1 + 4) != 1) {
    if (((*(int *)(param_1 + 4) == 2) && (*(int *)(param_1 + 0xc) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x40) + -0xc) != 0)) {
      FUN_0040b820(local_240);
      local_8 = 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        do {
          if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_00414539;
          FUN_00412ea0(local_234,(wchar_t *)PTR_u_netsh_interface_portproxy_delete_00456cf4);
          local_244 = 0;
          wParam = FUN_00413e70(local_234[0],&local_244);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 0x18));
      }
      *(undefined1 *)(param_1 + 8) = 0;
      if ((*(HWND *)(param_1 + 0x11c) != (HWND)0x0) && (*(UINT *)(param_1 + 0x120) != 0)) {
        PostMessageW(*(HWND *)(param_1 + 0x11c),*(UINT *)(param_1 + 0x120),wParam,0);
      }
      local_8 = 0xffffffff;
      FUN_004030c0(local_240);
    }
    goto LAB_0041463b;
  }
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(*(int *)(param_1 + 0xb4) + -0xc) == 0)) {
    wParam = 0x80070057;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + -0xc) == 0) {
      FUN_00414350((void *)(param_1 + 0x34),L"0.0.0.0");
    }
    FUN_0040b820(local_240);
    local_8 = 0;
    local_248 = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_00414521:
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      do {
        if ((int)wParam < 0) goto LAB_00414525;
        if (*(uint *)(param_1 + 0x18) <= local_248) goto LAB_00414539;
        FUN_00412ea0(local_234,(wchar_t *)PTR_u_netsh_interface_portproxy_delete_00456cf4);
        local_244 = 0;
        wParam = FUN_00413e70(local_234[0],&local_244);
        if (-1 < (int)wParam) {
          if ((*(uint *)(param_1 + 0x28) <= local_248) || (*(uint *)(param_1 + 0x18) <= local_248))
          {
LAB_00414539:
                    /* WARNING: Subroutine does not return */
            FUN_00401760(0x80070057);
          }
          FUN_00412ea0(local_234,(wchar_t *)PTR_u_netsh_interface_portproxy_add_v4_00456cf0);
          local_244 = 0;
          wParam = FUN_00413e70(local_234[0],&local_244);
        }
        local_248 = local_248 + 1;
      } while (local_248 < *(uint *)(param_1 + 0x18));
      if (-1 < (int)wParam) goto LAB_00414521;
    }
LAB_00414525:
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  if ((*(HWND *)(param_1 + 0x11c) != (HWND)0x0) && (*(UINT *)(param_1 + 0x120) != 0)) {
    PostMessageW(*(HWND *)(param_1 + 0x11c),*(UINT *)(param_1 + 0x120),wParam,0);
  }
LAB_0041463b:
  if (*(HANDLE *)(param_1 + 0x124) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x124));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

