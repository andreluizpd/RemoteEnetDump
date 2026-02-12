
void __thiscall FUN_0040a570(void *this,char *param_1,int *param_2)

{
  int iVar1;
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    _sprintf(local_1c,"0x%p",param_2);
                    /* WARNING: Load size is inaccurate */
    iVar1 = (**(code **)(*this + 0x4c))(param_1,local_1c);
    if ((-1 < iVar1) && (param_2 != (int *)0x0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

