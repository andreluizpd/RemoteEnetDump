
/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2010 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0045a728)) {
      return (int)*(char *)((&DAT_0045a740)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00433a30();
  }
  return 0;
}

