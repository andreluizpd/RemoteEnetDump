
/* Library Function - Single Match
    __itow
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __itow(int _Value,wchar_t *_Dest,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  xtow(_Radix,iVar1);
  return _Dest;
}

