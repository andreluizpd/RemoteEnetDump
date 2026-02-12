
byte * __cdecl FUN_004163e0(byte *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *local_c;
  int local_8;
  
  local_c = (byte *)0x0;
  local_8 = 0;
  pbVar3 = param_1;
  pbVar5 = local_c;
  if (((&DAT_00449bf0)[*param_1] & 8) != 0) {
    do {
      pbVar5 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
    } while (((&DAT_00449bf0)[*pbVar5] & 8) != 0);
    local_8 = (int)pbVar3 - (int)param_1;
    pbVar5 = param_1 + local_8;
    param_1 = pbVar5;
    local_c = pbVar5;
  }
  do {
    iVar2 = local_8;
    bVar1 = (&DAT_00449bf0)[*param_1];
    pbVar3 = param_1;
    while ((bVar1 & 0xc) == 0) {
      if (((&DAT_00449bf0)[pbVar3[1]] & 0xc) != 0) {
        pbVar3 = pbVar3 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[2]] & 0xc) != 0) {
        pbVar3 = pbVar3 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar3[3]] & 0xc) != 0) {
        pbVar3 = pbVar3 + 3;
        break;
      }
      pbVar4 = pbVar3 + 4;
      pbVar3 = pbVar3 + 4;
      bVar1 = (&DAT_00449bf0)[*pbVar4];
    }
    bVar1 = *pbVar3;
    if (bVar1 == param_2) {
      pbVar4 = pbVar3;
      if (pbVar5 != (byte *)0x0) {
        FID_conflict__memcpy(pbVar5 + -local_8,pbVar5,(int)pbVar3 - (int)pbVar5);
        pbVar4 = pbVar3 + -iVar2;
      }
      do {
        *pbVar4 = 0;
        pbVar5 = pbVar4 + -1;
        pbVar4 = pbVar4 + -1;
      } while (((&DAT_00449bf0)[*pbVar5] & 8) != 0);
      return pbVar3 + 1;
    }
    if (((&DAT_00449bf0)[bVar1] & 8) == 0) {
      if (bVar1 == 0x26) {
        param_1 = FUN_00414d40(pbVar3,&local_c);
        pbVar5 = local_c;
      }
      else {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        param_1 = pbVar3 + 1;
      }
    }
    else {
      *pbVar3 = 0x20;
      param_1 = pbVar3 + 1;
      if (((&DAT_00449bf0)[pbVar3[1]] & 8) != 0) {
        pbVar4 = pbVar3 + 2;
        bVar1 = (&DAT_00449bf0)[pbVar3[2]];
        while ((bVar1 & 8) != 0) {
          pbVar3 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = (&DAT_00449bf0)[*pbVar3];
        }
        if (pbVar5 != (byte *)0x0) {
          FID_conflict__memcpy(pbVar5 + -local_8,pbVar5,(int)param_1 - (int)pbVar5);
        }
        pbVar5 = param_1 + ((int)pbVar4 - (int)param_1);
        local_8 = local_8 + ((int)pbVar4 - (int)param_1);
        param_1 = pbVar5;
        local_c = pbVar5;
      }
    }
  } while( true );
}

