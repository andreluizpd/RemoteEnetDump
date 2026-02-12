
undefined4 * __fastcall FUN_004255e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446e46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040ca70(param_1);
  *param_1 = CStringStringPairCollection::vftable;
  param_1[3] = CStringStringPairCollection::vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  ExceptionList = local_10;
  return param_1;
}

