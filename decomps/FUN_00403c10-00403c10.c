
void __thiscall FUN_00403c10(void *this,void *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_33c [202];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004441a6;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403380(param_1,&PTR_0044862c,0);
  pcVar4 = *(char **)((int)this + 0x4c);
  if (pcVar4 != (char *)0x0) {
    pcVar2 = pcVar4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != pcVar4 + 1) {
      cVar1 = *(char *)((int)this + 0x48);
      if (cVar1 == '\0') {
        iVar3 = FUN_00402ef0(local_33c,pcVar4,'\0');
        pcVar4 = *(char **)(iVar3 + 8);
      }
      else {
        iVar3 = FUN_00402ef0(local_33c,pcVar4,cVar1);
        pcVar4 = *(char **)(iVar3 + 8);
      }
      local_8 = (uint)(cVar1 == '\0');
      if (pcVar4 == (char *)0x0) {
        pcVar4 = *(char **)(iVar3 + 4);
      }
      FUN_004036d0(param_1,pcVar4);
      local_8 = 0xffffffff;
      FUN_00402a60(local_33c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

