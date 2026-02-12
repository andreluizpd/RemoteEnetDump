
/* WARNING: Removing unreachable block (ram,0x004079cb) */

void __cdecl
FUN_00407780(uint *param_1,uint *param_2,uint param_3,uint param_4,int param_5,int *param_6,
            int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint local_34;
  uint local_30;
  
  uVar4 = param_2[2];
  lVar11 = __allshl(-(char)uVar4,0);
  uVar8 = *param_2;
  uVar10 = param_2[1];
  uVar1 = uVar8 - *param_1;
  uVar2 = (uVar10 - param_1[1]) - (uint)(uVar8 < *param_1);
  bVar5 = -(char)uVar4;
  uVar12 = __aullshr(bVar5,uVar10);
  local_30 = (uint)((ulonglong)lVar11 >> 0x20);
  local_34 = (uint)lVar11;
  uVar6 = (local_30 - 1) + (uint)(local_34 != 0);
  uVar8 = local_34 - 1 & uVar8;
  uVar10 = uVar6 & uVar10;
  iVar3 = FUN_00407710((uint)uVar12);
  *param_6 = 0;
  uVar4 = (uint)uVar12;
  if (iVar3 == 0) {
    param_2 = (uint *)0x0;
  }
  else {
    do {
      iVar3 = iVar3 + -1;
      uVar7 = 0;
      uVar9 = uVar4;
      switch(iVar3) {
      case 0:
        uVar9 = 0;
        break;
      case 1:
        uVar9 = uVar4 % 10;
        uVar4 = uVar4 / 10;
        break;
      case 2:
        uVar9 = uVar4 % 100;
        uVar4 = uVar4 / 100;
        break;
      case 3:
        uVar9 = uVar4 % 1000;
        uVar4 = uVar4 / 1000;
        break;
      case 4:
        uVar9 = uVar4 % 10000;
        uVar4 = uVar4 / 10000;
        break;
      case 5:
        uVar9 = uVar4 % 100000;
        uVar4 = uVar4 / 100000;
        break;
      case 6:
        uVar9 = uVar4 % 1000000;
        uVar4 = uVar4 / 1000000;
        break;
      case 7:
        uVar9 = uVar4 % 10000000;
        uVar4 = uVar4 / 10000000;
        break;
      case 8:
        uVar9 = uVar4 % 100000000;
        uVar4 = uVar4 / 100000000;
        break;
      default:
        goto switchD_004078c4_default;
      }
      uVar7 = uVar4;
      if (uVar4 == 0) {
switchD_004078c4_default:
        uVar4 = uVar7;
        if (*param_6 != 0) goto LAB_00407995;
      }
      else {
LAB_00407995:
        *(char *)(param_5 + *param_6) = (char)uVar4 + '0';
        *param_6 = *param_6 + 1;
      }
      lVar11 = __allshl(bVar5,0);
      uVar12 = lVar11 + CONCAT44(uVar10,uVar8);
      if (uVar12 <= CONCAT44(param_4,param_3)) {
        *param_7 = *param_7 + iVar3;
        lVar11 = __allshl(bVar5,0);
        FUN_00407670(param_5,*param_6,param_3,param_4,(uint)uVar12,(uint)(uVar12 >> 0x20),
                     (uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),uVar1,uVar2);
        return;
      }
      uVar4 = uVar9;
    } while (iVar3 != 0);
    param_2 = (uint *)0x0;
  }
  do {
    uVar10 = ((uVar10 << 2 | uVar8 >> 0x1e) + uVar10 + (uint)CARRY4(uVar8,uVar8 * 4)) * 2 |
             uVar8 * 5 >> 0x1f;
    param_4 = (param_4 + (param_4 << 2 | param_3 >> 0x1e) + (uint)CARRY4(param_3,param_3 * 4)) * 2 |
              param_3 * 5 >> 0x1f;
    param_3 = param_3 * 10;
    uVar12 = __aullshr(bVar5,uVar10);
    if (((char)uVar12 != '\0') || (*param_6 != 0)) {
      *(char *)(param_5 + *param_6) = (char)uVar12 + '0';
      *param_6 = *param_6 + 1;
    }
    uVar10 = uVar10 & uVar6;
    uVar8 = uVar8 * 10 & local_34 - 1;
    param_2 = (uint *)((int)param_2 + -1);
  } while ((param_4 < uVar10) || ((param_4 <= uVar10 && (param_3 <= uVar8))));
  *param_7 = *param_7 + (int)param_2;
  if (-(int)param_2 < 9) {
    uVar4 = *(uint *)(&DAT_00448e38 + (int)param_2 * -4);
  }
  else {
    uVar4 = 0;
  }
  lVar11 = __allmul(uVar4,0,uVar1,uVar2);
  FUN_00407670(param_5,*param_6,param_3,param_4,uVar8,uVar10,local_34,local_30,(uint)lVar11,
               (uint)((ulonglong)lVar11 >> 0x20));
  return;
}

