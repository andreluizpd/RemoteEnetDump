
undefined4 __thiscall FUN_00426950(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  
  this_00 = (void *)FUN_00409ad0(0xcc);
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_00426170(this_00,(int *)this);
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = puVar1;
      return 0;
    }
  }
  return 0x8007000e;
}

