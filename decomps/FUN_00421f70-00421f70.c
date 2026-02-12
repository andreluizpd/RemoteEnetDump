
int __cdecl FUN_00421f70(char *param_1,char *param_2,int param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte local_5;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  iVar2 = (param_2 != (char *)0x0) - 1;
  if (param_2 == (char *)0x0) {
    return iVar2;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_2 + 1);
  pcVar3 = param_1 + 1;
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar4 < param_3) {
    param_3 = iVar4;
  }
  if ((param_3 <= (int)pcVar5 - (int)pcVar3) || (param_5 == '\0')) {
    iVar6 = 0;
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar8 = (int)param_1 - (int)param_2;
    iVar2 = 0;
    pcVar7 = param_2;
    while ((iVar6 < param_3 && (cVar1 = *pcVar7, cVar1 != '\0'))) {
      local_5 = pcVar7[iVar8];
      pcVar7 = pcVar7 + 1;
      param_1 = (char *)CONCAT13(cVar1,param_1._0_3_);
      if (param_4 != '\0') {
        CharUpperBuffA((LPSTR)&local_5,1);
        CharUpperBuffA((LPSTR)((int)&param_1 + 3),1);
      }
      iVar6 = iVar6 + 1;
      iVar2 = (uint)local_5 - ((uint)param_1 >> 0x18);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iVar4 <= (int)pcVar5 - (int)pcVar3) {
      return 0;
    }
    if (param_5 != '\0') {
      return 0;
    }
  }
  return -1;
}

