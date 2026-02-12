
void __thiscall FUN_00402650(void *this,LPCSTR param_1,UINT param_2)

{
  size_t cbMultiByte;
  int iVar1;
  DWORD DVar2;
  size_t cchWideChar;
  bool bVar3;
  
  if (param_1 == (LPCSTR)0x0) {
    *(undefined4 *)this = 0;
    return;
  }
  iVar1 = lstrlenA(param_1);
  cbMultiByte = iVar1 + 1;
  FUN_004023f0((int *)this,cbMultiByte,(void *)((int)this + 4),10);
                    /* WARNING: Load size is inaccurate */
  iVar1 = MultiByteToWideChar(param_2,0,param_1,cbMultiByte,*this,cbMultiByte);
  bVar3 = iVar1 == 0;
  if (bVar3) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      cchWideChar = MultiByteToWideChar(param_2,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
      FUN_004023f0((int *)this,cchWideChar,(void *)((int)this + 4),10);
                    /* WARNING: Load size is inaccurate */
      iVar1 = MultiByteToWideChar(param_2,0,param_1,cbMultiByte,*this,cchWideChar);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      FUN_00401780();
    }
  }
  return;
}

