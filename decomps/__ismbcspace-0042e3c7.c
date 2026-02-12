
/* Library Function - Single Match
    __ismbcspace
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbcspace(uint _Ch)

{
  int iVar1;
  
  iVar1 = __ismbcspace_l(_Ch,(_locale_t)0x0);
  return iVar1;
}

