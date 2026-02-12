
CSimpleStringT<wchar_t,0> * __thiscall FUN_004037c0(void *this,LPCSTR param_1)

{
  int iVar1;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = MultiByteToWideChar(3,0,param_1,-1,(LPWSTR)0x0,0);
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
                    /* WARNING: Load size is inaccurate */
      if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar1) < 0) {
        FUN_00402df0(this,iVar1);
      }
                    /* WARNING: Load size is inaccurate */
      MultiByteToWideChar(3,0,param_1,-1,*this,iVar1);
                    /* WARNING: Load size is inaccurate */
      if (iVar1 <= *(int *)(*this + -8)) {
        *(int *)(*this + -0xc) = iVar1;
                    /* WARNING: Load size is inaccurate */
        *(undefined2 *)(*this + iVar1 * 2) = 0;
        return (CSimpleStringT<wchar_t,0> *)this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)this);
  return (CSimpleStringT<wchar_t,0> *)this;
}

