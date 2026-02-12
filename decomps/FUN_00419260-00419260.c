
void __thiscall FUN_00419260(void *this,size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  *(void **)this = pvVar1;
  return;
}

