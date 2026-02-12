
void FUN_0040f5c0(void)

{
  char cVar1;
  FILE *_File;
  char *pcVar2;
  uint unaff_EBX;
  void *unaff_EDI;
  uint local_6c;
  _SYSTEMTIME local_68;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((unaff_EDI != (void *)0x0) && (0 < (int)unaff_EBX)) {
    if ((DAT_00458df0 != 0) &&
       ((DAT_00458df8 != '\0' && (_File = _fopen(&DAT_00458df8,"a+"), _File != (FILE *)0x0)))) {
      GetLocalTime(&local_68);
      _sprintf(local_58,"%04d-%02d-%02d %02d:%02d:%02d.%03d ",(uint)local_68.wYear,
               (uint)local_68.wMonth,(uint)local_68.wDay,(uint)local_68.wHour,(uint)local_68.wMinute
               ,(uint)local_68.wSecond,(uint)local_68.wMilliseconds);
      pcVar2 = local_58;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _fwrite(local_58,1,(int)pcVar2 - (int)(local_58 + 1),_File);
      _fwrite(unaff_EDI,1,unaff_EBX,_File);
      FID_conflict__fputc(10,_File);
      _fclose(_File);
    }
    if ((DAT_00458df4 != 0) && (DAT_00458efc != (void *)0x0)) {
      local_6c = 0;
      GetLocalTime(&local_68);
      _sprintf(local_58,"%04d-%02d-%02d %02d:%02d:%02d.%03d ",(uint)local_68.wYear,
               (uint)local_68.wMonth,(uint)local_68.wDay,(uint)local_68.wHour,(uint)local_68.wMinute
               ,(uint)local_68.wSecond,(uint)local_68.wMilliseconds);
      FUN_00422670(DAT_00458efc,local_58,(undefined4 *)0x0,0x100000);
      FUN_004225b0(DAT_00458efc,unaff_EDI,unaff_EBX,&local_6c,0x100000);
      FUN_00422670(DAT_00458efc,"\n",(undefined4 *)0x0,0x100000);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

