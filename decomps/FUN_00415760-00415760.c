
void __cdecl FUN_00415760(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = *(byte *)(uVar2 + param_1);
      if (bVar1 < 0x80) {
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      else if (bVar1 < 0x800) {
        *param_3 = bVar1 >> 6 | 0xc0;
        param_3[1] = bVar1 & 0x3f | 0x80;
        param_3 = param_3 + 2;
      }
      else {
        *param_3 = 0xe0;
        param_3[1] = bVar1 >> 6 | 0x80;
        param_3[2] = bVar1 & 0x3f | 0x80;
        param_3 = param_3 + 3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

