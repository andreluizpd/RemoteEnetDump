
int __thiscall FUN_0041f1b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Src;
  int local_8;
  
  local_8 = 0;
  FUN_00403710(param_1,&DAT_00448644,0);
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*this + 0x70))(&local_8);
  if ((-1 < iVar1) && (local_8 != 0)) {
    iVar2 = FUN_004060b0(param_1,local_8 + 1);
                    /* WARNING: Load size is inaccurate */
    iVar1 = (**(code **)(*this + 0x94))(iVar2,local_8 * 2);
    if (-1 < iVar1) {
      *(undefined2 *)(iVar2 + local_8 * 2) = 0;
    }
    _Src = (wchar_t *)*param_1;
    if (_Src != (wchar_t *)0x0) {
      _Src = (wchar_t *)_wcsnlen(_Src,*(size_t *)(_Src + -4));
      if ((int)_Src < 0) goto LAB_0041f24d;
    }
    if (*(int *)(*param_1 + -8) < (int)_Src) {
LAB_0041f24d:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    *(wchar_t **)(*param_1 + -0xc) = _Src;
    *(undefined2 *)(*param_1 + (int)_Src * 2) = 0;
  }
  return iVar1;
}

