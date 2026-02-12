
/* Library Function - Single Match
    __wcstoi64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __wcstoi64(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_0045a28c == 0) {
    ppuVar2 = &PTR_DAT_0045824c;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = wcstoxq((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return _Var1;
}

