
int * __thiscall FUN_00402d10(void *this,void *param_1,rsize_t param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if ((param_1 != (void *)0x0) || (param_2 == 0)) {
    iVar1 = (**(code **)*param_3)(param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_004023e0();
    }
    *(int *)this = iVar1 + 0x10;
    if ((-1 < (int)param_2) && ((int)param_2 <= *(int *)(iVar1 + 8))) {
      *(rsize_t *)(iVar1 + 4) = param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(param_2 + *this) = 0;
                    /* WARNING: Load size is inaccurate */
      _memcpy_s(*this,param_2,param_1,param_2);
      return (int *)this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

