
/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2010 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_004598a8;
      DAT_004598a8 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_004598a8;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00433a30();
  return -1;
}

