
int __cdecl FUN_00416b80(ushort *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    puVar3 = param_1 + 1;
    do {
      uVar2 = (uint)(ushort)(*param_1 << 8 | *param_1 >> 8);
      if ((uVar2 < 0xd800) || (uVar2 - 0xe000 < 0x2000)) {
        if (uVar2 < 0x80) {
          param_3 = param_3 + 1;
        }
        else if (uVar2 < 0x800) {
          param_3 = param_3 + 2;
        }
        else {
          param_3 = param_3 + 3;
        }
LAB_00416bbb:
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        if (((0x3ff < uVar2 - 0xd800) || (puVar1 <= puVar3)) ||
           (0x3ff < (ushort)(*puVar3 << 8 | *puVar3 >> 8) - 0xdc00)) goto LAB_00416bbb;
        param_3 = param_3 + 4;
        param_1 = param_1 + 2;
        puVar3 = puVar3 + 2;
      }
    } while (param_1 < puVar1);
  }
  return param_3;
}

