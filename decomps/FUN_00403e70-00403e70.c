
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
FUN_00403e70(void *this,int param_1,wchar_t *param_2,char *param_3,char *param_4,va_list param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_1420 [202];
  undefined4 local_10f8 [202];
  undefined4 local_dd0 [202];
  undefined4 local_aa8 [202];
  undefined4 local_780 [202];
  undefined4 local_458 [202];
  undefined **local_130;
  char *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  char local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044421d;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x40) <= param_1) {
    local_12c = local_118;
    local_130 = CBufferedString<256,0>::vftable;
    local_128 = 0x101;
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    iVar3 = 0x102;
    pcVar1 = local_12c;
    do {
      *pcVar1 = '\0';
      pcVar1 = pcVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_8 = 0;
    if (param_3 == (char *)0x0) {
      if (*(char *)((int)this + 0x48) == '\0') {
        FUN_00402ef0(local_dd0,*(char **)((int)this + 0x4c),'\0');
        local_8._0_1_ = 6;
        FUN_004030a0(&local_130,param_2);
        puVar2 = local_dd0;
      }
      else {
        FUN_00402ef0(local_1420,*(char **)((int)this + 0x4c),*(char *)((int)this + 0x48));
        local_8._0_1_ = 5;
        FUN_004030a0(&local_130,param_2);
        puVar2 = local_1420;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402a60(puVar2);
    }
    else if (*(char *)((int)this + 0x48) == '\0') {
      FUN_00402ef0(local_10f8,param_3,'\0');
      local_8._0_1_ = 3;
      FUN_00402ef0(local_780,*(char **)((int)this + 0x4c),'\0');
      local_8._0_1_ = 4;
      FUN_004030a0(&local_130,param_2);
      local_8._0_1_ = 3;
      FUN_00402a60(local_780);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402a60(local_10f8);
    }
    else {
      FUN_00402ef0(local_458,param_3,'\0');
      local_8._0_1_ = 1;
      FUN_00402ef0(local_aa8,*(char **)((int)this + 0x4c),*(char *)((int)this + 0x48));
      local_8._0_1_ = 2;
      FUN_004030a0(&local_130,param_2);
      local_8._0_1_ = 1;
      FUN_00402a60(local_aa8);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402a60(local_458);
    }
    if (param_4 != (char *)0x0) {
      FUN_00403020(&local_130,param_4);
    }
    if (*(char *)((int)this + 0x51) == '\0') {
      FUN_0040fa10();
    }
    else {
      FUN_00403cf0(this,param_1,local_12c,param_5);
    }
    local_8 = 0xffffffff;
    local_130 = CBufferedString<256,0>::vftable;
    FUN_004024f0((int)&local_130);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

