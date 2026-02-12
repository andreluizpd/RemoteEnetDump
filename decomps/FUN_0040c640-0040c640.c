
void __thiscall FUN_0040c640(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  void *this_00;
  int *piVar7;
  undefined8 uVar8;
  void *local_2f8;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  uint local_2e4;
  int local_2e0;
  char local_2d9;
  int local_2d8 [3];
  undefined1 local_2cc [284];
  undefined4 local_1b0 [2];
  undefined4 local_1a8;
  undefined4 local_13c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444d41;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (-1 < (int)((-(uint)(param_1 != (int *)0x0) & 0x7fffbffd) + 0x80004003)) {
    FUN_00403220(local_2d8);
    local_8 = 0;
    piVar7 = (int *)((int)this + -0xc);
    pcVar3 = (char *)(**(code **)(*(int *)((int)this + -0xc) + 0x10))(local_2cc,uVar2);
    uVar8 = FUN_0041f310(this_00,pcVar3);
    iVar4 = (**(code **)(*param_1 + 0x2c))(uVar8);
    if (-1 < iVar4) {
      iVar4 = *param_1;
      uVar5 = (**(code **)(*piVar7 + 0x1a8))();
      iVar4 = (**(code **)(iVar4 + 0x20))(uVar5);
      if (-1 < iVar4) {
        local_2e0 = (**(code **)(*piVar7 + 0x14))();
        iVar4 = (**(code **)(*param_1 + 0x38))(local_2e0);
        if ((-1 < iVar4) && (0 < local_2e0)) {
          local_2f8 = (void *)0x0;
          local_2f4 = 0;
          local_2f0 = 0;
          local_2ec = 0;
          local_8 = CONCAT31(local_8._1_3_,1);
          cVar1 = (**(code **)(*piVar7 + 0x1d8))(&local_2f8);
          if (cVar1 != '\0') {
            local_2d9 = local_2f4 != 0;
            local_2e4 = 0;
            if (0 < local_2e0) {
              do {
                if (iVar4 < 0) break;
                uVar2 = local_2e4;
                if (local_2d9 != '\0') {
                  puVar6 = (uint *)FUN_00409b10(&local_2f8,local_2e4);
                  uVar2 = *puVar6;
                }
                local_2e8 = uVar2;
                FUN_004234b0(local_1b0);
                local_8 = CONCAT31(local_8._1_3_,2);
                cVar1 = (**(code **)(*piVar7 + 0x188))(local_2e8,local_1b0);
                if ((cVar1 != '\0') &&
                   (iVar4 = (**(code **)(*param_1 + 0x1c))(local_1a8), -1 < iVar4)) {
                  iVar4 = (**(code **)(*param_1 + 0x1c))(local_13c);
                }
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_004235e0(local_1b0);
                local_2e4 = local_2e4 + 1;
              } while ((int)local_2e4 < local_2e0);
            }
          }
          local_8 = local_8 & 0xffffff00;
          if (local_2f8 != (void *)0x0) {
            _free(local_2f8);
          }
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_00402e50(local_2d8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

