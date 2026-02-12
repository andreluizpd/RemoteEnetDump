
int __fastcall FUN_00410930(int param_1)

{
  VARIANTARG *pvarSrc;
  HRESULT HVar1;
  int iVar2;
  VARIANTARG local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004453a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  VariantInit(&local_20);
  local_8 = 0;
  pvarSrc = (VARIANTARG *)(param_1 + 0x18);
  if (pvarSrc == (VARIANTARG *)0x0) {
    pvarSrc = &local_20;
  }
  HVar1 = VariantChangeType(&local_20,pvarSrc,0,8);
  if (HVar1 < 0) {
    local_8 = 0xffffffff;
    VariantClear(&local_20);
    ExceptionList = local_10;
    return 0;
  }
  if ((LPCWSTR)local_20.n1._8_4_ == (LPCWSTR)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenW((LPCWSTR)local_20.n1._8_4_);
  }
  local_8 = 0xffffffff;
  VariantClear(&local_20);
  ExceptionList = local_10;
  return iVar2;
}

