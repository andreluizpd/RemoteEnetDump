
void __cdecl FUN_00426dc0(void *param_1)

{
  char cVar1;
  int iVar2;
  rsize_t rVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_33c [202];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446ceb;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_00402ef0(local_33c,DAT_00459770,'\0');
  local_8 = 0;
  pcVar5 = *(char **)(iVar2 + 8);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = *(char **)(iVar2 + 4);
  }
  if (pcVar5 == (char *)0x0) {
    rVar3 = 0;
  }
  else {
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    rVar3 = (int)pcVar4 - (int)(pcVar5 + 1);
  }
  FUN_00403380(param_1,pcVar5,rVar3);
  local_8 = 0xffffffff;
  FUN_00402a60(local_33c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

