
void __thiscall FUN_0041f310(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint local_20 [7];
  
  local_20[6] = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_20[1] = 0;
  local_20[0] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004016f0(this,param_1 + 1,(int *)(local_20 + 2),param_1,(int)pcVar2 - (int)(param_1 + 1));
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00413dc0((int)param_1,(int)pcVar2 - (int)(param_1 + 1),5,local_20 + 1);
  }
  FUN_00413dc0((int)(local_20 + 2),0x10,5,local_20);
  __security_check_cookie(local_20[6] ^ (uint)&stack0xfffffffc);
  return;
}

