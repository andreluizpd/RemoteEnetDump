
/* Library Function - Single Match
    __i64tow
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __i64tow(longlong _Val,wchar_t *_DstBuf,int _Radix)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  iVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    iVar1 = 1;
  }
  x64tow(in_ECX,in_EDX,(int)_Val,_Val._4_4_,_Radix,iVar1);
  return _DstBuf;
}

