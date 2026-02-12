
byte * __thiscall FUN_00417730(void *this,byte *param_1,uint *param_2,uint param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint extraout_EDX;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *local_10;
  int *local_c;
  code *local_8;
  
  switch(param_3 >> 4 & 0xf) {
  case 0:
    local_8 = FUN_00416360;
    break;
  case 1:
    local_8 = FUN_00416790;
    break;
  case 2:
    local_8 = FUN_00416280;
    break;
  case 3:
    local_8 = FUN_00416680;
    break;
  case 4:
  case 6:
    local_8 = FUN_004161a0;
    break;
  case 5:
  case 7:
    local_8 = FUN_00416560;
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    local_8 = FUN_00416050;
    break;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    local_8 = FUN_004163e0;
    break;
  default:
    local_8 = (code *)0x0;
  }
  local_c = (int *)this;
  pcVar3 = (code *)FUN_00417120(param_3);
  bVar2 = *param_1;
  local_10 = param_2;
  uVar6 = extraout_EDX;
  puVar8 = param_2;
  if (bVar2 == 0) {
    return param_1;
  }
LAB_004177c3:
  if (bVar2 == 0x3c) {
    pbVar9 = param_1 + 1;
  }
  else {
    bVar2 = (&DAT_00449bf0)[bVar2];
    pbVar9 = param_1;
    while ((bVar2 & 8) != 0) {
      pbVar10 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar2 = (&DAT_00449bf0)[*pbVar10];
    }
    bVar2 = *pbVar9;
    if (((bVar2 == 0x3c) || (bVar2 == 0)) &&
       ((((uVar6 & 0x408) == 0 || ((param_3 & 0x800) != 0)) ||
        ((uVar6 = param_3, (param_3 & 0x400) != 0 &&
         (((bVar2 != 0x3c || (pbVar9[1] != 0x2f)) || (puVar8[4] != 0)))))))) goto LAB_00417c1b;
    if ((uVar6 & 0x800) == 0) {
      pbVar9 = param_1;
    }
    if ((puVar8[1] == 0) && ((uVar6 & 0x1000) == 0)) {
      bVar2 = *pbVar9;
      if (bVar2 != 0) {
        while (bVar2 != 0x3c) {
          bVar2 = pbVar9[1];
          pbVar9 = pbVar9 + 1;
          if (bVar2 == 0) goto LAB_00417862;
        }
        if (*pbVar9 != 0) {
          pbVar9 = pbVar9 + 1;
          goto LAB_004178b1;
        }
      }
      goto LAB_00417862;
    }
    iVar4 = FUN_00416f60((uint)puVar8,local_c,3);
    if (iVar4 == 0) {
LAB_00417c96:
      local_c[2] = (int)pbVar9;
      local_c[3] = 3;
      return (byte *)0x0;
    }
    *(byte **)(iVar4 + 0xc) = pbVar9;
    pbVar9 = (byte *)(*pcVar3)(pbVar9);
    puVar8 = *(uint **)(iVar4 + 4);
    this = local_c;
    local_10 = puVar8;
    if (*pbVar9 == 0) goto LAB_00417862;
  }
LAB_004178b1:
  bVar2 = *pbVar9;
  if (((&DAT_00449bf0)[bVar2] & 0x80) == 0) {
    if (bVar2 == 0x2f) {
      pbVar10 = (byte *)puVar8[2];
      pbVar9 = pbVar9 + 1;
      if (pbVar10 == (byte *)0x0) goto LAB_00417c42;
      bVar2 = *pbVar9;
      bVar1 = (&DAT_00449bf0)[bVar2];
      while ((bVar1 & 0x40) != 0) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar9 = pbVar9 + 1;
        if (bVar2 != bVar1) {
          local_c[2] = (int)pbVar9;
          local_c[3] = 0xe;
          return (byte *)0x0;
        }
        bVar2 = *pbVar9;
        this = local_c;
        bVar1 = (&DAT_00449bf0)[bVar2];
      }
      if (*pbVar10 != 0) {
        if (((*pbVar9 == 0) && (*pbVar10 == param_4)) && (pbVar10[1] == 0)) {
LAB_00417c81:
          *(byte **)((int)this + 8) = pbVar9;
          *(int *)((int)this + 0xc) = 0xd;
          return (byte *)0x0;
        }
        goto LAB_00417c42;
      }
      puVar8 = (uint *)puVar8[1];
      bVar2 = (&DAT_00449bf0)[*pbVar9];
      while ((bVar2 & 8) != 0) {
        pbVar10 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar2 = (&DAT_00449bf0)[*pbVar10];
      }
      local_10 = puVar8;
      if (*pbVar9 == 0) {
        if (param_4 != 0x3e) goto LAB_00417c81;
      }
      else {
        if (*pbVar9 != 0x3e) goto LAB_00417c81;
        pbVar9 = pbVar9 + 1;
      }
    }
    else if (bVar2 == 0x3f) {
      pbVar9 = FUN_00417520(this,(int)pbVar9,(uint *)&local_10,param_3,param_4);
      if (pbVar9 == (byte *)0x0) {
        return (byte *)0x0;
      }
      puVar8 = local_10;
      puVar7 = local_10;
      if ((*local_10 & 7) == 6) goto LAB_00417a70;
    }
    else {
      if (bVar2 != 0x21) {
        if ((*pbVar9 == 0) && (param_4 == 0x3f)) {
          *(byte **)((int)this + 8) = pbVar9;
          *(int *)((int)this + 0xc) = 6;
          return (byte *)0x0;
        }
        *(byte **)((int)this + 8) = pbVar9;
        *(int *)((int)this + 0xc) = 5;
        return (byte *)0x0;
      }
      pbVar9 = FUN_004171a0(this,(int)pbVar9,(uint)puVar8,param_3,param_4);
      if (pbVar9 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  }
  else {
    local_10 = (uint *)FUN_00416f60((uint)puVar8,(int *)this,2);
    if (local_10 == (uint *)0x0) {
      *(byte **)((int)this + 8) = pbVar9;
      *(int *)((int)this + 0xc) = 3;
      return (byte *)0x0;
    }
    local_10[2] = (uint)pbVar9;
    bVar2 = (&DAT_00449bf0)[*pbVar9];
    pbVar10 = pbVar9;
    while ((bVar2 & 0x40) != 0) {
      if (((&DAT_00449bf0)[pbVar10[1]] & 0x40) == 0) {
        pbVar10 = pbVar10 + 1;
        break;
      }
      if (((&DAT_00449bf0)[pbVar10[2]] & 0x40) == 0) {
        pbVar10 = pbVar10 + 2;
        break;
      }
      if (((&DAT_00449bf0)[pbVar10[3]] & 0x40) == 0) {
        pbVar10 = pbVar10 + 3;
        break;
      }
      pbVar9 = pbVar10 + 4;
      pbVar10 = pbVar10 + 4;
      bVar2 = (&DAT_00449bf0)[*pbVar9];
    }
    bVar2 = *pbVar10;
    *pbVar10 = 0;
    pbVar9 = pbVar10 + 1;
    puVar8 = local_10;
    if (bVar2 != 0x3e) {
      puVar7 = local_10;
      if (((&DAT_00449bf0)[bVar2] & 8) == 0) {
        pbVar11 = pbVar9;
        if (bVar2 == 0x2f) {
          bVar2 = *pbVar9;
          if ((bVar2 != 0x3e) && ((pbVar10 = pbVar9, bVar2 != 0 || (param_4 != 0x3e))))
          goto LAB_00417989;
          pbVar9 = pbVar9 + (bVar2 == 0x3e);
          puVar8 = (uint *)local_10[1];
          local_10 = (uint *)local_10[1];
        }
        else {
joined_r0x00417bea:
          pbVar9 = pbVar10;
          pbVar10 = pbVar11;
          if ((bVar2 != 0) || (puVar8 = puVar7, pbVar10 = pbVar9, param_4 != 0x3e)) {
LAB_00417989:
            *(byte **)((int)this + 8) = pbVar10;
            *(int *)((int)this + 0xc) = 0xb;
            return (byte *)0x0;
          }
        }
      }
      else {
LAB_00417a70:
        while( true ) {
          bVar2 = (&DAT_00449bf0)[*pbVar9];
          pbVar11 = pbVar9;
          while ((bVar2 & 8) != 0) {
            pbVar9 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
            bVar2 = (&DAT_00449bf0)[*pbVar9];
          }
          if (((&DAT_00449bf0)[*pbVar11] & 0x80) == 0) break;
          piVar5 = FUN_00416fa0((int)puVar7,local_c);
          pbVar9 = pbVar11;
          if (piVar5 == (int *)0x0) goto LAB_00417c96;
          piVar5[1] = (int)pbVar11;
          bVar2 = (&DAT_00449bf0)[*pbVar11];
          while ((bVar2 & 0x40) != 0) {
            if (((&DAT_00449bf0)[pbVar11[1]] & 0x40) == 0) {
              pbVar11 = pbVar11 + 1;
              break;
            }
            if (((&DAT_00449bf0)[pbVar11[2]] & 0x40) == 0) {
              pbVar11 = pbVar11 + 2;
              break;
            }
            if (((&DAT_00449bf0)[pbVar11[3]] & 0x40) == 0) {
              pbVar11 = pbVar11 + 3;
              break;
            }
            pbVar9 = pbVar11 + 4;
            pbVar11 = pbVar11 + 4;
            bVar2 = (&DAT_00449bf0)[*pbVar9];
          }
          bVar2 = *pbVar11;
          *pbVar11 = 0;
          pbVar9 = pbVar11 + 1;
          if (((&DAT_00449bf0)[bVar2] & 8) != 0) {
            bVar2 = (&DAT_00449bf0)[*pbVar9];
            while ((bVar2 & 8) != 0) {
              pbVar10 = pbVar9 + 1;
              pbVar9 = pbVar9 + 1;
              bVar2 = (&DAT_00449bf0)[*pbVar10];
            }
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          }
          if (bVar2 != 0x3d) goto LAB_00417cc9;
          bVar2 = (&DAT_00449bf0)[*pbVar9];
          while ((bVar2 & 8) != 0) {
            pbVar10 = pbVar9 + 1;
            pbVar9 = pbVar9 + 1;
            bVar2 = (&DAT_00449bf0)[*pbVar10];
          }
          bVar2 = *pbVar9;
          if ((bVar2 != 0x22) && (bVar2 != 0x27)) goto LAB_00417cc9;
          param_1 = (byte *)(uint)bVar2;
          piVar5[2] = (int)(pbVar9 + 1);
          pbVar9 = (byte *)(*local_8)(pbVar9 + 1,param_1);
          if (pbVar9 == (byte *)0x0) {
            local_c[2] = piVar5[2];
            local_c[3] = 0xc;
            return (byte *)0x0;
          }
          this = local_c;
          if (((&DAT_00449bf0)[*pbVar9] & 0x80) != 0) {
LAB_00417cc9:
            local_c[2] = (int)pbVar9;
            local_c[3] = 0xc;
            return (byte *)0x0;
          }
        }
        bVar2 = *pbVar11;
        if (bVar2 == 0x2f) {
          pbVar9 = pbVar11 + 1;
          if (pbVar11[1] == 0x3e) {
            pbVar9 = pbVar11 + 2;
            puVar8 = (uint *)puVar7[1];
            local_10 = (uint *)puVar7[1];
          }
          else {
            pbVar10 = pbVar9;
            if ((pbVar11[1] != 0) || (param_4 != 0x3e)) goto LAB_00417989;
            puVar8 = (uint *)puVar7[1];
            local_10 = (uint *)puVar7[1];
          }
        }
        else {
          pbVar10 = pbVar11;
          if (bVar2 != 0x3e) goto joined_r0x00417bea;
          pbVar9 = pbVar11 + 1;
          puVar8 = puVar7;
        }
      }
    }
  }
LAB_00417c1b:
  bVar2 = *pbVar9;
  uVar6 = param_3;
  param_1 = pbVar9;
  if (bVar2 == 0) {
LAB_00417862:
    if (puVar8 == param_2) {
      return pbVar9;
    }
LAB_00417c42:
    *(byte **)((int)this + 8) = pbVar9;
    *(int *)((int)this + 0xc) = 0xe;
    return (byte *)0x0;
  }
  goto LAB_004177c3;
}

