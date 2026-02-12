
/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_00459ee4 = GetProcAddress(hModule,"FlsAlloc");
  DAT_00459ee8 = GetProcAddress(hModule,"FlsGetValue");
  DAT_00459eec = GetProcAddress(hModule,"FlsSetValue");
  DAT_00459ef0 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_00459ee4 == (FARPROC)0x0) || (DAT_00459ee8 == (FARPROC)0x0)) ||
      (DAT_00459eec == (FARPROC)0x0)) || (DAT_00459ef0 == (FARPROC)0x0)) {
    DAT_00459ee8 = TlsGetValue_exref;
    DAT_00459ee4 = (FARPROC)&LAB_00431e57;
    DAT_00459eec = TlsSetValue_exref;
    DAT_00459ef0 = TlsFree_exref;
  }
  DAT_00457808 = TlsAlloc();
  if ((DAT_00457808 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_00457808,DAT_00459ee8), BVar1 != 0))
  {
    __init_pointers();
    DAT_00459ee4 = (FARPROC)EncodePointer(DAT_00459ee4);
    DAT_00459ee8 = (FARPROC)EncodePointer(DAT_00459ee8);
    DAT_00459eec = (FARPROC)EncodePointer(DAT_00459eec);
    DAT_00459ef0 = (FARPROC)EncodePointer(DAT_00459ef0);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)DecodePointer(DAT_00459ee4);
      DAT_00457804 = (*pcVar3)(pcVar5);
      if ((DAT_00457804 != -1) && (_Ptd = (_ptiddata)__calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_00457804;
        p_Var6 = _Ptd;
        pcVar3 = (code *)DecodePointer(DAT_00459eec);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

