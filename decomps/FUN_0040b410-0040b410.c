
void __thiscall FUN_0040b410(void *this,undefined4 param_1)

{
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  FUN_00409b30(local_30,0x28,"%f");
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x168))(param_1,local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

