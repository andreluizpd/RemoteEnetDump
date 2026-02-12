
void __thiscall FUN_0040eae0(void *this,uint *param_1,uint *param_2,char *param_3)

{
  uchar *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  int *piVar5;
  uint local_3a0 [3];
  undefined4 local_394;
  undefined4 local_390;
  uint *local_38c;
  int local_388;
  char *local_384;
  int local_380;
  byte local_37a;
  byte local_379;
  int local_378 [3];
  uchar *local_36c [71];
  int local_250 [50];
  undefined4 local_188 [3];
  uchar *local_17c [71];
  int local_60 [3];
  byte *local_54;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445129;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_384 = param_3;
  local_38c = param_1;
  local_388 = 0;
  if ((param_2 != (uint *)0x0) && ((char)*param_2 != '\0')) {
    FUN_0040c360(local_60);
    local_8 = 0;
    if (local_384 != (char *)0x0) {
      FUN_0040dc00(local_60,local_384);
    }
    if (0 < *(int *)(local_54 + -0xc)) {
      FUN_00417ec0(local_250);
      local_8._0_1_ = 1;
      FUN_00418230(local_250,local_3a0,param_2,0x174);
      if (local_3a0[0] == 0) {
        FUN_004153d0(local_250,(int *)&local_384,local_54);
        uVar2 = FUN_004153c0((int *)&local_384);
        if (uVar2 != 0) {
          local_379 = (byte)*param_1 & 1;
          local_37a = (byte)(*param_1 >> 1) & 1;
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 0x1b0))(local_54);
          FUN_00403220(local_378);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_00415340(&local_384,&local_380);
          uVar2 = FUN_004153c0(&local_380);
          while (uVar2 != 0) {
            ppuVar3 = FUN_004153a0(&local_380);
            FUN_0040e9a0(local_188,(char *)ppuVar3);
            local_8._0_1_ = 3;
            if (local_379 != 0) {
              if (0 < *(int *)(local_36c[0] + -0xc)) {
                if (local_37a == 0) {
                  iVar4 = FID_conflict___mbscoll(local_36c[0],local_17c[0]);
                }
                else {
                  iVar4 = FUN_0040b0e0(local_36c,local_17c[0]);
                }
                if (0 < iVar4) {
                  local_379 = 0;
                }
              }
              FUN_00403420(local_36c,local_17c);
            }
            puVar1 = local_17c[0];
                    /* WARNING: Load size is inaccurate */
            iVar4 = *this;
            piVar5 = (int *)FUN_00417eb0(&local_380,&local_390);
            ppuVar3 = FUN_00415550(piVar5);
            iVar4 = (**(code **)(iVar4 + 0x194))(puVar1,ppuVar3);
            if (-1 < iVar4) {
              local_388 = local_388 + 1;
            }
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_00402e50(local_188);
            piVar5 = (int *)FUN_004154d0(&local_380,&local_394);
            local_380 = *piVar5;
            uVar2 = FUN_004153c0(&local_380);
            param_1 = local_38c;
          }
          if (local_379 != 0) {
            *param_1 = *param_1 | 4;
          }
          local_8._1_3_ = (uint3)((uint)local_8 >> 8);
          local_8._0_1_ = 1;
          FUN_00402e50(local_378);
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00417ee0(local_250);
    }
    local_8 = 0xffffffff;
    FUN_0040b970(local_60);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

