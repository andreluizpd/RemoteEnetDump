
undefined4 __thiscall
FUN_00424590(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  char local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444fda;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_20 = 3;
  local_8 = 0;
  local_28 = CStringSerializer::vftable;
  local_1c = (int *)0x0;
  local_18 = '\x01';
  local_14 = FUN_0042dcce(8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_14 == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = FUN_004055b0(local_14,0x400);
  }
  local_8 = 2;
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x5c))(&local_28,param_2,param_3,param_4,uVar3);
  FUN_00404c40(param_1,(char *)*local_1c,*(size_t *)((char *)*local_1c + -0xc));
  piVar2 = local_1c;
  uVar1 = *param_1;
  local_28 = CStringSerializer::vftable;
  local_8 = 3;
  if ((local_18 != '\0') && (local_1c != (int *)0x0)) {
    FUN_00405550(local_1c);
    FUN_0042bc24(piVar2);
  }
  ExceptionList = local_10;
  return uVar1;
}

