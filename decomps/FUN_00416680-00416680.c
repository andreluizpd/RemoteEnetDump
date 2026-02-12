
byte * __cdecl FUN_00416680(byte *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *_Src;
  byte *pbVar3;
  int iVar4;
  byte *local_c;
  int local_8;
  
  _Src = (byte *)0x0;
  iVar4 = 0;
  local_c = _Src;
  local_8 = iVar4;
  do {
    bVar2 = (&DAT_00449bf0)[*param_1];
    pbVar3 = param_1;
    while ((bVar2 & 2) == 0) {
      if (((&DAT_00449bf0)[pbVar3[1]] & 2) != 0) {
        pbVar3 = pbVar3 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[2]] & 2) != 0) {
        pbVar3 = pbVar3 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[3]] & 2) != 0) {
        pbVar3 = pbVar3 + 3;
        break;
      }
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar1];
    }
    bVar2 = *pbVar3;
    if (bVar2 == param_2) {
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
        local_c = _Src;
        local_8 = iVar4;
      }
    }
    else if (bVar2 == 0x26) {
      param_1 = FUN_00414d40(pbVar3,&local_c);
      _Src = local_c;
      iVar4 = local_8;
    }
    else {
      if (bVar2 == 0) {
        return (byte *)0x0;
      }
      param_1 = pbVar3 + 1;
    }
  } while( true );
}

