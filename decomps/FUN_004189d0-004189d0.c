
void __thiscall FUN_004189d0(void *this,LPCWSTR param_1)

{
  HMODULE hModule;
  
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    FUN_00418880(*(void **)((int)this + 8),*this,param_1);
    return;
  }
  if (DAT_00459090 == '\0') {
    hModule = GetModuleHandleW(L"Advapi32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0045908c = GetProcAddress(hModule,"RegDeleteKeyExW");
    }
    DAT_00459090 = '\x01';
  }
  if (DAT_0045908c != (FARPROC)0x0) {
                    /* WARNING: Load size is inaccurate */
    (*DAT_0045908c)(*this,param_1,*(undefined4 *)((int)this + 4),0);
    return;
  }
                    /* WARNING: Load size is inaccurate */
  RegDeleteKeyW(*this,param_1);
  return;
}

