
void __cdecl FUN_00416ac0(uint *param_1,int param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x10000) {
        if (uVar2 < 0x80) {
          *param_3 = bVar3;
          param_3 = param_3 + 1;
        }
        else if (uVar2 < 0x800) {
          *param_3 = (byte)(uVar2 >> 6) | 0xc0;
          param_3[1] = bVar3 & 0x3f | 0x80;
          param_3 = param_3 + 2;
        }
        else {
          *param_3 = (byte)(uVar2 >> 0xc) | 0xe0;
          param_3[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
          param_3[2] = bVar3 & 0x3f | 0x80;
          param_3 = param_3 + 3;
        }
      }
      else {
        *param_3 = (byte)(uVar2 >> 0x12) | 0xf0;
        param_3[1] = (byte)(uVar2 >> 0xc) & 0x3f | 0x80;
        param_3[2] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_3[3] = bVar3 & 0x3f | 0x80;
        param_3 = param_3 + 4;
      }
      param_1 = param_1 + 1;
    } while (param_1 < puVar1);
  }
  return;
}

