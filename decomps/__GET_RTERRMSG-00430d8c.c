
/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_0044dbf0)[uVar1 * 2]) {
      return *(wchar_t **)(&UNK_0044dbf4 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return (wchar_t *)0x0;
}

