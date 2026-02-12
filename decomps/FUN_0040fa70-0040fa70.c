
void __fastcall FUN_0040fa70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445278;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProperty::vftable;
  local_8 = 0;
  FUN_0042eaea((void *)param_1[2]);
  *param_1 = IProperty::vftable;
  ExceptionList = local_10;
  return;
}

