
void __thiscall FUN_0040ac00(void *this,undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  pcVar3 = "true";
  if (param_2 == '\0') {
    pcVar3 = "false";
  }
  iVar2 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_14 + iVar2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x168))(param_1,local_14);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

