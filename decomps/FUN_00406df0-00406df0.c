
char * __cdecl FUN_00406df0(uint param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint extraout_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_EBX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if ((param_2 == 0) && (param_1 < 100000000)) {
    if (param_1 < 10000) {
      iVar2 = (param_1 % 100) * 2;
      if (999 < param_1) {
        *param_3 = (&DAT_004489f0)[(param_1 / 100) * 2];
        param_3 = param_3 + 1;
      }
      if (99 < param_1) {
        *param_3 = (&DAT_004489f1)[(param_1 / 100) * 2];
        param_3 = param_3 + 1;
      }
      if (9 < param_1) {
        *param_3 = (&DAT_004489f0)[iVar2];
        param_3 = param_3 + 1;
      }
      *param_3 = (&DAT_004489f1)[iVar2];
      return param_3 + 1;
    }
    uVar6 = (param_1 / 10000) / 100;
    uVar5 = (param_1 % 10000) / 100;
    iVar2 = ((param_1 / 10000) % 100) * 2;
    iVar3 = ((param_1 % 10000) % 100) * 2;
    if (9999999 < param_1) {
      *param_3 = (&DAT_004489f0)[uVar6 * 2];
      param_3 = param_3 + 1;
    }
    if (999999 < param_1) {
      *param_3 = (&DAT_004489f1)[uVar6 * 2];
      param_3 = param_3 + 1;
    }
    if (99999 < param_1) {
      *param_3 = (&DAT_004489f0)[iVar2];
      param_3 = param_3 + 1;
    }
    *param_3 = (&DAT_004489f1)[iVar2];
    param_3[1] = (&DAT_004489f0)[uVar5 * 2];
    param_3[2] = (&DAT_004489f1)[uVar5 * 2];
    param_3[3] = (&DAT_004489f0)[iVar3];
    param_3[4] = (&DAT_004489f1)[iVar3];
    return param_3 + 5;
  }
  if ((param_2 < 0x2386f3) && ((param_2 < 0x2386f2 || (param_1 < 0x6fc10000)))) {
    uVar12 = __aulldiv(param_1,param_2,100000000,0);
    uVar10 = param_1 + (int)uVar12 * -100000000;
    uVar13 = (uVar12 & 0xffffffff) / 10000;
    iVar2 = (int)uVar13;
    uVar6 = (int)uVar12 + iVar2 * -10000;
    iVar7 = (int)(uVar13 / 100);
    iVar2 = (iVar2 + iVar7 * -100) * 2;
    uVar5 = uVar6 / 100;
    iVar3 = (uVar6 % 100) * 2;
    uVar8 = uVar10 / 10000;
    uVar10 = uVar10 % 10000;
    uVar6 = uVar8 / 100;
    iVar4 = (uVar8 % 100) * 2;
    uVar8 = uVar10 / 100;
    iVar1 = (uVar10 % 100) * 2;
    if ((0x38d7d < param_2) && ((0x38d7e < param_2 || (0xa4c67fff < param_1)))) {
      *param_3 = (&DAT_004489f0)[iVar7 * 2];
      param_3 = param_3 + 1;
    }
    if ((0x5af2 < param_2) && ((0x5af3 < param_2 || (0x107a3fff < param_1)))) {
      *param_3 = (&DAT_004489f1)[iVar7 * 2];
      param_3 = param_3 + 1;
    }
    if ((0x917 < param_2) && ((0x918 < param_2 || (0x4e729fff < param_1)))) {
      *param_3 = (&DAT_004489f0)[iVar2];
      param_3 = param_3 + 1;
    }
    if ((0xe7 < param_2) && ((0xe8 < param_2 || (0xd4a50fff < param_1)))) {
      *param_3 = (&DAT_004489f1)[iVar2];
      param_3 = param_3 + 1;
    }
    if ((0x16 < param_2) && ((0x17 < param_2 || (0x4876e7ff < param_1)))) {
      *param_3 = (&DAT_004489f0)[uVar5 * 2];
      param_3 = param_3 + 1;
    }
    if ((1 < param_2) && ((2 < param_2 || (0x540be3ff < param_1)))) {
      *param_3 = (&DAT_004489f1)[uVar5 * 2];
      param_3 = param_3 + 1;
    }
    if ((param_2 != 0) || (999999999 < param_1)) {
      *param_3 = (&DAT_004489f0)[iVar3];
      param_3 = param_3 + 1;
    }
    *param_3 = (&DAT_004489f1)[iVar3];
    param_3[1] = (&DAT_004489f0)[uVar6 * 2];
    param_3[2] = (&DAT_004489f1)[uVar6 * 2];
    param_3[3] = (&DAT_004489f0)[iVar4];
    param_3[4] = (&DAT_004489f1)[iVar4];
    param_3[5] = (&DAT_004489f0)[uVar8 * 2];
    param_3[6] = (&DAT_004489f1)[uVar8 * 2];
    param_3[7] = (&DAT_004489f0)[iVar1];
    param_3[8] = (&DAT_004489f1)[iVar1];
    return param_3 + 9;
  }
  uVar13 = __aulldvrm(param_1,param_2,0x6fc10000,0x2386f2);
  uVar5 = (uint)uVar13;
  if (uVar5 < 10) {
    *param_3 = (char)uVar13 + '0';
    pcVar9 = param_3 + 1;
  }
  else if (uVar5 < 100) {
    *param_3 = (&DAT_004489f0)[uVar5 * 2];
    param_3[1] = (&DAT_004489f1)[uVar5 * 2];
    pcVar9 = param_3 + 2;
  }
  else {
    uVar13 = (uVar13 & 0xffffffff) / 100;
    iVar2 = (int)uVar13;
    if (uVar5 < 1000) {
      iVar2 = uVar5 + iVar2 * -100;
      *param_3 = (char)uVar13 + '0';
      param_3[1] = (&DAT_004489f0)[iVar2 * 2];
      param_3[2] = (&DAT_004489f1)[iVar2 * 2];
      pcVar9 = param_3 + 3;
    }
    else {
      iVar3 = uVar5 + iVar2 * -100;
      *param_3 = (&DAT_004489f0)[iVar2 * 2];
      param_3[1] = (&DAT_004489f1)[iVar2 * 2];
      param_3[2] = (&DAT_004489f0)[iVar3 * 2];
      param_3[3] = (&DAT_004489f1)[iVar3 * 2];
      pcVar9 = param_3 + 4;
    }
  }
  uVar12 = __aulldiv(extraout_ECX,unaff_EBX,100000000,0);
  uVar6 = extraout_ECX + (int)uVar12 * -100000000;
  uVar13 = (uVar12 & 0xffffffff) / 10000;
  iVar4 = (int)uVar13;
  uVar10 = (int)uVar12 + iVar4 * -10000;
  iVar2 = (int)(uVar13 / 100);
  iVar3 = (uVar10 % 100) * 2;
  uVar11 = uVar6 / 10000;
  uVar6 = uVar6 % 10000;
  iVar4 = (iVar4 + iVar2 * -100) * 2;
  uVar8 = uVar11 / 100;
  uVar5 = uVar6 / 100;
  iVar2 = iVar2 * 2;
  *pcVar9 = (&DAT_004489f0)[iVar2];
  pcVar9[1] = (&DAT_004489f1)[iVar2];
  pcVar9[2] = (&DAT_004489f0)[iVar4];
  pcVar9[3] = (&DAT_004489f1)[iVar4];
  iVar2 = (uVar10 / 100) * 2;
  pcVar9[4] = (&DAT_004489f0)[iVar2];
  pcVar9[5] = (&DAT_004489f1)[iVar2];
  iVar2 = (uVar11 % 100) * 2;
  iVar4 = (uVar6 % 100) * 2;
  pcVar9[6] = (&DAT_004489f0)[iVar3];
  pcVar9[7] = (&DAT_004489f1)[iVar3];
  pcVar9[8] = (&DAT_004489f0)[uVar8 * 2];
  pcVar9[9] = (&DAT_004489f1)[uVar8 * 2];
  pcVar9[10] = (&DAT_004489f0)[iVar2];
  pcVar9[0xb] = (&DAT_004489f1)[iVar2];
  pcVar9[0xc] = (&DAT_004489f0)[uVar5 * 2];
  pcVar9[0xd] = (&DAT_004489f1)[uVar5 * 2];
  pcVar9[0xe] = (&DAT_004489f0)[iVar4];
  pcVar9[0xf] = (&DAT_004489f1)[iVar4];
  return pcVar9 + 0x10;
}

