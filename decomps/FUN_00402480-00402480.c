
int FUN_00402480(char *param_1,uint param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar2 = -0x7ff8ffa9;
  }
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar3 = 0x7ffffffe - param_2;
    iVar4 = param_3 - (int)param_1;
    pcVar1 = param_1;
    while ((param_1 = pcVar1, iVar3 + param_2 != 0 && (param_1[iVar4] != '\0'))) {
      *param_1 = param_1[iVar4];
      param_2 = param_2 - 1;
      pcVar1 = param_1 + 1;
      if (param_2 == 0) {
        *param_1 = '\0';
        return -0x7ff8ff86;
      }
    }
    if (param_2 != 0) goto LAB_004024e5;
  }
  param_1 = param_1 + -1;
  iVar2 = -0x7ff8ff86;
LAB_004024e5:
  *param_1 = '\0';
  return iVar2;
}

