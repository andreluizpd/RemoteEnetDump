
undefined8 __fastcall
FUN_00401000(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4,uint param_5)

{
  longlong lVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  
  *param_3 = 0x67452301;
  param_3[1] = -0x10325477;
  param_3[2] = -0x67452302;
  param_3[3] = 0x10325476;
  local_28._4_4_ = param_5;
  uVar3 = param_5;
  iVar6 = param_5 / 0x40 + 1;
  do {
    lVar1 = CONCAT44(local_28._4_4_,(int)local_28);
    iVar7 = iVar6 + -1;
    iVar4 = iVar7;
    if (iVar7 == 0) {
      if ((int)uVar3 < 0) {
        uVar3 = 0xffffffff;
      }
      else {
        *(undefined1 *)((int)&local_60 + uVar3) = 0x80;
      }
      iVar4 = 0x40 - uVar3;
      puVar11 = (undefined1 *)((int)&local_60 + uVar3);
      while( true ) {
        lVar1 = CONCAT44(local_28._4_4_,(int)local_28);
        puVar11 = puVar11 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        *puVar11 = 0;
      }
      if (((int)uVar3 < 0) || (iVar4 = iVar6, uVar3 < 0x38)) {
        lVar1 = (ulonglong)param_5 * 8;
        iVar4 = iVar7;
      }
    }
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      uVar9 = uVar3;
      piVar12 = &local_60;
    }
    else {
      uVar9 = uVar3;
      piVar12 = &local_60;
      if (0x3f < uVar3) {
        uVar9 = 0x40;
        piVar12 = &local_60;
      }
    }
    while( true ) {
      local_28._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
      local_28._0_4_ = (int)lVar1;
      if (uVar9 == 0) break;
      local_28 = lVar1;
      *(undefined1 *)piVar12 = *param_4;
      uVar9 = uVar9 - 1;
      param_4 = param_4 + 1;
      piVar12 = (int *)((int)piVar12 + 1);
      lVar1 = local_28;
    }
    uVar9 = param_3[1];
    uVar5 = param_3[2];
    uVar2 = (uVar9 & uVar5 | ~uVar9 & param_3[3]) + 0xd76aa478 + *param_3 + local_60;
    uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar9;
    uVar8 = (uVar2 & uVar9 | ~uVar2 & uVar5) + 0xe8c7b756 + param_3[3] + local_5c;
    uVar8 = (uVar8 * 0x1000 | uVar8 >> 0x14) + uVar2;
    uVar5 = (uVar8 & uVar2 | ~uVar8 & uVar9) + 0x242070db + uVar5 + local_58;
    uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar8;
    uVar9 = (uVar5 & uVar8 | ~uVar5 & uVar2) + 0xc1bdceee + uVar9 + local_54;
    uVar10 = (uVar9 * 0x400000 | uVar9 >> 10) + uVar5;
    uVar9 = (uVar10 & uVar5 | ~uVar10 & uVar8) + 0xf57c0faf + uVar2 + local_50;
    uVar9 = (uVar9 * 0x80 | uVar9 >> 0x19) + uVar10;
    uVar2 = (uVar9 & uVar10 | ~uVar9 & uVar5) + 0x4787c62a + uVar8 + local_4c;
    uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar9;
    uVar5 = (uVar2 & uVar9 | ~uVar2 & uVar10) + 0xa8304613 + uVar5 + local_48;
    uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar2;
    uVar8 = (uVar5 & uVar2 | ~uVar5 & uVar9) + 0xfd469501 + uVar10 + local_44;
    uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
    uVar9 = (uVar8 & uVar5 | ~uVar8 & uVar2) + 0x698098d8 + uVar9 + local_40;
    uVar9 = (uVar9 * 0x80 | uVar9 >> 0x19) + uVar8;
    uVar2 = (uVar9 & uVar8 | ~uVar9 & uVar5) + 0x8b44f7af + uVar2 + local_3c;
    uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar9;
    uVar5 = ((uVar2 & uVar9 | ~uVar2 & uVar8) - 0xa44f) + uVar5 + local_38;
    uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar2;
    uVar8 = (uVar5 & uVar2 | ~uVar5 & uVar9) + 0x895cd7be + uVar8 + local_34;
    uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
    uVar9 = (uVar8 & uVar5 | ~uVar8 & uVar2) + 0x6b901122 + uVar9 + local_30;
    uVar9 = (uVar9 * 0x80 | uVar9 >> 0x19) + uVar8;
    uVar2 = (uVar9 & uVar8 | ~uVar9 & uVar5) + 0xfd987193 + uVar2 + local_2c;
    uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar9;
    uVar5 = (uVar2 & uVar9 | ~uVar2 & uVar8) + 0xa679438e + uVar5 + (int)local_28;
    uVar5 = (uVar5 * 0x20000 | uVar5 >> 0xf) + uVar2;
    uVar8 = (uVar5 & uVar2 | ~uVar5 & uVar9) + 0x49b40821 + uVar8 + local_28._4_4_;
    uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar5;
    uVar9 = (uVar2 & uVar8 | ~uVar2 & uVar5) + 0xf61e2562 + uVar9 + local_5c;
    uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
    uVar2 = (uVar5 & uVar9 | ~uVar5 & uVar8) + 0xc040b340 + uVar2 + local_48;
    uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar9;
    uVar5 = (uVar8 & uVar2 | ~uVar8 & uVar9) + 0x265e5a51 + uVar5 + local_34;
    uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar2;
    uVar8 = (uVar9 & uVar5 | ~uVar9 & uVar2) + 0xe9b6c7aa + uVar8 + local_60;
    uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
    uVar9 = (uVar2 & uVar8 | ~uVar2 & uVar5) + 0xd62f105d + uVar9 + local_4c;
    uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
    uVar2 = (uVar5 & uVar9 | ~uVar5 & uVar8) + 0x2441453 + uVar2 + local_38;
    uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar9;
    uVar5 = (uVar8 & uVar2 | ~uVar8 & uVar9) + 0xd8a1e681 + uVar5 + local_28._4_4_;
    uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar2;
    uVar8 = (uVar9 & uVar5 | ~uVar9 & uVar2) + 0xe7d3fbc8 + uVar8 + local_50;
    uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
    uVar9 = (uVar2 & uVar8 | ~uVar2 & uVar5) + 0x21e1cde6 + uVar9 + local_3c;
    uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
    uVar2 = (uVar5 & uVar9 | ~uVar5 & uVar8) + 0xc33707d6 + uVar2 + (int)local_28;
    uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar9;
    uVar5 = (uVar8 & uVar2 | ~uVar8 & uVar9) + 0xf4d50d87 + uVar5 + local_54;
    uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar2;
    uVar8 = (uVar9 & uVar5 | ~uVar9 & uVar2) + 0x455a14ed + uVar8 + local_40;
    uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
    uVar9 = (uVar2 & uVar8 | ~uVar2 & uVar5) + 0xa9e3e905 + uVar9 + local_2c;
    uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
    uVar2 = (uVar5 & uVar9 | ~uVar5 & uVar8) + 0xfcefa3f8 + uVar2 + local_58;
    uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar9;
    uVar5 = (uVar8 & uVar2 | ~uVar8 & uVar9) + 0x676f02d9 + uVar5 + local_44;
    uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar2;
    uVar8 = (uVar9 & uVar5 | ~uVar9 & uVar2) + 0x8d2a4c8a + uVar8 + local_30;
    uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar5;
    uVar9 = ((uVar8 ^ uVar5 ^ uVar2) - 0x5c6be) + uVar9 + local_4c;
    uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
    uVar2 = (uVar9 ^ uVar8 ^ uVar5) + 0x8771f681 + uVar2 + local_40;
    uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar9;
    uVar5 = (uVar2 ^ uVar9 ^ uVar8) + 0x6d9d6122 + uVar5 + local_34;
    uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar2;
    uVar8 = (uVar5 ^ uVar2 ^ uVar9) + 0xfde5380c + uVar8 + (int)local_28;
    uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
    uVar9 = (uVar8 ^ uVar5 ^ uVar2) + 0xa4beea44 + uVar9 + local_5c;
    uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
    uVar2 = (uVar9 ^ uVar8 ^ uVar5) + 0x4bdecfa9 + uVar2 + local_50;
    uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar9;
    uVar5 = (uVar2 ^ uVar9 ^ uVar8) + 0xf6bb4b60 + uVar5 + local_44;
    uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar2;
    uVar8 = (uVar5 ^ uVar2 ^ uVar9) + 0xbebfbc70 + uVar8 + local_38;
    uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
    uVar9 = (uVar8 ^ uVar5 ^ uVar2) + 0x289b7ec6 + uVar9 + local_2c;
    uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
    uVar2 = (uVar9 ^ uVar8 ^ uVar5) + 0xeaa127fa + uVar2 + local_60;
    uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar9;
    uVar5 = (uVar2 ^ uVar9 ^ uVar8) + 0xd4ef3085 + uVar5 + local_54;
    uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar2;
    uVar8 = (uVar5 ^ uVar2 ^ uVar9) + 0x4881d05 + uVar8 + local_48;
    uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
    uVar9 = (uVar8 ^ uVar5 ^ uVar2) + 0xd9d4d039 + uVar9 + local_3c;
    uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
    uVar2 = (uVar9 ^ uVar8 ^ uVar5) + 0xe6db99e5 + uVar2 + local_30;
    uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar9;
    uVar5 = (uVar2 ^ uVar9 ^ uVar8) + 0x1fa27cf8 + uVar5 + local_28._4_4_;
    uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar2;
    uVar8 = (uVar5 ^ uVar2 ^ uVar9) + 0xc4ac5665 + uVar8 + local_58;
    uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar5;
    uVar9 = ((~uVar2 | uVar8) ^ uVar5) + 0xf4292244 + uVar9 + local_60;
    uVar9 = (uVar9 * 0x40 | uVar9 >> 0x1a) + uVar8;
    uVar2 = ((~uVar5 | uVar9) ^ uVar8) + 0x432aff97 + uVar2 + local_44;
    uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar9;
    uVar5 = ((~uVar8 | uVar2) ^ uVar9) + 0xab9423a7 + uVar5 + (int)local_28;
    uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar2;
    uVar8 = ((~uVar9 | uVar5) ^ uVar2) + 0xfc93a039 + uVar8 + local_4c;
    uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
    uVar9 = ((~uVar2 | uVar8) ^ uVar5) + 0x655b59c3 + uVar9 + local_30;
    uVar9 = (uVar9 * 0x40 | uVar9 >> 0x1a) + uVar8;
    uVar2 = ((~uVar5 | uVar9) ^ uVar8) + 0x8f0ccc92 + uVar2 + local_54;
    uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar9;
    uVar5 = (((~uVar8 | uVar2) ^ uVar9) - 0x100b83) + uVar5 + local_38;
    uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar2;
    uVar8 = ((~uVar9 | uVar5) ^ uVar2) + 0x85845dd1 + uVar8 + local_5c;
    uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
    uVar9 = ((~uVar2 | uVar8) ^ uVar5) + 0x6fa87e4f + uVar9 + local_40;
    uVar9 = (uVar9 * 0x40 | uVar9 >> 0x1a) + uVar8;
    uVar2 = ((~uVar5 | uVar9) ^ uVar8) + 0xfe2ce6e0 + uVar2 + local_28._4_4_;
    uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar9;
    uVar5 = ((~uVar8 | uVar2) ^ uVar9) + 0xa3014314 + uVar5 + local_48;
    uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar2;
    uVar8 = ((~uVar9 | uVar5) ^ uVar2) + 0x4e0811a1 + uVar8 + local_2c;
    uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
    uVar9 = ((~uVar2 | uVar8) ^ uVar5) + 0xf7537e82 + uVar9 + local_50;
    uVar9 = (uVar9 * 0x40 | uVar9 >> 0x1a) + uVar8;
    uVar2 = ((~uVar5 | uVar9) ^ uVar8) + 0xbd3af235 + uVar2 + local_34;
    uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar9;
    uVar5 = ((~uVar8 | uVar2) ^ uVar9) + 0x2ad7d2bb + uVar5 + local_58;
    uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar2;
    uVar8 = ((~uVar9 | uVar5) ^ uVar2) + 0xeb86d391 + uVar8 + local_3c;
    *param_3 = *param_3 + uVar9;
    param_3[1] = param_3[1] + (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar5;
    param_3[2] = param_3[2] + uVar5;
    param_3[3] = param_3[3] + uVar2;
    uVar3 = uVar3 - 0x40;
    iVar6 = iVar4;
  } while (iVar4 != 0);
  return CONCAT44(param_2,in_EAX);
}

