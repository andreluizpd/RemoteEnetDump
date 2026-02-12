
void __fastcall FUN_00424f80(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446d88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  ExceptionList = local_10;
  return;
}

