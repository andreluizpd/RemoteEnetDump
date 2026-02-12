
byte * __cdecl FUN_00414b20(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar1;
    return param_1 + 1;
  }
  if (param_2 < 0x800) {
    param_1[1] = bVar1 & 0x3f | 0x80;
    *param_1 = (byte)(param_2 >> 6) | 0xc0;
    return param_1 + 2;
  }
  *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
  param_1[2] = bVar1 & 0x3f | 0x80;
  param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
  return param_1 + 3;
}

