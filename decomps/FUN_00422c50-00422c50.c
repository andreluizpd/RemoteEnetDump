
undefined4 * __fastcall FUN_00422c50(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446b95;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0041ef10(param_1);
  local_14 = param_1 + 4;
  *param_1 = CStreamBinarySerializer::vftable;
  param_1[2] = 0;
  *local_14 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_14 = (int *)FUN_0042dcce(0x40);
  local_8._0_1_ = 3;
  if (local_14 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_004227b0(local_14,0,0x1000,0);
  }
  param_1[3] = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    param_1[2] = 0x8007000e;
  }
  else {
    *(undefined1 *)(puVar4 + 0xf) = 1;
    local_14 = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,5);
    (*(code *)**(undefined4 **)param_1[3])((undefined4 *)param_1[3],&DAT_0044d2ec,&local_14,uVar3);
    piVar2 = local_14;
    if ((int *)param_1[1] != local_14) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 4))(local_14);
      }
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[1] = piVar2;
    }
    if ((int *)param_1[4] != piVar2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      piVar1 = (int *)param_1[4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[4] = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(local_14);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

