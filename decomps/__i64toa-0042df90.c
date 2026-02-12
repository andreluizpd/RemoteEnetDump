
/* Library Function - Single Match
    __i64toa
   
   Library: Visual Studio 2010 Release */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  iVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    iVar1 = 1;
  }
  x64toa(in_ECX,in_EDX,(int)_Val,_Val._4_4_,_Radix,iVar1);
  return _DstBuf;
}

