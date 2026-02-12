
void __thiscall FUN_00423270(void *this,int *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* WARNING: Load size is inaccurate */
  pcVar2 = (char *)(**(code **)(*this + 0xc))();
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 4))(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  }
  if ((param_2 == '\t') && (param_1[2] != 0)) {
    FUN_00422fa0(param_1,' ',param_1[2]);
  }
  else {
    (**(code **)(*param_1 + 4))(&param_2,1);
  }
                    /* WARNING: Load size is inaccurate */
  pcVar2 = (char *)(**(code **)(*this + 0x18))();
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 4))(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  }
  return;
}

