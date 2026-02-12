
void __fastcall FUN_00410ae0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0044565b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  VariantClear((VARIANTARG *)(param_1 + 6));
  *param_1 = CProperty::vftable;
  local_8 = 2;
  FUN_0042eaea((void *)param_1[2]);
  *param_1 = IProperty::vftable;
  ExceptionList = local_10;
  return;
}

