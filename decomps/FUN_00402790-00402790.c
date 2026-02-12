
void __thiscall FUN_00402790(void *this,LPCWSTR param_1,UINT param_2)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  size_t cbMultiByte;
  bool bVar4;
  
  if (param_1 == (LPCWSTR)0x0) {
    *(undefined4 *)this = 0;
    return;
  }
  iVar1 = lstrlenW(param_1);
  iVar1 = iVar1 + 1;
  FUN_004020b0((int *)this,iVar1 * 4,(void *)((int)this + 4),0x104);
                    /* WARNING: Load size is inaccurate */
  iVar2 = WideCharToMultiByte(param_2,0,param_1,iVar1,*this,iVar1 * 4,(LPCSTR)0x0,(LPBOOL)0x0);
  bVar4 = iVar2 == 0;
  if (bVar4) {
    DVar3 = GetLastError();
    if (DVar3 == 0x7a) {
      cbMultiByte = WideCharToMultiByte(param_2,0,param_1,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                       );
      FUN_004020b0((int *)this,cbMultiByte,(void *)((int)this + 4),0x104);
                    /* WARNING: Load size is inaccurate */
      iVar1 = WideCharToMultiByte(param_2,0,param_1,iVar1,*this,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      bVar4 = iVar1 == 0;
    }
    if (bVar4) {
      FUN_00401780();
    }
  }
  return;
}

