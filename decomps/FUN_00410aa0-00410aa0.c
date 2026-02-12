
undefined4 __thiscall FUN_00410aa0(void *this,VARIANTARG *param_1)

{
  VARIANTARG *pvargDest;
  HRESULT HVar1;
  
  pvargDest = (VARIANTARG *)((int)this + 0x18);
  if (pvargDest != param_1) {
    HVar1 = VariantCopy(pvargDest,param_1);
    if (HVar1 < 0) {
      (pvargDest->n1).n2.vt = 10;
      *(HRESULT *)((int)this + 0x20) = HVar1;
                    /* WARNING: Subroutine does not return */
      FUN_00401760(HVar1);
    }
  }
  return 1;
}

