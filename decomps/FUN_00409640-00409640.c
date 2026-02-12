
int __thiscall FUN_00409640(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_24 [3];
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004448e8;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00422c50(local_24);
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  iVar2 = (**(code **)(*this + 0x10))(local_24,uVar1);
  if (-1 < iVar2) {
    iVar2 = FUN_00422850(local_18,param_1,3);
  }
  local_8 = 0xffffffff;
  FUN_00422bc0(local_24);
  ExceptionList = local_10;
  return iVar2;
}

