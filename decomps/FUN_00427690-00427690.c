
char * __cdecl FUN_00427690(char *param_1,int param_2,char param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_3 == '\0') {
    param_3 = ';';
  }
  for (iVar3 = param_2 + -1; pcVar2 = param_4, iVar3 != 0; iVar3 = iVar3 + -1) {
    cVar1 = *param_1;
    if (cVar1 == '\0') goto LAB_004276e1;
    do {
      if (cVar1 == param_3) goto LAB_004276c6;
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    if (param_3 == '\0') {
LAB_004276c6:
      param_1 = param_1 + 1;
    }
  }
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == param_3) break;
      *pcVar2 = cVar1;
      cVar1 = pcVar2[(int)(param_1 + (1 - (int)param_4))];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
LAB_004276e1:
  *pcVar2 = '\0';
  return param_4;
}

