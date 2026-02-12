
byte * __cdecl FUN_004157e0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  do {
    bVar2 = (&DAT_00449bf0)[*param_1];
    while ((bVar2 & 1) == 0) {
      if (((&DAT_00449bf0)[param_1[1]] & 1) != 0) {
        param_1 = param_1 + 1;
        break;
      }
      if (((&DAT_00449bf0)[param_1[2]] & 1) != 0) {
        param_1 = param_1 + 2;
        break;
      }
      if (((&DAT_00449bf0)[param_1[3]] & 1) != 0) {
        param_1 = param_1 + 3;
        break;
      }
      pbVar1 = param_1 + 4;
      param_1 = param_1 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar1];
    }
    if (*param_1 == 0x3c) {
      *param_1 = 0;
      return param_1 + 1;
    }
    if (*param_1 == 0) {
      *param_1 = 0;
      return param_1;
    }
    param_1 = param_1 + 1;
  } while( true );
}

