
void __thiscall FUN_0040ad00(void *this,undefined4 param_1,undefined4 param_2)

{
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  _sprintf(local_1c,"0x%p",param_2);
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x168))(param_1,local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

