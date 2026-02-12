
void __thiscall
FUN_0040f050(void *this,uint *param_1,uint *param_2,char *param_3,byte *param_4,char *param_5,
            char *param_6)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int *piVar9;
  byte *pbVar10;
  byte bVar11;
  uint *puVar12;
  bool bVar13;
  uint local_368 [3];
  undefined4 local_35c [2];
  int local_354;
  int local_350;
  char *local_34c;
  char *local_348;
  uint *local_344;
  byte local_33d;
  int local_33c;
  int *local_338;
  int local_334 [50];
  int local_26c [3];
  uchar *local_260 [71];
  undefined4 local_144 [3];
  byte *local_138;
  undefined4 local_f8 [3];
  byte *local_ec;
  int local_ac [3];
  byte *local_a0;
  int local_60 [3];
  byte *local_54;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004451ff;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_344 = param_1;
  local_34c = param_5;
  local_348 = param_6;
  local_354 = 0;
  local_338 = (int *)this;
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) goto LAB_0040f4e8;
  if (param_4 != (byte *)0x0) {
    pbVar10 = &DAT_004494f8;
    pbVar4 = param_4;
    do {
      bVar11 = *pbVar4;
      bVar13 = bVar11 < *pbVar10;
      if (bVar11 != *pbVar10) {
LAB_0040f0f2:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_0040f0f7;
      }
      if (bVar11 == 0) break;
      bVar11 = pbVar4[1];
      bVar13 = bVar11 < pbVar10[1];
      if (bVar11 != pbVar10[1]) goto LAB_0040f0f2;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar11 != 0);
    iVar5 = 0;
LAB_0040f0f7:
    if (iVar5 == 0) {
      FUN_0040eae0(this,param_1,param_2,param_3);
      goto LAB_0040f4e8;
    }
    pbVar10 = &DAT_004494f0;
    pbVar4 = param_4;
    do {
      bVar11 = *pbVar4;
      bVar13 = bVar11 < *pbVar10;
      if (bVar11 != *pbVar10) {
LAB_0040f140:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_0040f145;
      }
      if (bVar11 == 0) break;
      bVar11 = pbVar4[1];
      bVar13 = bVar11 < pbVar10[1];
      if (bVar11 != pbVar10[1]) goto LAB_0040f140;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar11 != 0);
    iVar5 = 0;
LAB_0040f145:
    if (iVar5 == 0) {
      FUN_0040ed80(this,param_1,param_2,param_3);
      goto LAB_0040f4e8;
    }
  }
  FUN_0040c360(local_ac);
  local_8 = 0;
  FUN_0040c360(local_60);
  local_8._0_1_ = 1;
  FUN_0040ea40(local_f8,"name");
  local_8._0_1_ = 2;
  FUN_0040ea40(local_144,"value");
  local_8 = CONCAT31(local_8._1_3_,3);
  if (param_3 != (char *)0x0) {
    FUN_0040dc00(local_ac,param_3);
  }
  if (param_4 != (byte *)0x0) {
    FUN_0040dc00(local_60,(char *)param_4);
  }
  if (local_34c != (char *)0x0) {
    FUN_0040dc00(local_f8,local_34c);
  }
  if (local_348 != (char *)0x0) {
    FUN_0040dc00(local_144,local_348);
  }
  if ((0 < *(int *)(local_a0 + -0xc)) && (0 < *(int *)(local_54 + -0xc))) {
    FUN_00417ec0(local_334);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00418230(local_334,local_368,param_2,0x174);
    if (local_368[0] == 0) {
      FUN_004153d0(local_334,&local_350,local_a0);
      uVar6 = FUN_004153c0(&local_350);
      puVar12 = local_344;
      if (uVar6 != 0) {
        local_33d = (byte)(*local_344 >> 1) & 1;
        bVar11 = (byte)*local_344 & 1;
        FUN_00415450(&local_350,(int *)&local_348,&DAT_004494e8);
        uVar6 = FUN_004153c0((int *)&local_348);
        piVar3 = local_338;
        if (uVar6 != 0) {
          iVar5 = *local_338;
          ppuVar7 = FUN_004153a0((int *)&local_348);
          (**(code **)(iVar5 + 0x1b0))(ppuVar7);
          puVar12 = local_344;
        }
        FUN_00403220(local_26c);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_00415340(&local_350,&local_33c);
        uVar6 = FUN_004153c0(&local_33c);
        pbVar4 = local_54;
        while (uVar6 != 0) {
          local_54 = pbVar4;
          ppuVar7 = FUN_004153a0(&local_33c);
          do {
            bVar1 = *(byte *)ppuVar7;
            bVar13 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_0040f340:
              iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_0040f345;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)ppuVar7 + 1);
            bVar13 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_0040f340;
            ppuVar7 = (undefined **)((int)ppuVar7 + 2);
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_0040f345:
          if (iVar5 == 0) {
            FUN_00415450(&local_33c,(int *)&local_338,local_ec);
            FUN_00415450(&local_33c,(int *)&local_34c,local_138);
            uVar6 = FUN_004153c0((int *)&local_338);
            if ((uVar6 != 0) && (uVar6 = FUN_004153c0((int *)&local_34c), uVar6 != 0)) {
              ppuVar8 = FUN_004153a0((int *)&local_338);
              ppuVar7 = (undefined **)((int)ppuVar8 + 1);
              do {
                cVar2 = *(char *)ppuVar8;
                ppuVar8 = (undefined **)((int)ppuVar8 + 1);
              } while (cVar2 != '\0');
              if (ppuVar8 != ppuVar7) {
                if (bVar11 != 0) {
                  if (0 < *(int *)(local_260[0] + -0xc)) {
                    ppuVar7 = FUN_004153a0((int *)&local_338);
                    if (local_33d == 0) {
                      iVar5 = FID_conflict___mbscoll(local_260[0],(uchar *)ppuVar7);
                    }
                    else {
                      iVar5 = FUN_0040b0e0(local_260,(uchar *)ppuVar7);
                    }
                    if (0 < iVar5) {
                      bVar11 = 0;
                    }
                  }
                  ppuVar7 = FUN_004153a0((int *)&local_338);
                  FUN_0040dc00(local_26c,(char *)ppuVar7);
                }
                iVar5 = *piVar3;
                ppuVar7 = FUN_004153a0((int *)&local_34c);
                ppuVar8 = FUN_004153a0((int *)&local_338);
                iVar5 = (**(code **)(iVar5 + 0x194))(ppuVar8,ppuVar7);
                if (-1 < iVar5) {
                  local_354 = local_354 + 1;
                }
              }
            }
          }
          piVar9 = (int *)FUN_004154d0(&local_33c,local_35c);
          local_33c = *piVar9;
          uVar6 = FUN_004153c0(&local_33c);
          puVar12 = local_344;
          pbVar4 = local_54;
        }
        if (bVar11 != 0) {
          *puVar12 = *puVar12 | 4;
        }
        local_8._1_3_ = (uint3)((uint)local_8 >> 8);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00402e50(local_26c);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00417ee0(local_334);
  }
  local_8._0_1_ = 2;
  FUN_0040b970(local_144);
  local_8._0_1_ = 1;
  FUN_0040b970(local_f8);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040b970(local_60);
  local_8 = 0xffffffff;
  FUN_0040b970(local_ac);
LAB_0040f4e8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

