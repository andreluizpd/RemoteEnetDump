
byte * __thiscall FUN_004171a0(void *this,int param_1,uint param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  cVar2 = *(char *)(param_1 + 1);
  pbVar6 = (byte *)(param_1 + 1);
  if (cVar2 != '-') {
    if (cVar2 == '[') {
      pbVar6 = (byte *)(param_1 + 2);
      if (((((*pbVar6 == 0x43) && (pbVar6 = (byte *)(param_1 + 3), *pbVar6 == 0x44)) &&
           (pbVar6 = (byte *)(param_1 + 4), *pbVar6 == 0x41)) &&
          ((pbVar6 = (byte *)(param_1 + 5), *pbVar6 == 0x54 &&
           (pbVar6 = (byte *)(param_1 + 6), *pbVar6 == 0x41)))) &&
         (pbVar6 = (byte *)(param_1 + 7), *pbVar6 == 0x5b)) {
        pbVar6 = (byte *)(param_1 + 8);
        if ((param_3 & 4) == 0) {
          bVar3 = *pbVar6;
          while (bVar3 != 0) {
            if (((bVar3 == 0x5d) && (pbVar6[1] == 0x5d)) &&
               ((pbVar6[2] == 0x3e || ((pbVar6[2] == 0 && (param_4 == '>')))))) {
              if (*pbVar6 != 0) {
                pbVar6 = pbVar6 + 1;
                goto LAB_004173eb;
              }
              break;
            }
            pbVar7 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar3 = *pbVar7;
          }
        }
        else {
          iVar4 = FUN_00416f60(param_2,(int *)this,4);
          if (iVar4 == 0) {
            *(byte **)((int)this + 8) = pbVar6;
            *(undefined4 *)((int)this + 0xc) = 3;
            return (byte *)0x0;
          }
          *(byte **)(iVar4 + 0xc) = pbVar6;
          if ((param_3 & 0x20) != 0) {
            pbVar6 = FUN_00415030(pbVar6,param_4);
            if (pbVar6 == (byte *)0x0) {
              *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar4 + 0xc);
              *(undefined4 *)((int)this + 0xc) = 8;
              return (byte *)0x0;
            }
LAB_004173eb:
            return pbVar6 + (pbVar6[1] == 0x3e) + 1;
          }
          if (*pbVar6 != 0) {
            do {
              if (((*pbVar6 == 0x5d) && (pbVar6[1] == 0x5d)) &&
                 ((pbVar6[2] == 0x3e || ((pbVar6[2] == 0 && (param_4 == '>')))))) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 != 0);
            if (*pbVar6 != 0) {
              *pbVar6 = 0;
              return pbVar6 + (pbVar6[2] == 0x3e) + 2;
            }
          }
        }
        *(byte **)((int)this + 8) = pbVar6;
        *(undefined4 *)((int)this + 0xc) = 8;
        return (byte *)0x0;
      }
LAB_00417402:
      *(byte **)((int)this + 8) = pbVar6;
      *(undefined4 *)((int)this + 0xc) = 8;
      return (byte *)0x0;
    }
    if (((((cVar2 == 'D') && (*(char *)(param_1 + 2) == 'O')) && (*(char *)(param_1 + 3) == 'C')) &&
        ((*(char *)(param_1 + 4) == 'T' && (*(char *)(param_1 + 5) == 'Y')))) &&
       ((*(char *)(param_1 + 6) == 'P' &&
        ((*(char *)(param_1 + 7) == 'E' || ((*(char *)(param_1 + 7) == '\0' && (param_4 == 'E'))))))
       )) {
      if (*(int *)(param_2 + 4) != 0) {
        *(int *)((int)this + 8) = param_1 + -1;
        *(undefined4 *)((int)this + 0xc) = 9;
        return (byte *)0x0;
      }
      pbVar7 = (byte *)(param_1 + 8);
      pbVar6 = (byte *)FUN_00415280(this,param_1 + -1,param_4);
      if (pbVar6 != (byte *)0x0) {
        if (*pbVar6 != 0) {
          *pbVar6 = 0;
          pbVar6 = pbVar6 + 1;
        }
        if ((param_3 & 0x200) == 0) {
          return pbVar6;
        }
        bVar3 = (&DAT_00449bf0)[*pbVar7];
        while ((bVar3 & 8) != 0) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar3 = (&DAT_00449bf0)[*pbVar1];
        }
        iVar4 = FUN_00416f60(param_2,(int *)this,8);
        if (iVar4 != 0) {
          *(byte **)(iVar4 + 0xc) = pbVar7;
          return pbVar6;
        }
LAB_004171e5:
        *(byte **)((int)this + 8) = pbVar6;
        *(undefined4 *)((int)this + 0xc) = 3;
        return (byte *)0x0;
      }
    }
    else {
      if (cVar2 == '\0') {
        if (param_4 == '-') goto LAB_0041726a;
        if (param_4 == '[') goto LAB_00417402;
      }
      *(undefined4 *)((int)this + 0xc) = 5;
      *(byte **)((int)this + 8) = pbVar6;
    }
    return (byte *)0x0;
  }
  pbVar6 = (byte *)(param_1 + 2);
  if (*pbVar6 == 0x2d) {
    pbVar6 = (byte *)(param_1 + 3);
    uVar5 = param_3 & 2;
    if (uVar5 != 0) {
      param_2 = FUN_00416f60(param_2,(int *)this,5);
      if (param_2 == 0) goto LAB_004171e5;
      *(byte **)(param_2 + 0xc) = pbVar6;
    }
    if (((param_3 & 0x20) != 0) && (uVar5 != 0)) {
      pbVar6 = FUN_00414f40(pbVar6,param_4);
      if (pbVar6 != (byte *)0x0) {
        return pbVar6;
      }
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)((int)this + 0xc) = 7;
      return (byte *)0x0;
    }
    if (*pbVar6 != 0) {
      do {
        if (((*pbVar6 == 0x2d) && (pbVar6[1] == 0x2d)) &&
           ((pbVar6[2] == 0x3e || ((pbVar6[2] == 0 && (param_4 == '>')))))) break;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 != 0);
      if (*pbVar6 != 0) {
        if (uVar5 != 0) {
          *pbVar6 = 0;
        }
        return pbVar6 + (pbVar6[2] == 0x3e) + 2;
      }
    }
  }
LAB_0041726a:
  *(byte **)((int)this + 8) = pbVar6;
  *(undefined4 *)((int)this + 0xc) = 7;
  return (byte *)0x0;
}

