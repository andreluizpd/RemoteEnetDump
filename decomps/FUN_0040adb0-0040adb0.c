
void __thiscall FUN_0040adb0(void *this,char *param_1,int param_2)

{
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    __itoa(param_2,local_30,10);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x164))(param_1,local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

