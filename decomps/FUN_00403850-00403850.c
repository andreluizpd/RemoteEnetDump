
void __thiscall FUN_00403850(void *this,wchar_t *param_1,size_t param_2)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  wchar_t *_Src;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(uint *)(*this + -0xc);
  uVar4 = (int)param_1 - *this >> 1;
  if (-1 < (int)param_2) {
    if (param_1 == (wchar_t *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = _wcsnlen(param_1,param_2);
    }
    if ((int)(0x7fffffff - sVar2) < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    iVar3 = uVar1 + sVar2;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
                    /* WARNING: Load size is inaccurate */
    if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar3) < 0) {
      FUN_00402df0(this,iVar3);
    }
                    /* WARNING: Load size is inaccurate */
    _Src = (wchar_t *)(*this + uVar4 * 2);
    if (uVar1 < uVar4) {
      _Src = param_1;
    }
    _memcpy_s((void *)(*this + uVar1 * 2),sVar2 * 2,_Src,sVar2 * 2);
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

