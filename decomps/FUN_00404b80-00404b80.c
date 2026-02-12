
undefined4 __thiscall FUN_00404b80(void *this,HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  ushort *puVar2;
  int cbMultiByte;
  
  pHVar1 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if (pHVar1 != (HRSRC)0x0) {
    puVar2 = (ushort *)FUN_00401e40(param_1,pHVar1,param_2);
    if (puVar2 != (ushort *)0x0) {
      cbMultiByte = WideCharToMultiByte(3,0,(LPCWSTR)(puVar2 + 1),(uint)*puVar2,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
      if (-1 < cbMultiByte) {
                    /* WARNING: Load size is inaccurate */
        if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - cbMultiByte) < 0) {
          FUN_00402d90(this,cbMultiByte);
        }
                    /* WARNING: Load size is inaccurate */
        WideCharToMultiByte(3,0,(LPCWSTR)(puVar2 + 1),(uint)*puVar2,*this,cbMultiByte,(LPCSTR)0x0,
                            (LPBOOL)0x0);
                    /* WARNING: Load size is inaccurate */
        if (cbMultiByte <= *(int *)(*this + -8)) {
          *(int *)(*this + -0xc) = cbMultiByte;
                    /* WARNING: Load size is inaccurate */
          *(undefined1 *)(cbMultiByte + *this) = 0;
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  return 0;
}

