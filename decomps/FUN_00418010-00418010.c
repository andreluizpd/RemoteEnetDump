
uint __cdecl
FUN_00418010(undefined4 *param_1,size_t *param_2,uint param_3,uint *param_4,size_t param_5,
            char param_6)

{
  uint uVar1;
  
  if (param_3 == 1) {
    uVar1 = FUN_00414c90(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_00417ef0(param_1,(int *)param_2,(ushort *)param_4,param_5);
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = FUN_004169a0(param_1,(int *)param_2,(ushort *)param_4,param_5);
    return uVar1;
  }
  if (param_3 != 6) {
    if (param_3 == 5) {
      uVar1 = FUN_00417f50(param_1,(int *)param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 != 9) {
      return param_3 & 0xffffff00;
    }
    uVar1 = FUN_00417070(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  uVar1 = FUN_00417fb0(param_1,(int *)param_2,param_4,param_5);
  return uVar1;
}

