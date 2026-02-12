
void __thiscall FUN_0040ae70(void *this,char *param_1,undefined4 param_2)

{
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    _sprintf(local_1c,"0x%p",param_2);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x164))(param_1,local_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

