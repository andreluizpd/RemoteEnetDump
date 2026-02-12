
void __thiscall FUN_0040af40(void *this,short *param_1,int param_2)

{
  wchar_t local_58 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    __itow(param_2,local_58,10);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x160))(param_1,local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

