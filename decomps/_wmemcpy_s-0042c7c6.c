
/* Library Function - Single Match
    _wmemcpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wmemcpy_s(wchar_t *_S1,rsize_t _N1,wchar_t *_S2,rsize_t _N)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_N == 0) {
LAB_0042c7d3:
    eVar1 = 0;
  }
  else {
    if (_S1 == (wchar_t *)0x0) {
LAB_0042c7dd:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_S2 != (wchar_t *)0x0) && (_N <= _N1)) {
        FID_conflict__memcpy(_S1,_S2,_N * 2);
        goto LAB_0042c7d3;
      }
      _wmemset(_S1,L'\0',_N1);
      if (_S2 == (wchar_t *)0x0) goto LAB_0042c7dd;
      if (_N <= _N1) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    FUN_00433a30();
  }
  return eVar1;
}

