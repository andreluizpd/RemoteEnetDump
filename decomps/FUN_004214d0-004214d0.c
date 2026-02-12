
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004214d0(WORD param_1)

{
  WSADATA local_198;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_198.wVersion = 0;
  _memset(&local_198.wHighVersion,0,0x18e);
  _DAT_0045725c = WSAStartup(param_1,&local_198);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

