
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wsetargv
   
   Library: Visual Studio 2010 Release */

int __cdecl __wsetargv(void)

{
  uint _Size;
  undefined4 *puVar1;
  int iVar2;
  uint in_ECX;
  uint local_8;
  
  _DAT_0045a550 = 0;
  local_8 = in_ECX;
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_0045a348,0x104);
  _DAT_0045a244 = &DAT_0045a348;
  wparse_cmdline((undefined4 *)0x0,(int *)&local_8);
  if ((((local_8 < 0x3fffffff) && (in_ECX < 0x7fffffff)) &&
      (_Size = (in_ECX + local_8 * 2) * 2, in_ECX * 2 <= _Size)) &&
     (puVar1 = (undefined4 *)__malloc_crt(_Size), puVar1 != (undefined4 *)0x0)) {
    wparse_cmdline(puVar1,(int *)&local_8);
    _DAT_0045a224 = local_8 - 1;
    iVar2 = 0;
    _DAT_0045a22c = puVar1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

