
/* Library Function - Single Match
    __wsetenvp
   
   Library: Visual Studio 2010 Release */

int __cdecl __wsetenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Dst;
  errno_t eVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  iVar5 = 0;
  pwVar4 = DAT_004598a4;
  if (DAT_004598a4 == (wchar_t *)0x0) {
    iVar5 = -1;
  }
  else {
    for (; *pwVar4 != L'\0'; pwVar4 = pwVar4 + sVar2 + 1) {
      if (*pwVar4 != L'=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _wcslen(pwVar4);
    }
    puVar1 = (undefined4 *)__calloc_crt(iVar5 + 1,4);
    pwVar4 = DAT_004598a4;
    DAT_0045a238 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      iVar5 = -1;
    }
    else {
      for (; *pwVar4 != L'\0'; pwVar4 = pwVar4 + sVar2) {
        sVar2 = _wcslen(pwVar4);
        sVar2 = sVar2 + 1;
        if (*pwVar4 != L'=') {
          _Dst = (wchar_t *)__calloc_crt(sVar2,2);
          *puVar1 = _Dst;
          if (_Dst == (wchar_t *)0x0) {
            _free(DAT_0045a238);
            DAT_0045a238 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _wcscpy_s(_Dst,sVar2,pwVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
      }
      _free(DAT_004598a4);
      DAT_004598a4 = (wchar_t *)0x0;
      *puVar1 = 0;
      DAT_0045b864 = 1;
      iVar5 = 0;
    }
  }
  return iVar5;
}

