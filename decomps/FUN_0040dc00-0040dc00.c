
int __thiscall FUN_0040dc00(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_00403380((void *)((int)this + 0xc),(void *)0x0,0);
    return (int)this;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00403380((void *)((int)this + 0xc),param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}

