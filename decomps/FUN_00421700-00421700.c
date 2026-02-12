
/* WARNING: Removing unreachable block (ram,0x004217e3) */

void __cdecl FUN_00421700(LPWSTR param_1,int param_2)

{
  int iVar1;
  hostent *phVar2;
  char *pcVar3;
  DWORD dwErrCode;
  int iVar4;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (LPWSTR)0x0) || (param_2 == 0)) {
    dwErrCode = 0x57;
  }
  else {
    local_10c[0] = '\0';
    _memset(local_10c + 1,0,0x103);
    iVar1 = gethostname(local_10c,0x104);
    if (iVar1 != -1) {
      phVar2 = gethostbyname(local_10c);
      if (phVar2 != (hostent *)0x0) {
        pcVar3 = local_10c;
        iVar4 = 0x104;
        iVar1 = (int)phVar2->h_name - (int)pcVar3;
        do {
          if ((iVar4 == -0x7ffffefa) || (pcVar3[iVar1] == '\0')) {
            if (iVar4 != 0) goto LAB_004217ae;
            break;
          }
          *pcVar3 = pcVar3[iVar1];
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar3 = pcVar3 + -1;
LAB_004217ae:
        *pcVar3 = '\0';
      }
      FUN_00421010(0x104,local_10c);
      MultiByteToWideChar(0xfde9,0,local_10c,-1,param_1,param_2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    dwErrCode = WSAGetLastError();
  }
  SetLastError(dwErrCode);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

