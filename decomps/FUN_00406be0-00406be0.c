
char * __cdecl FUN_00406be0(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 < 10000) {
    iVar1 = (param_1 % 100) * 2;
    if (999 < param_1) {
      *param_2 = (&DAT_004489f0)[(param_1 / 100) * 2];
      param_2 = param_2 + 1;
    }
    if (99 < param_1) {
      *param_2 = (&DAT_004489f1)[(param_1 / 100) * 2];
      param_2 = param_2 + 1;
    }
    if (9 < param_1) {
      *param_2 = (&DAT_004489f0)[iVar1];
      param_2 = param_2 + 1;
    }
    *param_2 = (&DAT_004489f1)[iVar1];
    return param_2 + 1;
  }
  if (param_1 < 100000000) {
    uVar5 = (param_1 / 10000) / 100;
    uVar4 = (param_1 % 10000) / 100;
    iVar1 = ((param_1 / 10000) % 100) * 2;
    iVar2 = ((param_1 % 10000) % 100) * 2;
    if (9999999 < param_1) {
      *param_2 = (&DAT_004489f0)[uVar5 * 2];
      param_2 = param_2 + 1;
    }
    if (999999 < param_1) {
      *param_2 = (&DAT_004489f1)[uVar5 * 2];
      param_2 = param_2 + 1;
    }
    if (99999 < param_1) {
      *param_2 = (&DAT_004489f0)[iVar1];
      param_2 = param_2 + 1;
    }
    *param_2 = (&DAT_004489f1)[iVar1];
    param_2[1] = (&DAT_004489f0)[uVar4 * 2];
    param_2[2] = (&DAT_004489f1)[uVar4 * 2];
    param_2[3] = (&DAT_004489f0)[iVar2];
    param_2[4] = (&DAT_004489f1)[iVar2];
    return param_2 + 5;
  }
  if (param_1 / 100000000 < 10) {
    *param_2 = (char)(param_1 / 100000000) + '0';
    pcVar3 = param_2 + 1;
  }
  else {
    iVar1 = (param_1 / 100000000) * 2;
    *param_2 = (&DAT_004489f0)[iVar1];
    param_2[1] = (&DAT_004489f1)[iVar1];
    pcVar3 = param_2 + 2;
  }
  uVar6 = (param_1 % 100000000) / 10000;
  uVar7 = (param_1 % 100000000) % 10000;
  uVar5 = uVar6 / 100;
  uVar6 = uVar6 % 100;
  uVar4 = uVar7 / 100;
  *pcVar3 = (&DAT_004489f0)[uVar5 * 2];
  pcVar3[1] = (&DAT_004489f1)[uVar5 * 2];
  pcVar3[2] = (&DAT_004489f0)[uVar6 * 2];
  pcVar3[3] = (&DAT_004489f1)[uVar6 * 2];
  pcVar3[4] = (&DAT_004489f0)[uVar4 * 2];
  iVar1 = (uVar7 % 100) * 2;
  pcVar3[5] = (&DAT_004489f1)[uVar4 * 2];
  pcVar3[6] = (&DAT_004489f0)[iVar1];
  pcVar3[7] = (&DAT_004489f1)[iVar1];
  return pcVar3 + 8;
}

