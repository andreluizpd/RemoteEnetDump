
void __thiscall FUN_0040dd80(void *this,int *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  longlong lVar5;
  int local_4c8;
  int local_4c4;
  void *local_4c0;
  int *local_4bc;
  char local_4b5;
  int local_4b4 [3];
  undefined1 local_4a8 [284];
  int local_38c [3];
  undefined4 local_380 [71];
  int local_264 [3];
  uchar *local_258;
  int local_13c [3];
  uchar *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444f7c;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c0 = this;
  if (-1 < (int)((-(uint)(param_1 != (int *)0x0) & 0x7fffbffd) + 0x80004003)) {
    piVar4 = (int *)((int)this + -0xc);
    local_4bc = piVar4;
    (**(code **)(*(int *)((int)this + -0xc) + 0x16c))(local_14);
    local_4c8 = 0;
    local_4c4 = 0;
    iVar1 = (**(code **)(*param_1 + 0x68))(&local_4c8);
    if (-1 < iVar1) {
      FUN_00403220(local_4b4);
      local_8 = 0;
      pcVar2 = (char *)(**(code **)(*piVar4 + 0x10))(local_4a8);
      lVar5 = FUN_0041f310(this_00,pcVar2);
      if (((((lVar5 == CONCAT44(local_4c4,local_4c8)) ||
            (((local_4c8 == DAT_00458d68 && (piVar4 = local_4bc, local_4c4 == DAT_00458d6c)) &&
             (lVar5 == CONCAT44(DAT_00458d74,DAT_00458d70))))) ||
           (((local_4c8 == DAT_00458d70 && (piVar4 = local_4bc, local_4c4 == DAT_00458d74)) &&
            (lVar5 == CONCAT44(DAT_00458d6c,DAT_00458d68))))) ||
          (((local_4c8 == DAT_00458d78 && (piVar4 = local_4bc, local_4c4 == DAT_00458d7c)) &&
           (lVar5 == CONCAT44(DAT_00458d84,DAT_00458d80))))) ||
         (((local_4c8 == DAT_00458d80 && (local_4c4 == DAT_00458d84)) &&
          (lVar5 == CONCAT44(DAT_00458d7c,DAT_00458d78))))) {
        if (local_4c0 == (void *)0xfffffff8) {
          iVar1 = 0;
        }
        else {
          iVar1 = (int)local_4c0 + 0x14;
        }
        iVar1 = (**(code **)(*param_1 + 0x58))(iVar1);
        if (-1 < iVar1) {
          local_4bc = (int *)0x0;
          iVar1 = (**(code **)(*param_1 + 0x74))(&local_4bc);
          if (-1 < iVar1) {
            (**(code **)(*piVar4 + 0x17c))(local_4bc);
            local_4b5 = '\x01';
            FUN_00403220(local_264);
            local_8._0_1_ = 1;
            local_4c0 = (void *)0x0;
            if (0 < (int)local_4bc) {
              do {
                FUN_00403220(local_13c);
                local_8._0_1_ = 2;
                FUN_00403220(local_38c);
                local_8 = CONCAT31(local_8._1_3_,3);
                iVar1 = (**(code **)(*param_1 + 0x58))(local_130);
                if ((-1 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x58))(local_380), -1 < iVar1))
                {
                  iVar3 = (**(code **)(*piVar4 + 0x194))(local_130[0],local_380[0]);
                  if (iVar3 < 0) {
                    iVar1 = -0x7ff8fff2;
                  }
                  else if (local_4b5 != '\0') {
                    if ((0 < *(int *)(local_258 + -0xc)) &&
                       (iVar3 = FID_conflict___mbscoll(local_258,local_130[0]), 0 < iVar3)) {
                      local_4b5 = '\0';
                    }
                    FUN_004039b0(local_264,(int)local_13c);
                  }
                }
                local_8._0_1_ = 2;
                FUN_00402e50(local_38c);
                local_8._0_1_ = 1;
                FUN_00402e50(local_13c);
                local_4c0 = (void *)((int)local_4c0 + 1);
              } while ((int)local_4c0 < (int)local_4bc);
              if (((local_4b5 == '\0') && (-1 < iVar1)) &&
                 (iVar1 = (**(code **)(*piVar4 + 0x14))(), 0 < iVar1)) {
                (**(code **)(*piVar4 + 0x170))();
              }
            }
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00402e50(local_264);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_00402e50(local_4b4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

