
bool __thiscall FUN_004109e0(void *this,VARIANTARG *param_1)

{
  int iVar1;
  _union_2683 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004453d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20.n2.vt = 0;
  local_20._8_4_ = VariantCopy((VARIANTARG *)&local_20.n2,(VARIANTARG *)((int)this + 0x18));
  if ((int)local_20._8_4_ < 0) {
    local_20.n2.vt = 10;
                    /* WARNING: Subroutine does not return */
    FUN_00401760(local_20._8_4_);
  }
  local_8 = 0;
  if (param_1 == (VARIANTARG *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = VariantClear(param_1);
    if (-1 < iVar1) {
      FUN_00401d80(param_1,0x10,&local_20,0x10);
      local_20.n2.vt = 0;
      iVar1 = 0;
    }
  }
  local_8 = 0xffffffff;
  VariantClear((VARIANTARG *)&local_20.n2);
  ExceptionList = local_10;
  return -1 < iVar1;
}

