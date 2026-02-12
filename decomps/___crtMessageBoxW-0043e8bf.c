
/* Library Function - Single Match
    ___crtMessageBoxW
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_28 [4];
  LPCWSTR local_24;
  LPCWSTR local_20;
  PVOID local_1c;
  int local_18;
  undefined1 local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_24 = _LpText;
  local_20 = _LpCaption;
  local_1c = (PVOID)FUN_00431e4e();
  local_18 = 0;
  if (DAT_0045a6f8 == (PVOID)0x0) {
    hModule = LoadLibraryW(L"USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxW"), pFVar1 == (FARPROC)0x0)) goto LAB_0043ea1c;
    DAT_0045a6f8 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0045a6fc = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_0045a700 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_0045a708 = EncodePointer(pFVar1);
    if (DAT_0045a708 != (PVOID)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_0045a704 = EncodePointer(pFVar1);
    }
  }
  if ((DAT_0045a704 == local_1c) || (DAT_0045a708 == local_1c)) {
LAB_0043e9cb:
    if ((((DAT_0045a6fc != local_1c) &&
         (pcVar2 = (code *)DecodePointer(DAT_0045a6fc), pcVar2 != (code *)0x0)) &&
        (local_18 = (*pcVar2)(), local_18 != 0)) &&
       ((DAT_0045a700 != local_1c &&
        (pcVar2 = (code *)DecodePointer(DAT_0045a700), pcVar2 != (code *)0x0)))) {
      local_18 = (*pcVar2)(local_18);
    }
  }
  else {
    pcVar2 = (code *)DecodePointer(DAT_0045a704);
    pcVar3 = (code *)DecodePointer(DAT_0045a708);
    if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) ||
       (((iVar4 = (*pcVar2)(), iVar4 != 0 &&
         (iVar4 = (*pcVar3)(iVar4,1,local_14,0xc,local_28), iVar4 != 0)) && ((local_c & 1) != 0))))
    goto LAB_0043e9cb;
    _UType = _UType | 0x200000;
  }
  pcVar2 = (code *)DecodePointer(DAT_0045a6f8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_18,local_24,local_20,_UType);
  }
LAB_0043ea1c:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

