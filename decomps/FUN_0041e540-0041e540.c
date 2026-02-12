
void __thiscall FUN_0041e540(void *this,size_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = _realloc(*this,param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  *(void **)this = pvVar1;
  return;
}

