
byte * __cdecl FUN_00415c70(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  pbVar4 = param_1;
  do {
    iVar3 = local_8;
    bVar2 = (&DAT_00449bf0)[*pbVar4];
    while ((bVar2 & 1) == 0) {
      if (((&DAT_00449bf0)[pbVar4[1]] & 1) != 0) {
        pbVar4 = pbVar4 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar4[2]] & 1) != 0) {
        pbVar4 = pbVar4 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar4[3]] & 1) != 0) {
        pbVar4 = pbVar4 + 3;
        break;
      }
      pbVar1 = pbVar4 + 4;
      pbVar4 = pbVar4 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar1];
    }
    bVar2 = *pbVar4;
    if (bVar2 == 0x3c) {
      pbVar1 = pbVar4;
      if (local_c != (void *)0x0) {
        FID_conflict__memcpy((void *)((int)local_c - local_8),local_c,(int)pbVar4 - (int)local_c);
        pbVar1 = pbVar4 + -iVar3;
      }
      while ((param_1 < pbVar1 && (((&DAT_00449bf0)[pbVar1[-1]] & 8) != 0))) {
        pbVar1 = pbVar1 + -1;
      }
      *pbVar1 = 0;
      return pbVar4 + 1;
    }
    if (bVar2 == 0x26) {
      pbVar4 = FUN_00414d40(pbVar4,&local_c);
    }
    else {
      if (bVar2 == 0) {
        pbVar1 = pbVar4;
        if (local_c != (void *)0x0) {
          FID_conflict__memcpy((void *)((int)local_c - local_8),local_c,(int)pbVar4 - (int)local_c);
          pbVar1 = pbVar4 + -iVar3;
        }
        while ((param_1 < pbVar1 && (((&DAT_00449bf0)[pbVar1[-1]] & 8) != 0))) {
          pbVar1 = pbVar1 + -1;
        }
        *pbVar1 = 0;
        return pbVar4;
      }
      pbVar4 = pbVar4 + 1;
    }
  } while( true );
}

