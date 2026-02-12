
uint __fastcall FUN_00425070(void *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_00424eb0(param_1,(undefined4 *)&stack0x00000004);
  ExceptionList = local_10;
  return uVar1;
}

