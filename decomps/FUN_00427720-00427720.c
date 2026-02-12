
void __cdecl FUN_00427720(SYSTEMTIME *param_1)

{
  _FILETIME local_14;
  _FILETIME local_c;
  
  SystemTimeToFileTime(param_1,&local_c);
  FileTimeToLocalFileTime(&local_c,&local_14);
  FileTimeToSystemTime(&local_14,param_1);
  return;
}

