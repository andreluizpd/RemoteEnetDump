
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00413560(int *param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined2 *)(param_2 + 2);
  piVar3 = local_48;
  iVar5 = 0x10;
  do {
    *piVar3 = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                       *(undefined1 *)(puVar1 + -1));
    piVar3 = piVar3 + 1;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = *param_1 + -0x28955b88 + (uVar7 & uVar4 | ~uVar7 & param_1[3]) + local_48[0];
  uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar7;
  uVar6 = param_1[3] + 0xe8c7b756U + (uVar2 & uVar7 | ~uVar2 & uVar4) + local_48[1];
  uVar6 = (uVar6 * 0x1000 | uVar6 >> 0x14) + uVar2;
  uVar4 = uVar4 + 0x242070db + (uVar6 & uVar2 | ~uVar6 & uVar7) + local_48[2];
  uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) + uVar6;
  uVar7 = uVar7 + 0xc1bdceee + (uVar4 & uVar6 | ~uVar4 & uVar2) + local_48[3];
  uVar8 = (uVar7 * 0x400000 | uVar7 >> 10) + uVar4;
  uVar7 = uVar2 + 0xf57c0faf + (uVar8 & uVar4 | ~uVar8 & uVar6) + local_38;
  uVar7 = (uVar7 * 0x80 | uVar7 >> 0x19) + uVar8;
  uVar2 = uVar6 + 0x4787c62a + (uVar7 & uVar8 | ~uVar7 & uVar4) + local_34;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar7;
  uVar4 = uVar4 + 0xa8304613 + (uVar2 & uVar7 | ~uVar2 & uVar8) + local_30;
  uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) + uVar2;
  uVar6 = uVar8 + 0xfd469501 + (uVar4 & uVar2 | ~uVar4 & uVar7) + local_2c;
  uVar6 = (uVar6 * 0x400000 | uVar6 >> 10) + uVar4;
  uVar7 = uVar7 + 0x698098d8 + (uVar6 & uVar4 | ~uVar6 & uVar2) + local_28;
  uVar7 = (uVar7 * 0x80 | uVar7 >> 0x19) + uVar6;
  uVar2 = uVar2 + 0x8b44f7af + (uVar7 & uVar6 | ~uVar7 & uVar4) + local_24;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar7;
  uVar4 = (uVar4 - 0xa44f) + (uVar2 & uVar7 | ~uVar2 & uVar6) + local_20;
  uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) + uVar2;
  uVar6 = uVar6 + 0x895cd7be + (uVar4 & uVar2 | ~uVar4 & uVar7) + local_1c;
  uVar6 = (uVar6 * 0x400000 | uVar6 >> 10) + uVar4;
  uVar7 = uVar7 + 0x6b901122 + (uVar6 & uVar4 | ~uVar6 & uVar2) + local_18;
  uVar7 = (uVar7 * 0x80 | uVar7 >> 0x19) + uVar6;
  uVar2 = uVar2 + 0xfd987193 + (uVar7 & uVar6 | ~uVar7 & uVar4) + local_14;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar7;
  uVar4 = uVar4 + 0xa679438e + (uVar2 & uVar7 | ~uVar2 & uVar6) + local_10;
  uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) + uVar2;
  uVar6 = uVar6 + 0x49b40821 + (uVar4 & uVar2 | ~uVar4 & uVar7) + local_c;
  uVar6 = (uVar6 * 0x400000 | uVar6 >> 10) + uVar4;
  uVar7 = uVar7 + 0xf61e2562 + (uVar2 & uVar6 | ~uVar2 & uVar4) + local_48[1];
  uVar7 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar6;
  uVar2 = uVar2 + 0xc040b340 + (uVar4 & uVar7 | ~uVar4 & uVar6) + local_30;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar7;
  uVar4 = uVar4 + 0x265e5a51 + (uVar6 & uVar2 | ~uVar6 & uVar7) + local_1c;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar6 = uVar6 + 0xe9b6c7aa + (uVar7 & uVar4 | ~uVar7 & uVar2) + local_48[0];
  uVar6 = (uVar6 * 0x100000 | uVar6 >> 0xc) + uVar4;
  uVar7 = uVar7 + 0xd62f105d + (uVar2 & uVar6 | ~uVar2 & uVar4) + local_34;
  uVar7 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar6;
  uVar2 = uVar2 + 0x2441453 + (uVar4 & uVar7 | ~uVar4 & uVar6) + local_20;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar7;
  uVar4 = uVar4 + 0xd8a1e681 + (uVar6 & uVar2 | ~uVar6 & uVar7) + local_c;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar6 = uVar6 + 0xe7d3fbc8 + (uVar7 & uVar4 | ~uVar7 & uVar2) + local_38;
  uVar6 = (uVar6 * 0x100000 | uVar6 >> 0xc) + uVar4;
  uVar7 = uVar7 + 0x21e1cde6 + (uVar2 & uVar6 | ~uVar2 & uVar4) + local_24;
  uVar7 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar6;
  uVar2 = uVar2 + 0xc33707d6 + (uVar4 & uVar7 | ~uVar4 & uVar6) + local_10;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar7;
  uVar4 = uVar4 + 0xf4d50d87 + (uVar6 & uVar2 | ~uVar6 & uVar7) + local_48[3];
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar6 = uVar6 + 0x455a14ed + (uVar7 & uVar4 | ~uVar7 & uVar2) + local_28;
  uVar6 = (uVar6 * 0x100000 | uVar6 >> 0xc) + uVar4;
  uVar7 = uVar7 + 0xa9e3e905 + (uVar2 & uVar6 | ~uVar2 & uVar4) + local_14;
  uVar7 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar6;
  uVar2 = uVar2 + 0xfcefa3f8 + (uVar4 & uVar7 | ~uVar4 & uVar6) + local_48[2];
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar7;
  uVar4 = uVar4 + 0x676f02d9 + (uVar6 & uVar2 | ~uVar6 & uVar7) + local_2c;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar6 = uVar6 + 0x8d2a4c8a + (uVar7 & uVar4 | ~uVar7 & uVar2) + local_18;
  uVar6 = (uVar6 * 0x100000 | uVar6 >> 0xc) + uVar4;
  uVar7 = (uVar7 - 0x5c6be) + (uVar6 ^ uVar4 ^ uVar2) + local_34;
  uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar6;
  uVar2 = uVar2 + 0x8771f681 + (uVar7 ^ uVar6 ^ uVar4) + local_28;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar7;
  uVar4 = uVar4 + 0x6d9d6122 + (uVar2 ^ uVar7 ^ uVar6) + local_1c;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar6 = uVar6 + 0xfde5380c + (uVar4 ^ uVar2 ^ uVar7) + local_10;
  uVar6 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar4;
  uVar7 = uVar7 + 0xa4beea44 + (uVar6 ^ uVar4 ^ uVar2) + local_48[1];
  uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar6;
  uVar2 = uVar2 + 0x4bdecfa9 + (uVar7 ^ uVar6 ^ uVar4) + local_38;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar7;
  uVar4 = uVar4 + 0xf6bb4b60 + (uVar2 ^ uVar7 ^ uVar6) + local_2c;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar6 = uVar6 + 0xbebfbc70 + (uVar4 ^ uVar2 ^ uVar7) + local_20;
  uVar6 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar4;
  uVar7 = uVar7 + 0x289b7ec6 + (uVar6 ^ uVar4 ^ uVar2) + local_14;
  uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar6;
  uVar2 = uVar2 + 0xeaa127fa + (uVar7 ^ uVar6 ^ uVar4) + local_48[0];
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar7;
  uVar4 = uVar4 + 0xd4ef3085 + (uVar2 ^ uVar7 ^ uVar6) + local_48[3];
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar6 = uVar6 + 0x4881d05 + (uVar4 ^ uVar2 ^ uVar7) + local_30;
  uVar6 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar4;
  uVar7 = uVar7 + 0xd9d4d039 + (uVar6 ^ uVar4 ^ uVar2) + local_24;
  uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar6;
  uVar2 = uVar2 + 0xe6db99e5 + (uVar7 ^ uVar6 ^ uVar4) + local_18;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar7;
  uVar4 = uVar4 + 0x1fa27cf8 + (uVar2 ^ uVar7 ^ uVar6) + local_c;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar6 = uVar6 + 0xc4ac5665 + (uVar4 ^ uVar2 ^ uVar7) + local_48[2];
  uVar6 = (uVar6 * 0x800000 | uVar6 >> 9) + uVar4;
  uVar7 = uVar7 + 0xf4292244 + ((~uVar2 | uVar6) ^ uVar4) + local_48[0];
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar6;
  uVar2 = uVar2 + 0x432aff97 + ((~uVar4 | uVar7) ^ uVar6) + local_2c;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar7;
  uVar4 = uVar4 + 0xab9423a7 + ((~uVar6 | uVar2) ^ uVar7) + local_10;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar6 = uVar6 + 0xfc93a039 + ((~uVar7 | uVar4) ^ uVar2) + local_34;
  uVar6 = (uVar6 * 0x200000 | uVar6 >> 0xb) + uVar4;
  uVar7 = uVar7 + 0x655b59c3 + ((~uVar2 | uVar6) ^ uVar4) + local_18;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar6;
  uVar2 = uVar2 + 0x8f0ccc92 + ((~uVar4 | uVar7) ^ uVar6) + local_48[3];
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar7;
  uVar4 = (uVar4 - 0x100b83) + ((~uVar6 | uVar2) ^ uVar7) + local_20;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar6 = uVar6 + 0x85845dd1 + ((~uVar7 | uVar4) ^ uVar2) + local_48[1];
  uVar6 = (uVar6 * 0x200000 | uVar6 >> 0xb) + uVar4;
  uVar7 = uVar7 + 0x6fa87e4f + ((~uVar2 | uVar6) ^ uVar4) + local_28;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar6;
  uVar2 = uVar2 + 0xfe2ce6e0 + ((~uVar4 | uVar7) ^ uVar6) + local_c;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar7;
  uVar4 = uVar4 + 0xa3014314 + ((~uVar6 | uVar2) ^ uVar7) + local_30;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar6 = uVar6 + 0x4e0811a1 + ((~uVar7 | uVar4) ^ uVar2) + local_14;
  uVar6 = (uVar6 * 0x200000 | uVar6 >> 0xb) + uVar4;
  uVar7 = uVar7 + 0xf7537e82 + ((~uVar2 | uVar6) ^ uVar4) + local_38;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar6;
  uVar2 = uVar2 + 0xbd3af235 + ((~uVar4 | uVar7) ^ uVar6) + local_1c;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar7;
  uVar4 = uVar4 + 0x2ad7d2bb + ((~uVar6 | uVar2) ^ uVar7) + local_48[2];
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar6 = uVar6 + 0xeb86d391 + ((~uVar7 | uVar4) ^ uVar2) + local_24;
  *param_1 = *param_1 + uVar7;
  param_1[1] = param_1[1] + (uVar6 * 0x200000 | uVar6 >> 0xb) + uVar4;
  param_1[2] = param_1[2] + uVar4;
  param_1[3] = param_1[3] + uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

