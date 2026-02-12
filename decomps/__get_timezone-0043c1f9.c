
/* Library Function - Multiple Matches With Different Base Names
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  int *piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00433a30();
    return 0x16;
  }
  *_Timezone = DAT_00458390;
  return 0;
}

