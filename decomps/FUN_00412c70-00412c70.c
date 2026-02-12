
undefined4 FUN_00412c70(void)

{
  HWND hWndParent;
  undefined **local_34;
  undefined4 local_30;
  int local_2c [3];
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004458ee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = local_2c;
  local_30 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_34 = ATL::CSimpleDialog<100,0>::vftable;
  local_8 = 4;
  hWndParent = GetActiveWindow();
  FUN_00411110(0x459830,local_2c,(int)&local_34);
  DialogBoxParamW(DAT_004597f0,(LPCWSTR)0x64,hWndParent,FUN_00412420,0);
  local_30 = 0;
  local_14 = local_2c;
  local_8 = 0xffffffff;
  if (local_20 != (void *)0x0) {
    FreeStdCallThunk(local_20);
  }
  ExceptionList = local_10;
  return 0;
}

