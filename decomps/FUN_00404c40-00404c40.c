
void __thiscall FUN_00404c40(void *this,char *param_1,size_t param_2)

{
  uint uVar1;
  uint uVar2;
  size_t _DstSize;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = (int)param_1 - *this;
  uVar1 = *(uint *)(*this + -0xc);
  if (-1 < (int)param_2) {
    if (param_1 == (char *)0x0) {
      _DstSize = 0;
    }
    else {
      _DstSize = _strnlen(param_1,param_2);
    }
    if ((int)(0x7fffffff - _DstSize) < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    iVar3 = uVar1 + _DstSize;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar3) < 0) {
      FUN_00402d90(this,iVar3);
    }
                    /* WARNING: Load size is inaccurate */
    if (uVar2 <= uVar1) {
      param_1 = (char *)(uVar2 + *this);
    }
    _memcpy_s((void *)(*this + uVar1),_DstSize,param_1,_DstSize);
                    /* WARNING: Load size is inaccurate */
    if (iVar3 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = iVar3;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(iVar3 + *this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

