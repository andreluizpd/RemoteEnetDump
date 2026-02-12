
byte * __cdecl FUN_00415970(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *_Src;
  byte *pbVar3;
  int iVar4;
  
  _Src = (byte *)0x0;
  iVar4 = 0;
  do {
    bVar2 = (&DAT_00449bf0)[*param_1];
    pbVar3 = param_1;
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
    bVar2 = *pbVar3;
    if (bVar2 == 0x3c) {
      if (_Src != (byte *)0x0) {
        FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar3 - (int)_Src);
        pbVar3[-iVar4] = 0;
        return pbVar3 + 1;
      }
      *pbVar3 = 0;
      return pbVar3 + 1;
    }
    if (bVar2 == 0xd) {
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
      if (bVar2 == 0) {
        if (_Src != (byte *)0x0) {
          FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar3 - (int)_Src);
          pbVar3[-iVar4] = 0;
          return pbVar3;
        }
        *pbVar3 = 0;
        return pbVar3;
      }
      param_1 = pbVar3 + 1;
    }
  } while( true );
}

