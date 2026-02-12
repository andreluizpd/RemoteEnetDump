
int * __thiscall FUN_0041fbb0(void *this,void *param_1,int param_2,undefined4 *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  if (param_3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if ((param_1 != (void *)0x0) || (param_2 == 0)) {
    iVar1 = (**(code **)*param_3)(param_2,2);
    if (iVar1 == 0) {
      iVar1 = FUN_004023e0();
    }
    *(int *)this = iVar1 + 0x10;
    if ((-1 < param_2) && (param_2 <= *(int *)(iVar1 + 8))) {
      *(int *)(iVar1 + 4) = param_2;
                    /* WARNING: Load size is inaccurate */
      _DstSize = param_2 * 2;
      *(undefined2 *)(_DstSize + *this) = 0;
                    /* WARNING: Load size is inaccurate */
      _memcpy_s(*this,_DstSize,param_1,_DstSize);
      return (int *)this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

