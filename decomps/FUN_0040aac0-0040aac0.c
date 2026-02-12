
void __thiscall FUN_0040aac0(void *this,short *param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t local_58 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    __i64tow(CONCAT44(param_3,param_2),local_58,10);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x80))(param_1,local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

