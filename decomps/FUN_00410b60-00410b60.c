
undefined4 * __thiscall FUN_00410b60(void *this,LPCWSTR param_1)

{
  VARIANTARG *pvarg;
  HRESULT HVar1;
  undefined4 in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445423;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00410200(this,param_1,in_stack_00000018);
  local_8._0_1_ = 1;
  pvarg = (VARIANTARG *)((int)this + 0x18);
  *(undefined ***)this = CPropertyItem::vftable;
  VariantInit(pvarg);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined ***)this = CPropertyEditItem::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  if (pvarg != (VARIANTARG *)&stack0x00000008) {
    HVar1 = VariantCopy(pvarg,(VARIANTARG *)&stack0x00000008);
    if (HVar1 < 0) {
      (pvarg->n1).n2.vt = 10;
      *(HRESULT *)((int)this + 0x20) = HVar1;
                    /* WARNING: Subroutine does not return */
      FUN_00401760(HVar1);
    }
  }
  local_8 = 0xffffffff;
  VariantClear((VARIANTARG *)&stack0x00000008);
  ExceptionList = local_10;
  return (undefined4 *)this;
}

