
void FUN_0040c9c0(void)

{
  char *this;
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
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
  puVar3 = (undefined8 *)&DAT_00458d68;
  ppuVar4 = &PTR_s__9hSJq4RYinbyiZiKJh6AiPVeVKDrbjN_00456550;
  do {
    iVar1 = FUN_00402ef0(local_33c,*ppuVar4,'\0');
    local_8 = 0;
    this = *(char **)(iVar1 + 8);
    pcVar2 = this;
    if (this == (char *)0x0) {
      pcVar2 = *(char **)(iVar1 + 4);
    }
    uVar5 = FUN_0041f310(this,pcVar2);
    *puVar3 = uVar5;
    local_8 = 0xffffffff;
    FUN_00402a60(local_33c);
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)ppuVar4 < 0x456564);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

