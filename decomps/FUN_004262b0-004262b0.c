
void __thiscall FUN_004262b0(void *this,char *param_1,char *param_2)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_800 [202];
  undefined4 local_4d8 [202];
  undefined4 local_1b0 [103];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446fad;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_2 == (char *)0x0))
  goto LAB_00426519;
  FUN_00423c60(local_1b0,param_1,(char *)0x0,0);
  local_8 = 0;
  iVar1 = FUN_004250e0((void *)((int)this + 0xb8),local_1b0,0,-1);
  if (iVar1 < 0) {
    this_00 = (void *)FUN_00423220(0x19c);
    if ((this_00 == (void *)0x0) ||
       (piVar2 = FUN_00423c60(this_00,param_1,param_2,0), piVar2 == (int *)0x0)) {
      FUN_00402ef0(local_800,PTR_s_alCDbmfgNYo_004574c0,'\0');
      local_8._0_1_ = 3;
      FUN_00402ef0(local_4d8,DAT_00459770,'\0');
      local_8._0_1_ = 4;
      FUN_00405140(param_2);
      FUN_0040f9e0(5,(wchar_t *)"(%s) %s() pPair=NULL adding element %s, %s");
      local_8._0_1_ = 3;
LAB_004264e7:
      FUN_00402a60(local_4d8);
      puVar4 = local_800;
      goto LAB_004264fc;
    }
    uVar3 = FUN_00425e70((void *)((int)this + 0xb8),piVar2,1,0);
    if ((int)uVar3 < 0) {
      FUN_00402ef0(local_800,PTR_s_alCDbmfgNYo_004574c0,'\0');
      local_8._0_1_ = 5;
      FUN_00402ef0(local_4d8,DAT_00459770,'\0');
      local_8._0_1_ = 6;
      FUN_00405140(param_2);
      FUN_0040f9e0(5,(wchar_t *)"(%s) %s() error adding element %s, %s");
      local_8._0_1_ = 5;
      goto LAB_004264e7;
    }
  }
  else {
    FUN_00402ef0(local_4d8,PTR_s_alCDbmfgNYo_004574c0,'\0');
    local_8._0_1_ = 1;
    FUN_00402ef0(local_800,DAT_00459770,'\0');
    local_8._0_1_ = 2;
    FUN_00405140(param_2);
    FUN_0040f9e0(5,(wchar_t *)"(%s) %s() item already exists %s, %s");
    local_8._0_1_ = 1;
    FUN_00402a60(local_800);
    puVar4 = local_4d8;
LAB_004264fc:
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00402a60(puVar4);
  }
  local_8 = 0xffffffff;
  FUN_004235e0(local_1b0);
LAB_00426519:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

