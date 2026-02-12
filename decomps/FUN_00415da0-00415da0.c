
byte * __cdecl FUN_00415da0(byte *param_1)

{
  byte bVar1;
  byte *_Src;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  _Src = (byte *)0x0;
  iVar4 = 0;
  pbVar3 = param_1;
  do {
    bVar1 = (&DAT_00449bf0)[*pbVar3];
    pbVar2 = pbVar3;
    while ((bVar1 & 1) == 0) {
      if (((&DAT_00449bf0)[pbVar2[1]] & 1) != 0) {
        pbVar2 = pbVar2 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar2[2]] & 1) != 0) {
        pbVar2 = pbVar2 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar2[3]] & 1) != 0) {
        pbVar2 = pbVar2 + 3;
        break;
      }
      pbVar3 = pbVar2 + 4;
      pbVar2 = pbVar2 + 4;
      bVar1 = (&DAT_00449bf0)[*pbVar3];
    }
    bVar1 = *pbVar2;
    if (bVar1 == 0x3c) {
      pbVar3 = pbVar2;
      if (_Src != (byte *)0x0) {
        FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar2 - (int)_Src);
        pbVar3 = pbVar2 + -iVar4;
      }
      while ((param_1 < pbVar3 && (((&DAT_00449bf0)[pbVar3[-1]] & 8) != 0))) {
        pbVar3 = pbVar3 + -1;
      }
      *pbVar3 = 0;
      return pbVar2 + 1;
    }
    if (bVar1 == 0xd) {
      *pbVar2 = 10;
      pbVar3 = pbVar2 + 1;
      if (*pbVar3 == 10) {
        if (_Src != (byte *)0x0) {
          FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar3 - (int)_Src);
        }
        _Src = pbVar2 + 2;
        iVar4 = iVar4 + 1;
        pbVar3 = _Src;
      }
    }
    else {
      if (bVar1 == 0) {
        pbVar3 = pbVar2;
        if (_Src != (byte *)0x0) {
          FID_conflict__memcpy(_Src + -iVar4,_Src,(int)pbVar2 - (int)_Src);
          pbVar3 = pbVar2 + -iVar4;
        }
        while ((param_1 < pbVar3 && (((&DAT_00449bf0)[pbVar3[-1]] & 8) != 0))) {
          pbVar3 = pbVar3 + -1;
        }
        *pbVar3 = 0;
        return pbVar2;
      }
      pbVar3 = pbVar2 + 1;
    }
  } while( true );
}

