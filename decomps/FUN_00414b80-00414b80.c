
byte * __cdecl FUN_00414b80(byte *param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < 0x10000) {
    pbVar1 = FUN_00414b20(param_1,param_2);
    return pbVar1;
  }
  *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
  param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
  param_1[3] = (byte)param_2 & 0x3f | 0x80;
  param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
  return param_1 + 4;
}

