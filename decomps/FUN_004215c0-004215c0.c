
void __cdecl FUN_004215c0(LPWSTR param_1,uint param_2,short *param_3)

{
  short *psVar1;
  int iVar2;
  CHAR local_10c;
  undefined1 local_10b [259];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (LPWSTR)0x0) && (8 < param_2)) {
    local_10c = '\0';
    _memset(local_10b,0,0x103);
    psVar1 = param_3 + 2;
    if (*param_3 != 2) {
      psVar1 = param_3 + 4;
    }
    iVar2 = inet_ntop(*param_3,psVar1,&local_10c,0x104);
    if (iVar2 != 0) {
      MultiByteToWideChar(0xfde9,0,&local_10c,-1,param_1,param_2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  SetLastError(0x7a);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

