
byte * __cdecl FUN_00416790(byte *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  do {
    iVar3 = local_8;
    bVar2 = (&DAT_00449bf0)[*param_1];
    while ((bVar2 & 2) == 0) {
      if (((&DAT_00449bf0)[param_1[1]] & 2) != 0) {
        param_1 = param_1 + 1;
        break;
      }
      if (((&DAT_00449bf0)[param_1[2]] & 2) != 0) {
        param_1 = param_1 + 2;
        break;
      }
      if (((&DAT_00449bf0)[param_1[3]] & 2) != 0) {
        param_1 = param_1 + 3;
        break;
      }
      pbVar1 = param_1 + 4;
      param_1 = param_1 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar1];
    }
    bVar2 = *param_1;
    if (bVar2 == param_2) {
      if (local_c != (void *)0x0) {
        FID_conflict__memcpy((void *)((int)local_c - local_8),local_c,(int)param_1 - (int)local_c);
        param_1[-iVar3] = 0;
        return param_1 + 1;
      }
      *param_1 = 0;
      return param_1 + 1;
    }
    if (bVar2 == 0x26) {
      param_1 = FUN_00414d40(param_1,&local_c);
    }
    else {
      if (bVar2 == 0) {
        return (byte *)0x0;
      }
      param_1 = param_1 + 1;
    }
  } while( true );
}

