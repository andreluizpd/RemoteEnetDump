
CSimpleStringT<char,0> * __thiscall FUN_00406100(void *this,LPCWSTR param_1)

{
  int iVar1;
  
  if (param_1 != (LPCWSTR)0x0) {
    iVar1 = WideCharToMultiByte(3,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
                    /* WARNING: Load size is inaccurate */
      if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - iVar1) < 0) {
        FUN_00402d90(this,iVar1);
      }
                    /* WARNING: Load size is inaccurate */
      WideCharToMultiByte(3,0,param_1,-1,*this,iVar1,(LPCSTR)0x0,(LPBOOL)0x0);
                    /* WARNING: Load size is inaccurate */
      if (iVar1 <= *(int *)(*this + -8)) {
        *(int *)(*this + -0xc) = iVar1;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)(iVar1 + *this) = 0;
        return (CSimpleStringT<char,0> *)this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  ATL::CSimpleStringT<char,0>::Empty((CSimpleStringT<char,0> *)this);
  return (CSimpleStringT<char,0> *)this;
}

