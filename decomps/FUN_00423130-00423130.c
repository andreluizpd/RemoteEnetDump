
void __thiscall FUN_00423130(void *this,int *param_1)

{
  char *_Str2;
  char *_Str1;
  
  _Str2 = (char *)(**(code **)(*param_1 + 0xc))();
                    /* WARNING: Load size is inaccurate */
  _Str1 = (char *)(**(code **)(*this + 0xc))();
  __stricmp(_Str1,_Str2);
  return;
}

