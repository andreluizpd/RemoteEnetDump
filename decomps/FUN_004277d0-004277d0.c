
void __thiscall
FUN_004277d0(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
            int param_7)

{
  __time64_t _Var1;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (param_1 < 0x76c) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if (0xb < param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if (0x1e < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if (0x17 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if (0x3b < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  if (0x3b < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  local_2c.tm_year = param_1 + -0x76c;
  local_2c.tm_sec = param_6;
  local_2c.tm_min = param_5;
  local_2c.tm_mon = param_2 + -1;
  local_2c.tm_hour = param_4;
  local_2c.tm_mday = param_3;
  local_2c.tm_isdst = param_7;
  _Var1 = __mktime64(&local_2c);
  *(__time64_t *)this = _Var1;
  if (_Var1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070057);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

