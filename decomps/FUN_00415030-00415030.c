
byte * __cdecl FUN_00415030(byte *param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *_Src;
  byte *pbVar3;
  int iVar4;
  
  _Src = (byte *)0x0;
  iVar4 = 0;
  do {
    bVar1 = (&DAT_00449bf0)[*param_1];
    pbVar3 = param_1;
    while ((bVar1 & 0x10) == 0) {
      if (((&DAT_00449bf0)[pbVar3[1]] & 0x10) != 0) {
        pbVar3 = pbVar3 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[2]] & 0x10) != 0) {
        pbVar3 = pbVar3 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[3]] & 0x10) != 0) {
        pbVar3 = pbVar3 + 3;
        break;
      }
      pbVar2 = pbVar3 + 4;
      pbVar3 = pbVar3 + 4;
      bVar1 = (&DAT_00449bf0)[*pbVar2];
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0xd) {
      *pbVar3 = 10;
      param_1 = pbVar3 + 1;
      if (*param_1 == 10) {
        if (_Src != (byte *)0x0) {
          FID_conflict__memcpy(_Src + -iVar4,_Src,(int)param_1 - (int)_Src);
        }
        _Src = pbVar3 + 2;
        iVar4 = iVar4 + 1;
        param_1 = _Src;
      }
    }
    else {
      if (((bVar1 == 0x5d) && (pbVar3[1] == 0x5d)) &&
         ((pbVar3[2] == 0x3e || ((pbVar3[2] == 0 && (param_2 == '>')))))) {
        pbVar2 = pbVar3;
        if (_Src != (byte *)0x0) {
          FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar3 - (int)_Src);
          pbVar2 = pbVar3 + -iVar4;
        }
        *pbVar2 = 0;
        return pbVar3 + 1;
      }
      if (bVar1 == 0) {
        return (byte *)0x0;
      }
      param_1 = pbVar3 + 1;
    }
  } while( true );
}

