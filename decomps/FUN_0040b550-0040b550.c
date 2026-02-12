
void __thiscall FUN_0040b550(void *this,char *param_1)

{
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00409b30(local_30,0x28,"%f");
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x164))(param_1,local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

