
void __cdecl FUN_00407a90(undefined8 param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  void *this;
  undefined4 extraout_EDX;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_64 [4];
  uint local_54 [4];
  uint local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  
  uVar1 = param_1._4_4_ >> 0x14 & 0x7ff;
  local_10 = param_1._4_4_ & 0xfffff;
  if (uVar1 == 0) {
    local_c = -0x432;
  }
  else {
    local_10 = local_10 + 0x100000;
    local_c = uVar1 - 0x433;
  }
  local_14 = (uint)param_1;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00407520(&local_14,(longlong *)&local_34,&local_24);
  FUN_004075f0(local_44,extraout_EDX,local_44,local_1c,param_4);
  puVar4 = local_44;
  puVar3 = local_54;
  this = (void *)FUN_00407440(&local_14,local_64);
  FUN_00407380(this,(int *)puVar3,puVar4);
  FUN_00407380(&local_24,(int *)&local_14,local_44);
  FUN_00407380(&local_34,(int *)&local_24,local_44);
  bVar2 = local_14 != 0;
  local_14 = local_14 - 1;
  local_10 = (local_10 - 1) + (uint)bVar2;
  FUN_00407780(local_54,&local_14,local_14 - (local_24 + 1),
               (local_10 - (local_20 + (uint)(0xfffffffe < local_24))) -
               (uint)(local_14 < local_24 + 1),param_2,param_3,param_4);
  return;
}

