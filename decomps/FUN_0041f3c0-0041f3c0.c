
void __cdecl FUN_0041f3c0(undefined1 *param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined1 local_78 [112];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (param_4 != 0) {
    _memset(param_3,0,param_4);
    if (0x20 < param_4) {
      param_4 = 0x20;
    }
    FUN_0041f440((int)local_78);
    FUN_0041f6c0(local_78,param_1,param_2);
    FUN_0041fa50(local_78);
    FID_conflict__memcpy(param_3,local_78,param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

