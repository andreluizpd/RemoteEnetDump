
void __cdecl FUN_004023f0(int *param_1,size_t param_2,void *param_3,int param_4)

{
  void *pvVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  if (param_3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 == param_3) {
    if ((int)param_2 <= param_4) goto LAB_00402456;
    pvVar1 = _calloc(param_2,2);
  }
  else {
    if ((int)param_2 <= param_4) {
      _free(pvVar1);
LAB_00402456:
      *param_1 = (int)param_3;
      goto LAB_00402458;
    }
    pvVar1 = __recalloc(pvVar1,param_2,2);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
  }
  *param_1 = (int)pvVar1;
LAB_00402458:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x8007000e);
  }
  return;
}

