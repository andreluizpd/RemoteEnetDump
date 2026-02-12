
void __thiscall FUN_00425b80(void *this,char *param_1)

{
  undefined4 local_1b0 [103];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446e7b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00423c60(local_1b0,param_1,(char *)0x0,0);
    local_8 = 0;
    FUN_004250e0((void *)((int)this + 0xb8),local_1b0,0,-1);
    local_8 = 0xffffffff;
    FUN_004235e0(local_1b0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

