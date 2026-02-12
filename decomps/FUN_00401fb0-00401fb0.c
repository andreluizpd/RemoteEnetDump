
void __thiscall FUN_00401fb0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar2 = _strstr(param_2," %08X");
  if (pcVar2 != (char *)0x0) {
                    /* WARNING: Load size is inaccurate */
    _sprintf(local_1c," <%08x>",*this);
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)param_1 - (int)param_2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = local_1c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FID_conflict__memcpy
              (pcVar3 + (int)(param_1 +
                             ((((int)pcVar4 - (int)(local_1c + 1)) -
                              (int)(pcVar3 + (int)(param_2 + (-(int)pcVar2 - (int)(param_1 + 1)))))
                             - (int)(param_1 + 1))),pcVar2 + ((int)param_1 - (int)param_2),
               (size_t)(pcVar3 + (int)(param_2 + (-(int)pcVar2 - (int)(param_1 + 1))) + 1));
    FID_conflict__memcpy
              (pcVar2 + ((int)param_1 - (int)param_2),local_1c,(int)pcVar4 - (int)(local_1c + 1));
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00401f40(this,param_1,param_2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

