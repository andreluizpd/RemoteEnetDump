
undefined4 __thiscall FUN_00424540(void *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)((int)this + 0x74);
  if (pcVar2 == (char *)0x0) {
    FUN_00403380(param_1,(void *)0x0,0);
    return *param_1;
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00403380(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return *param_1;
}

