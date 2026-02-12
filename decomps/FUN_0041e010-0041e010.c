
void FUN_0041e010(undefined4 param_1)

{
  int iVar1;
  HWND pHVar2;
  LPARAM LVar3;
  INITCOMMONCONTROLSEX local_7b0;
  undefined4 local_7a8 [485];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004465ab;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CoInitialize((LPVOID)0x0);
  iVar1 = FUN_004294c0();
  if (iVar1 != 0) {
    DAT_004571fc = 0;
  }
  iVar1 = FUN_00420e50(0x4590b8);
  if (iVar1 < 0) {
    CoUninitialize();
  }
  else {
    iVar1 = FUN_00420cc0(0x4590b8);
    if (iVar1 == 0) {
      DefWindowProcW((HWND)0x0,0,0,0);
      local_7b0.dwSize = 8;
      local_7b0.dwICC = 0x4405;
      InitCommonControlsEx(&local_7b0);
      FUN_004185c0(&DAT_004590c0,(int *)0x0,param_1,(undefined4 *)0x0);
      FUN_004214d0(0x202);
      FUN_0041db90(local_7a8);
      local_8 = 0;
      LVar3 = 0;
      pHVar2 = GetActiveWindow();
      FUN_0041b150(local_7a8,pHVar2,LVar3);
      local_8 = 0xffffffff;
      FUN_0041d930((int)local_7a8);
      FUN_00421530();
      FUN_0041af70(0x4590c0);
    }
    else {
      FUN_00420cf0(&DAT_004590b8,0x8021,0,0);
    }
    CoUninitialize();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

