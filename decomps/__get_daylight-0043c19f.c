
/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  int *piVar1;
  
  if (_Daylight == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    return 0x16;
  }
  *_Daylight = DAT_00458394;
  return 0;
}

