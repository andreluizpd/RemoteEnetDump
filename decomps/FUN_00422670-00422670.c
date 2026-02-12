
void __thiscall FUN_00422670(void *this,char *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004225b0(this,param_1,(int)pcVar2 - (int)(param_1 + 1),(uint *)&param_1,param_3);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return;
}

