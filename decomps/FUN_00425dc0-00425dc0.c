
void __thiscall FUN_00425dc0(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_1b0 [103];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446ebb;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00423c60(local_1b0,param_1,(char *)0x0,0);
    local_8 = 0;
    iVar2 = FUN_004250e0((void *)((int)this + 0xb8),local_1b0,0,-1);
    if (-1 < iVar2) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x90))(iVar2,uVar1);
    }
    local_8 = 0xffffffff;
    FUN_004235e0(local_1b0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

