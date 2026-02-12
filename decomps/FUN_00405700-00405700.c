
undefined4 * __fastcall FUN_00405700(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = CFirewallStateTask::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[8] = pvVar1;
  return param_1;
}

