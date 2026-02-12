
int __thiscall FUN_00423160(void *this,int *param_1)

{
  int iVar1;
  char *_Str2;
  char *_Str1;
  
  iVar1 = -1;
  if (param_1 != (int *)0x0) {
    _Str2 = (char *)(**(code **)(*param_1 + 0xc))();
                    /* WARNING: Load size is inaccurate */
    _Str1 = (char *)(**(code **)(*this + 0xc))();
    iVar1 = __stricmp(_Str1,_Str2);
  }
  return iVar1;
}

