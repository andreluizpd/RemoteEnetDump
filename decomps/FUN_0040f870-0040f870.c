
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040f870(va_list param_1,wchar_t *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined **local_1030;
  char *local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  undefined4 local_101c;
  char local_1018 [4100];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044523b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_102c = local_1018;
  local_1030 = CBufferedString<4096,0>::vftable;
  local_1028 = 0x1001;
  local_1024 = 0;
  local_1020 = 0;
  local_101c = 0;
  iVar3 = 0x1002;
  pcVar2 = local_102c;
  do {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_8 = 0;
  FUN_0040f7e0(&local_1030,param_2,param_1);
  pcVar2 = local_102c;
  if (local_102c != (char *)0x0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  FUN_0040f5c0();
  local_8 = 0xffffffff;
  local_1030 = CBufferedString<4096,0>::vftable;
  FUN_0040f740((int)&local_1030);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

