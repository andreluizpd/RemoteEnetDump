
void __thiscall FUN_0041fe10(void *this,wchar_t *param_1,va_list param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (wchar_t *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *(int *)(*this + -0xc);
    iVar2 = FID_conflict___vscprintf_p(param_1,param_2);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    }
    iVar3 = iVar1 + iVar2;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar3) < 0) {
      FUN_00402df0(this,iVar3);
    }
                    /* WARNING: Load size is inaccurate */
    _vswprintf_s((wchar_t *)(*this + iVar1 * 2),iVar2 + 1,param_1,param_2);
                    /* WARNING: Load size is inaccurate */
    if (iVar3 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = iVar3;
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(*this + iVar3 * 2) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

