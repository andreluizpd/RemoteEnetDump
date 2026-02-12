
byte * __thiscall FUN_00417520(void *this,int param_1,uint *param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  uVar3 = *param_2;
  pbVar6 = (byte *)(param_1 + 1);
  pbVar7 = pbVar6;
  if (((&DAT_00449bf0)[*pbVar6] & 0x80) != 0) {
    bVar4 = (&DAT_00449bf0)[*pbVar6];
    while ((bVar4 & 0x40) != 0) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar4 = (&DAT_00449bf0)[*pbVar1];
    }
    if (*pbVar7 != 0) {
      if (((((*pbVar6 | 0x20) == 0x78) && ((*(byte *)(param_1 + 2) | 0x20) == 0x6d)) &&
          ((*(byte *)(param_1 + 3) | 0x20) == 0x6c)) && ((byte *)(param_1 + 4) == pbVar7)) {
        bVar2 = true;
        uVar5 = param_3 & 0x100;
      }
      else {
        bVar2 = false;
        uVar5 = param_3 & 1;
      }
      if (uVar5 == 0) {
        bVar4 = *pbVar7;
        if (bVar4 != 0) {
          while ((bVar4 != 0x3f || ((pbVar7[1] != 0x3e && ((pbVar7[1] != 0 || (param_4 != '>')))))))
          {
            bVar4 = pbVar7[1];
            pbVar7 = pbVar7 + 1;
            if (bVar4 == 0) {
              *(byte **)((int)this + 8) = pbVar7;
              *(undefined4 *)((int)this + 0xc) = 6;
              return (byte *)0x0;
            }
          }
          if (*pbVar7 != 0) {
            bVar4 = pbVar7[1];
            *param_2 = uVar3;
            return pbVar7 + (bVar4 == 0x3e) + 1;
          }
        }
      }
      else {
        if (bVar2) {
          if (*(int *)(uVar3 + 4) != 0) goto LAB_0041753f;
          iVar8 = 7;
        }
        else {
          iVar8 = 6;
        }
        uVar3 = FUN_00416f60(uVar3,(int *)this,iVar8);
        if (uVar3 == 0) {
          *(byte **)((int)this + 8) = pbVar7;
          *(undefined4 *)((int)this + 0xc) = 3;
          return (byte *)0x0;
        }
        *(byte **)(uVar3 + 8) = pbVar6;
        bVar4 = *pbVar7;
        *pbVar7 = 0;
        pbVar6 = pbVar7 + 1;
        pbVar7 = pbVar6;
        if (bVar4 == 0x3f) {
          bVar4 = *pbVar6;
          if ((bVar4 == 0x3e) || ((bVar4 == 0 && (param_4 == '>')))) {
            *param_2 = *(uint *)(uVar3 + 4);
            return pbVar6 + (bVar4 == 0x3e);
          }
        }
        else if (((&DAT_00449bf0)[bVar4] & 8) != 0) {
          bVar4 = (&DAT_00449bf0)[*pbVar6];
          while ((bVar4 & 8) != 0) {
            pbVar7 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar4 = (&DAT_00449bf0)[*pbVar7];
          }
          pbVar7 = pbVar6;
          if (*pbVar6 != 0) {
            do {
              if ((*pbVar7 == 0x3f) &&
                 ((pbVar7[1] == 0x3e || ((pbVar7[1] == 0 && (param_4 == '>')))))) break;
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 != 0);
            if (*pbVar7 != 0) {
              if (!bVar2) {
                *(byte **)(uVar3 + 0xc) = pbVar6;
                uVar3 = *(uint *)(uVar3 + 4);
                *pbVar7 = 0;
                bVar4 = pbVar7[1];
                *param_2 = uVar3;
                return pbVar7 + 1 + (bVar4 == 0x3e);
              }
              *pbVar7 = 0x2f;
              *param_2 = uVar3;
              return pbVar6;
            }
          }
        }
      }
    }
  }
LAB_0041753f:
  *(byte **)((int)this + 8) = pbVar7;
  *(undefined4 *)((int)this + 0xc) = 6;
  return (byte *)0x0;
}

