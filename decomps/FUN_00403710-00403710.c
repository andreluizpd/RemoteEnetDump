
void __thiscall FUN_00403710(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  rsize_t _DstSize;
  rsize_t _MaxCount;
  uint uVar3;
  
  if (param_2 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)this);
    return;
  }
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    uVar2 = *(uint *)(iVar1 + -0xc);
    uVar3 = (int)param_1 - iVar1 >> 1;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      FUN_00402df0(this,param_2);
    }
                    /* WARNING: Load size is inaccurate */
    _Dst = *this;
    _MaxCount = param_2 * 2;
    _DstSize = *(int *)((int)_Dst + -8) * 2;
    if (uVar2 < uVar3) {
      _memcpy_s(_Dst,_DstSize,param_1,_MaxCount);
    }
    else {
      _memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar3 * 2),_MaxCount);
    }
                    /* WARNING: Load size is inaccurate */
    if (param_2 <= *(int *)(*this + -8)) {
      *(int *)(*this + -0xc) = param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(_MaxCount + *this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

