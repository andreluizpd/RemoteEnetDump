
VARIANTARG * __thiscall FUN_004110b0(void *this,OLECHAR *param_1)

{
  HRESULT HVar1;
  BSTR pOVar2;
  
  *(undefined2 *)this = 0;
  HVar1 = VariantClear((VARIANTARG *)this);
  if (HVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(HVar1);
  }
  *(undefined2 *)this = 8;
  pOVar2 = SysAllocString(param_1);
  *(BSTR *)((int)this + 8) = pOVar2;
  if ((pOVar2 == (BSTR)0x0) && (param_1 != (OLECHAR *)0x0)) {
    *(undefined2 *)this = 10;
    *(undefined4 *)((int)this + 8) = 0x8007000e;
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  return (VARIANTARG *)this;
}

