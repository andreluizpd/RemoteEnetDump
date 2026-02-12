
void __thiscall FUN_0040c210(void *this,short *param_1,__time64_t *param_2)

{
  char cVar1;
  uint uVar2;
  int local_60 [3];
  undefined4 local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444cb8;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_0040bb50(local_60);
    local_8 = 0;
    cVar1 = FUN_004287a0(param_2,local_54);
    if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x160))(param_1,local_54[0],uVar2);
    }
    local_8 = 0xffffffff;
    FUN_0040bc00(local_60);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

