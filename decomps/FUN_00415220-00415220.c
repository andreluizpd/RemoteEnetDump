
char * __thiscall FUN_00415220(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  pcVar2 = (char *)(param_1 + 3);
  iVar3 = 0;
  do {
    if (cVar1 == '\0') {
      *(char **)((int)this + 8) = pcVar2;
      *(undefined4 *)((int)this + 0xc) = 9;
      return (char *)0x0;
    }
    if (((cVar1 == '<') && (pcVar2[1] == '!')) && (pcVar2[2] == '[')) {
      pcVar2 = pcVar2 + 3;
      iVar3 = iVar3 + 1;
    }
    else if (((cVar1 == ']') && (pcVar2[1] == ']')) && (pcVar2[2] == '>')) {
      pcVar2 = pcVar2 + 3;
      if (iVar3 == 0) {
        return pcVar2;
      }
      iVar3 = iVar3 + -1;
    }
    else {
      pcVar2 = pcVar2 + 1;
    }
    cVar1 = *pcVar2;
  } while( true );
}

