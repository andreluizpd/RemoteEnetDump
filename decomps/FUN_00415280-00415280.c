
char * __thiscall FUN_00415280(void *this,int param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = (char *)(param_1 + 2);
  cVar2 = *pcVar1;
  iVar3 = 0;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '<') {
        if ((pcVar1[1] == '!') && (pcVar1[2] != '-')) {
          if (pcVar1[2] != '[') {
            pcVar1 = pcVar1 + 2;
            iVar3 = iVar3 + 1;
            goto LAB_004152e0;
          }
          pcVar1 = FUN_00415220(this,(int)pcVar1);
        }
        else {
LAB_004152d4:
          pcVar1 = FUN_00415110(this,pcVar1);
        }
        if (pcVar1 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        if ((cVar2 == '\"') || (cVar2 == '\'')) goto LAB_004152d4;
        if (cVar2 == '>') {
          if (iVar3 == 0) {
            return pcVar1;
          }
          iVar3 = iVar3 + -1;
        }
        pcVar1 = pcVar1 + 1;
      }
LAB_004152e0:
      cVar2 = *pcVar1;
    } while (cVar2 != '\0');
    if (iVar3 != 0) goto LAB_004152f0;
  }
  if (param_2 == '>') {
    return pcVar1;
  }
LAB_004152f0:
  *(char **)((int)this + 8) = pcVar1;
  *(undefined4 *)((int)this + 0xc) = 9;
  return (char *)0x0;
}

