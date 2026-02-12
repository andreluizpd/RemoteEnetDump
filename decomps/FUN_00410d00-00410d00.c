
bool __thiscall FUN_00410d00(void *this,VARIANTARG *param_1)

{
  VARIANTARG *pvargDest;
  HRESULT HVar1;
  
  pvargDest = (VARIANTARG *)((int)this + 0x18);
  if ((*(short *)((int)this + 0x18) == 0) && (pvargDest != param_1)) {
    HVar1 = VariantCopy(pvargDest,param_1);
    if (HVar1 < 0) {
      (pvargDest->n1).n2.vt = 10;
      *(HRESULT *)((int)this + 0x20) = HVar1;
                    /* WARNING: Subroutine does not return */
      FUN_00401760(HVar1);
    }
  }
  if (param_1 == (VARIANTARG *)0x0) {
    param_1 = pvargDest;
  }
  HVar1 = VariantChangeType(pvargDest,param_1,0,(pvargDest->n1).n2.vt);
  return -1 < HVar1;
}

