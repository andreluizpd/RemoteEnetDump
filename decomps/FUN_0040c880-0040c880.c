
void __thiscall FUN_0040c880(void *this,undefined4 param_1,__time64_t *param_2)

{
  char cVar1;
  uint uVar2;
  int local_4c [3];
  undefined4 local_40 [11];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444d78;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_0040c4c0(local_4c);
  local_8 = 0;
  cVar1 = FUN_00428670(param_2,local_40);
  if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x168))(param_1,local_40[0],uVar2);
  }
  local_8 = 0xffffffff;
  FUN_0040bab0(local_4c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

