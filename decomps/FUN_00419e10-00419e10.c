
int __thiscall FUN_00419e10(void *this,int param_1)

{
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070216);
  }
  if ((uint)(param_1 * 2) < 0x401) {
    *(int *)this = (int)this + 4;
    return (int)this + 4;
  }
  FUN_00419260(this,param_1 * 2);
                    /* WARNING: Load size is inaccurate */
  return *this;
}

