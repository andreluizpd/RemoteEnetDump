
void __fastcall FUN_0040bd90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444dbe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CKVPCollection::vftable;
  param_1[3] = CKVPCollection::vftable;
  local_8 = 1;
  FUN_0040b8d0(param_1 + 5);
  param_1[3] = ISerializableObject::vftable;
  *param_1 = IUnknownImpl::vftable;
  ExceptionList = local_10;
  return;
}

