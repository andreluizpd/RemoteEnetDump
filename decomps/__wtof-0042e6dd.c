
/* Library Function - Single Match
    __wtof
   
   Library: Visual Studio 2010 Release */

double __cdecl __wtof(wchar_t *_Str)

{
  double dVar1;
  
  dVar1 = __wtof_l(_Str,(_locale_t)0x0);
  return dVar1;
}

