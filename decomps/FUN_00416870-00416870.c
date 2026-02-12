
void __cdecl FUN_00416870(ushort *param_1,int param_2,byte *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ushort *puVar5;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    puVar5 = param_1 + 1;
    do {
      uVar2 = *param_1;
      uVar4 = (uint)uVar2;
      bVar3 = (byte)uVar2;
      if (uVar4 < 0xd800) {
        if (uVar4 < 0x80) {
          *param_3 = bVar3;
          param_3 = param_3 + 1;
        }
        else {
LAB_004168ab:
          if (uVar4 < 0x800) {
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
LAB_00416987:
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      }
      else {
        if (uVar4 - 0xe000 < 0x2000) {
          if (0x7f < uVar4) goto LAB_004168ab;
          *param_3 = bVar3;
          param_3 = param_3 + 1;
          goto LAB_00416987;
        }
        if (((0x3ff < uVar4 - 0xd800) || (puVar1 <= puVar5)) || (0x3ff < *puVar5 - 0xdc00))
        goto LAB_00416987;
        uVar4 = ((uVar4 & 0x3ff) + 0x40) * 0x400 + (*puVar5 & 0x3ff);
        *param_3 = (byte)(uVar4 >> 0x12) | 0xf0;
        param_3[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
        param_3[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        param_3[3] = (byte)uVar4 & 0x3f | 0x80;
        param_3 = param_3 + 4;
        param_1 = param_1 + 2;
        puVar5 = puVar5 + 2;
      }
    } while (param_1 < puVar1);
  }
  return;
}

