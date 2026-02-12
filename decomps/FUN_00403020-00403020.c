
void * __thiscall FUN_00403020(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    return this;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  if (0 < iVar3) {
    pcVar2 = *(char **)((int)this + 4);
    if (pcVar2 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar5 = (int)pcVar4 - (int)(pcVar2 + 1);
    }
    FUN_00402570(this,pcVar2,iVar5 + iVar3);
    FUN_00402480((char *)(*(int *)((int)this + 4) + iVar5),iVar3 + 1,(int)param_1);
    return this;
  }
  return this;
}

