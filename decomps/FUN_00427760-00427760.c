
void __cdecl FUN_00427760(SYSTEMTIME *param_1)

{
  undefined4 uStack00000008;
  uint uStack0000000c;
  _FILETIME local_c;
  
  SystemTimeToFileTime(param_1,&local_c);
  uStack0000000c = local_c.dwHighDateTime & 0x80000000;
  uStack00000008 = 0;
  local_c = (_FILETIME)FUN_0042db56();
  FileTimeToSystemTime(&local_c,param_1);
  return;
}

