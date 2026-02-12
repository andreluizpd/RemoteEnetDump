
void __thiscall
FUN_00426f80(void *this,uint *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  uint local_3d8;
  undefined4 local_3d4 [202];
  undefined4 local_ac [3];
  char *local_a0;
  int local_60 [3];
  byte *local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044710e;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x16c))(local_14);
  local_3d8 = 1;
  if ((param_1 != (uint *)0x0) && ((char)*param_1 != '\0')) {
    iVar1 = FUN_00402ef0(local_3d4,DAT_00459770,'\0');
    local_8 = 0;
    pcVar2 = *(char **)(iVar1 + 8);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = *(char **)(iVar1 + 4);
    }
    FUN_0040ea40(local_ac,pcVar2);
    local_8._0_1_ = 2;
    FUN_00402a60(local_3d4);
    FUN_0040c360(local_60);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00424ab0(local_54);
    if (param_2 != (char *)0x0) {
      FUN_0040dc00(local_ac,param_2);
    }
    if (param_3 != (char *)0x0) {
      FUN_0040dc00(local_60,param_3);
    }
    iVar1 = FUN_0040f050(this,&local_3d8,param_1,local_a0,local_54[0],param_4,param_5);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0040b970(local_60);
    local_8 = 0xffffffff;
    FUN_0040b970(local_ac);
    if ((0 < iVar1) && ((local_3d8 & 4) == 0)) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x170))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

