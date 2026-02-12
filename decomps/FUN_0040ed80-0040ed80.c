
void __thiscall FUN_0040ed80(void *this,uint *param_1,uint *param_2,char *param_3)

{
  uchar *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint local_3c4 [3];
  undefined4 local_3b8;
  uint *local_3b4;
  int local_3b0;
  char *local_3ac;
  int local_3a8;
  byte local_3a2;
  byte local_3a1;
  int local_3a0 [3];
  uchar *local_394 [71];
  undefined4 local_278 [3];
  uchar *local_26c [71];
  int local_150 [50];
  int local_88 [3];
  byte *local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044518c;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3ac = param_3;
  local_3b4 = param_1;
  local_3b0 = 0;
  if ((param_2 != (uint *)0x0) && ((char)*param_2 != '\0')) {
    FUN_0040c410(local_88);
    local_8 = 0;
    if (local_3ac != (char *)0x0) {
      FUN_0040dc00(local_88,local_3ac);
    }
    if (0 < *(int *)(local_7c + -0xc)) {
      FUN_00417ec0(local_150);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00418230(local_150,local_3c4,param_2,0x174);
      if (local_3c4[0] == 0) {
        FUN_004156e0(local_150,&local_3ac);
        ppuVar2 = FUN_004153a0((int *)&local_3ac);
        iVar3 = FID_conflict___mbscoll(local_7c,(uchar *)ppuVar2);
        if (iVar3 != 0) {
          puVar4 = (undefined4 *)FUN_004153d0(local_150,&local_3a8,local_7c);
          local_3ac = (char *)*puVar4;
        }
        uVar5 = FUN_004153c0((int *)&local_3ac);
        if (uVar5 != 0) {
          local_3a1 = (byte)*param_1 & 1;
          local_3a2 = (byte)(*param_1 >> 1) & 1;
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 0x1b0))(local_7c);
          FUN_00403220(local_3a0);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_00415510(&local_3ac,&local_3a8);
          uVar5 = FUN_004153c0(&local_3a8);
          while (uVar5 != 0) {
            ppuVar2 = FUN_00415380(&local_3a8);
            FUN_0040e9a0(local_278,(char *)ppuVar2);
            local_8._0_1_ = 3;
            if (local_3a1 != 0) {
              if (0 < *(int *)(local_394[0] + -0xc)) {
                if (local_3a2 == 0) {
                  iVar3 = FID_conflict___mbscoll(local_394[0],local_26c[0]);
                }
                else {
                  iVar3 = FUN_0040b0e0(local_394,local_26c[0]);
                }
                if (0 < iVar3) {
                  local_3a1 = 0;
                }
              }
              FUN_00403420(local_394,local_26c);
            }
            puVar1 = local_26c[0];
                    /* WARNING: Load size is inaccurate */
            iVar3 = *this;
            ppuVar2 = FUN_004153a0(&local_3a8);
            iVar3 = (**(code **)(iVar3 + 0x194))(puVar1,ppuVar2);
            if (-1 < iVar3) {
              local_3b0 = local_3b0 + 1;
            }
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_00402e50(local_278);
            piVar6 = (int *)FUN_00415340(&local_3a8,&local_3b8);
            local_3a8 = *piVar6;
            uVar5 = FUN_004153c0(&local_3a8);
            param_1 = local_3b4;
          }
          if (local_3a1 != 0) {
            *param_1 = *param_1 | 4;
          }
          local_8._1_3_ = (undefined3)(local_8 >> 8);
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_00402e50(local_3a0);
        }
      }
      local_8 = local_8 & 0xffffff00;
      FUN_00417ee0(local_150);
    }
    local_8 = 0xffffffff;
    FUN_0040ba10(local_88);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

