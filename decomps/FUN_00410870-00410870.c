
undefined4 __thiscall FUN_00410870(void *this,LPWSTR param_1,int param_2)

{
  VARIANTARG *pvarSrc;
  HRESULT HVar1;
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
  pvarSrc = (VARIANTARG *)((int)this + 0x18);
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
  lstrcpynW(param_1,(LPCWSTR)local_20.n1._8_4_,param_2);
  local_8 = 0xffffffff;
  VariantClear(&local_20);
  ExceptionList = local_10;
  return 1;
}

