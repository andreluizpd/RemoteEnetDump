
void __thiscall FUN_0040ac60(void *this,undefined4 param_1,int param_2)

{
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  __itoa(param_2,local_30,10);
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x168))(param_1,local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

