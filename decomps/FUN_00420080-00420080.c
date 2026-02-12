
void __thiscall FUN_00420080(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1;
  FUN_00403710(param_1,L"D:(D;OICI;GA;;;BG)(A;OICI;GA;;;SY)(A;OICI;GA;;;BA)(A;OICI;GA;;;AU)",0x42);
  if (0 < *(int *)(*(LPCWSTR *)((int)this + 0x24) + -6)) {
    param_1 = (void *)0x0;
    iVar2 = FUN_0041ea60(*(LPCWSTR *)((int)this + 0x24),(LPCWSTR)0x0,&param_1);
    if (-1 < iVar2) {
      if (param_1 == (void *)0x0) {
        return;
      }
      FUN_0041ff20(pvVar1,L"(A;OICI;GA;;;%s)");
    }
    if (param_1 != (void *)0x0) {
      LocalFree(param_1);
    }
  }
  return;
}

