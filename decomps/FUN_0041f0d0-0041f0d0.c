
int __thiscall FUN_0041f0d0(void *this,CSimpleStringT<char,0> *param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_8 = 0;
  iVar2 = (**(code **)(*this + 0xb4))(&local_8);
  if (-1 < iVar2) {
    if (local_8 != 0) {
      iVar2 = local_8 + 1;
      if (-1 < iVar2) {
        if ((int)(1U - *(int *)(*(int *)param_1 + -4) | *(int *)(*(int *)param_1 + -8) - iVar2) < 0)
        {
          FUN_00402d90(param_1,iVar2);
        }
        iVar1 = *(int *)param_1;
        if (iVar2 <= *(int *)(iVar1 + -8)) {
          *(int *)(iVar1 + -0xc) = iVar2;
          *(undefined1 *)(iVar2 + *(int *)param_1) = 0;
                    /* WARNING: Load size is inaccurate */
          iVar2 = (**(code **)(*this + 0xd8))(iVar1,local_8);
          if (-1 < iVar2) {
            *(undefined1 *)(iVar1 + local_8) = 0;
          }
          _Str = *(char **)param_1;
          if (_Str != (char *)0x0) {
            _Str = (char *)_strnlen(_Str,*(size_t *)(_Str + -8));
            if ((int)_Str < 0) goto LAB_0041f10b;
          }
          if ((int)_Str <= *(int *)(*(int *)param_1 + -8)) {
            *(char **)(*(int *)param_1 + -0xc) = _Str;
            _Str[*(int *)param_1] = '\0';
            return iVar2;
          }
        }
      }
LAB_0041f10b:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    ATL::CSimpleStringT<char,0>::Empty(param_1);
  }
  return iVar2;
}

