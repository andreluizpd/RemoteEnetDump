
void __thiscall FUN_00428300(void *this,wchar_t *param_1,va_list param_2)

{
  int iVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    iVar1 = FID_conflict___vscprintf_p(param_1,param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    }
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar1) < 0) {
      FUN_00402d90(this,iVar1);
    }
                    /* WARNING: Load size is inaccurate */
    _vsprintf_s(*this,iVar1 + 1,(char *)param_1,param_2);
                    /* WARNING: Load size is inaccurate */
    if (iVar1 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = iVar1;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(iVar1 + *this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

