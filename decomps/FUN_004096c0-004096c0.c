
uint __thiscall FUN_004096c0(void *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_24 [2];
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444918;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
    return 0x80004003;
  }
  uVar2 = (*param_1 != '\0') - 1 & 0x80070057;
  if (-1 < (int)uVar2) {
    ExceptionList = &local_10;
    FUN_00422e00(local_24,param_1);
    local_8 = 0;
    uVar2 = local_1c;
    if (-1 < (int)local_1c) {
                    /* WARNING: Load size is inaccurate */
      uVar2 = (**(code **)(*this + 0x1c))(local_24,uVar1);
    }
    local_8 = 0xffffffff;
    FUN_00422bc0(local_24);
  }
  ExceptionList = local_10;
  return uVar2;
}

