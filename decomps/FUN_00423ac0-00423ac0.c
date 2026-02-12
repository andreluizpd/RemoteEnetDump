
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00423ac0(void *this,wchar_t *param_1,va_list param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
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
  
  puStack_c = &LAB_00446c2b;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_102c = local_1018;
  local_1030 = CBufferedString<4096,0>::vftable;
  local_1028 = 0x1001;
  local_1024 = 0;
  local_1020 = 0;
  local_101c = 0;
  iVar4 = 0x1002;
  pcVar3 = local_102c;
  do {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_8 = 0;
  local_14 = uVar2;
  FUN_0040f7e0(&local_1030,param_1,param_2);
  if (local_102c == (char *)0x0) {
    iVar4 = 0;
  }
  else {
    pcVar3 = local_102c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)(local_102c + 1);
  }
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 4))(local_102c,iVar4,uVar2);
  local_8 = 0xffffffff;
  local_1030 = CBufferedString<4096,0>::vftable;
  FUN_0040f740((int)&local_1030);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

