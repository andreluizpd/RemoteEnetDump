
undefined4 * __fastcall FUN_004141c0(undefined4 *param_1)

{
  HANDLE pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00445a5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CPortProxyTask::vftable;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_8 = 1;
  uStack_7 = 0;
  FUN_00414040(param_1 + 0xd);
  local_8 = 2;
  FUN_00414040(param_1 + 0x2a);
  _local_8 = CONCAT31(uStack_7,3);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[0x49] = pvVar1;
  ExceptionList = local_10;
  return param_1;
}

