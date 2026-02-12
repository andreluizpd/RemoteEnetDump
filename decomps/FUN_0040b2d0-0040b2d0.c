
void __thiscall FUN_0040b2d0(void *this,short *param_1)

{
  wchar_t local_58 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_00409b90(local_58,0x50,L"%f");
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x48))(param_1,local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

