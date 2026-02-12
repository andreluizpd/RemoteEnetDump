
undefined4 * __fastcall FUN_0040ca70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00444dbe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = IUnknownImpl::vftable;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = ISerializableObject::vftable;
  local_8 = 1;
  uStack_7 = 0;
  *param_1 = CKVPCollection::vftable;
  param_1[3] = CKVPCollection::vftable;
  param_1[4] = 0;
  FUN_0040c2b0(param_1 + 5);
  _local_8 = CONCAT31(uStack_7,2);
  if (DAT_00458d68 == 0 && DAT_00458d6c == 0) {
    FUN_0040c9c0();
  }
  ExceptionList = local_10;
  return param_1;
}

