
byte * __cdecl FUN_00415bb0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = param_1;
  do {
    bVar2 = (&DAT_00449bf0)[*pbVar3];
    while ((bVar2 & 1) == 0) {
      if (((&DAT_00449bf0)[pbVar3[1]] & 1) != 0) {
        pbVar3 = pbVar3 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[2]] & 1) != 0) {
        pbVar3 = pbVar3 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[3]] & 1) != 0) {
        pbVar3 = pbVar3 + 3;
        break;
      }
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar1];
    }
    pbVar1 = pbVar3;
    if (*pbVar3 == 0x3c) {
      while ((param_1 < pbVar1 && (((&DAT_00449bf0)[pbVar1[-1]] & 8) != 0))) {
        pbVar1 = pbVar1 + -1;
      }
      *pbVar1 = 0;
      return pbVar3 + 1;
    }
    if (*pbVar3 == 0) {
      while ((param_1 < pbVar1 && (((&DAT_00449bf0)[pbVar1[-1]] & 8) != 0))) {
        pbVar1 = pbVar1 + -1;
      }
      *pbVar1 = 0;
      return pbVar3;
    }
    pbVar3 = pbVar3 + 1;
  } while( true );
}

