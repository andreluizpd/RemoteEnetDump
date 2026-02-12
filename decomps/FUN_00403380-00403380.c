
void __thiscall FUN_00403380(void *this,void *param_1,rsize_t param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  if (param_2 == 0) {
    ATL::CSimpleStringT<char,0>::Empty((CSimpleStringT<char,0> *)this);
    return;
  }
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    uVar2 = *(uint *)(iVar1 + -0xc);
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      FUN_00402d90(this,param_2);
    }
                    /* WARNING: Load size is inaccurate */
    _Dst = *this;
    if (uVar2 < (uint)((int)param_1 - iVar1)) {
      _memcpy_s(_Dst,*(rsize_t *)((int)_Dst + -8),param_1,param_2);
    }
    else {
      _memmove_s(_Dst,*(rsize_t *)((int)_Dst + -8),(void *)((int)_Dst + ((int)param_1 - iVar1)),
                 param_2);
    }
                    /* WARNING: Load size is inaccurate */
    if ((int)param_2 <= *(int *)(*this + -8)) {
      *(rsize_t *)(*this + -0xc) = param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(param_2 + *this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

