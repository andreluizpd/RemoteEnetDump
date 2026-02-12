
void __cdecl FUN_00428060(wchar_t *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_18.wYear = 0;
  local_18.wMonth = 0;
  local_18.wDayOfWeek = 0;
  local_18.wDay = 0;
  local_18.wHour = 0;
  local_18.wMinute = 0;
  local_18.wSecond = 0;
  local_18.wMilliseconds = 0;
  cVar1 = FUN_00427c30(param_1,&local_18);
  if (cVar1 != '\0') {
    FUN_004278c0(&local_20,&local_18.wYear,-1);
    *param_2 = local_20;
    param_2[1] = local_1c;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

