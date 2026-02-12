
void __thiscall FUN_004060b0(void *this,int param_1)

{
  if (-1 < param_1) {
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - param_1) < 0) {
      FUN_00402df0(this,param_1);
    }
                    /* WARNING: Load size is inaccurate */
    if (param_1 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = param_1;
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(*this + param_1 * 2) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

