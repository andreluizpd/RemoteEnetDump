
int __thiscall FUN_0041ebd0(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = param_1;
  iVar4 = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    param_1 = param_1 + -(int)pcVar1;
                    /* WARNING: Load size is inaccurate */
    iVar4 = (**(code **)(*this + 0x50))(&param_1,4);
    if ((-1 < iVar4) && (param_1 != (char *)0x0)) {
                    /* WARNING: Load size is inaccurate */
      iVar4 = (**(code **)(*this + 0x50))(pcVar3,param_1);
    }
  }
  return iVar4;
}

