
int __thiscall FUN_00409b10(void *this,uint param_1)

{
  if (*(uint *)((int)this + 4) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
                    /* WARNING: Load size is inaccurate */
  return *this + param_1 * 4;
}

