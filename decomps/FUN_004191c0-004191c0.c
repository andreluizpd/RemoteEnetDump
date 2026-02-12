
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004191c0(void *this,short *param_1)

{
  int iVar1;
  undefined2 local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((*param_1 == 0x3d) && (iVar1 = FUN_00418fc0(this,param_1), -1 < iVar1)) {
    FUN_00418f60((undefined4 *)this);
    iVar1 = FUN_00418fc0(this,local_2008);
    if (-1 < iVar1) {
      FUN_00418fc0(this,param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

