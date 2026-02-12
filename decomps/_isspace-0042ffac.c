
/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2010 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_0045a28c == 0) {
    return *(ushort *)(PTR_DAT_00458238 + _C * 2) & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}

