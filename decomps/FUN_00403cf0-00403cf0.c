
void __thiscall FUN_00403cf0(void *this,undefined4 param_1,char *param_2,va_list param_3)

{
  FILE *_File;
  undefined4 local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444e2b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004032d0(local_13c,(int)this + 0x17c);
  local_8 = 0;
  if (*(int *)(local_130[0] + -0xc) == 0) {
    FUN_00403c10(this,local_130);
    FUN_00403510(local_130,0,"C:\\TEMP\\Trace\\");
  }
  _File = _fopen(local_130[0],"a+");
  if (_File != (FILE *)0x0) {
    FID_conflict__vfprintf(_File,param_2,param_3);
    FID_conflict__fputc(10,_File);
    _fclose(_File);
  }
  local_8 = 0xffffffff;
  FUN_00402e50(local_13c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

