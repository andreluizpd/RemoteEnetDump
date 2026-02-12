
byte * __cdecl FUN_00414d40(byte *param_1,void *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar1 = param_1 + 1;
  pbVar5 = pbVar1;
  switch(*pbVar1) {
  case 0x23:
    uVar3 = 0;
    if (param_1[2] == 0x78) {
      bVar4 = param_1[3];
      pbVar5 = param_1 + 3;
      if (bVar4 == 0x3b) {
        return pbVar5;
      }
      while( true ) {
        while (uVar2 = (uint)(char)bVar4, uVar2 - 0x30 < 10) {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          uVar3 = (uVar2 - 0x30) + uVar3 * 0x10;
          bVar4 = *pbVar1;
        }
        if (5 < (uVar2 | 0x20) - 0x61) break;
        bVar4 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        uVar3 = ((uVar2 | 0x20) - 0x57) + uVar3 * 0x10;
      }
    }
    else {
      bVar4 = param_1[2];
      pbVar5 = param_1 + 2;
      if (bVar4 == 0x3b) {
        return pbVar5;
      }
      while ((int)(char)bVar4 - 0x30U < 10) {
        pbVar5 = pbVar5 + 1;
        uVar3 = (char)bVar4 + -0x30 + uVar3 * 10;
        bVar4 = *pbVar5;
      }
    }
    if (bVar4 == 0x3b) {
      param_1 = FUN_00414b80(param_1,uVar3);
      FUN_00414d00(param_2,(int *)&param_1,(int)(pbVar5 + 1) - (int)param_1);
      return pbVar5 + 1;
    }
    break;
  case 0x61:
    pbVar5 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      pbVar5 = param_1 + 3;
      if ((*pbVar5 == 0x70) && (pbVar5 = param_1 + 4, *pbVar5 == 0x3b)) {
        *param_1 = 0x26;
        goto LAB_00414e28;
      }
    }
    else if ((((param_1[2] == 0x70) && (pbVar5 = param_1 + 3, *pbVar5 == 0x6f)) &&
             (pbVar5 = param_1 + 4, *pbVar5 == 0x73)) && (pbVar5 = param_1 + 5, *pbVar5 == 0x3b)) {
      *param_1 = 0x27;
      goto LAB_00414e28;
    }
    break;
  case 0x67:
    pbVar5 = param_1 + 2;
    if ((*pbVar5 == 0x74) && (pbVar5 = param_1 + 3, *pbVar5 == 0x3b)) {
      *param_1 = 0x3e;
LAB_00414e28:
      param_1 = pbVar1;
      FUN_00414d00(param_2,(int *)&param_1,(int)(pbVar5 + (1 - (int)pbVar1)));
      return pbVar5 + 1;
    }
    break;
  case 0x6c:
    pbVar5 = param_1 + 2;
    if ((*pbVar5 == 0x74) && (pbVar5 = param_1 + 3, *pbVar5 == 0x3b)) {
      *param_1 = 0x3c;
      goto LAB_00414e28;
    }
    break;
  case 0x71:
    pbVar5 = param_1 + 2;
    if ((((*pbVar5 == 0x75) && (pbVar5 = param_1 + 3, *pbVar5 == 0x6f)) &&
        (pbVar5 = param_1 + 4, *pbVar5 == 0x74)) && (pbVar5 = param_1 + 5, *pbVar5 == 0x3b)) {
      *param_1 = 0x22;
      goto LAB_00414e28;
    }
  }
  return pbVar5;
}

