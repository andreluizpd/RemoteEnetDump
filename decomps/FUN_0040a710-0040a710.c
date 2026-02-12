
void __thiscall FUN_0040a710(void *this,short *param_1,undefined4 param_2)

{
  WCHAR local_58 [40];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    wsprintfW(local_58,L"0x%p",param_2);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x48))(param_1,local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

