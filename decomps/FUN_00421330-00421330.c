
void __thiscall FUN_00421330(void *this,char *param_1,int param_2,sockaddr *param_3,uint param_4)

{
  SOCKET s;
  sockaddr *from;
  bool bVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  timeval *timeout;
  timeval local_118;
  sockaddr *local_110;
  fd_set local_10c;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_110 = param_3;
  LVar2 = InterlockedCompareExchange((LONG *)this,-1,-1);
  bVar1 = FUN_00401f30((int)this + 4);
  if (bVar1) {
    FUN_00404550((void *)((int)this + 8),PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  if (((LVar2 != -1) && (param_1 != (char *)0x0)) && (param_2 != 0)) {
    local_10c.fd_count = 0;
    _memset(local_10c.fd_array,0,0x100);
    timeout = (timeval *)0x0;
    if (param_4 != 0xffffffff) {
      local_118.tv_sec = param_4 / 1000;
      local_118.tv_usec = (param_4 % 1000) * 1000;
      timeout = &local_118;
    }
                    /* WARNING: Load size is inaccurate */
    s = *this;
    uVar3 = 0;
    if (local_10c.fd_count != 0) {
      do {
        if (local_10c.fd_array[uVar3] == s) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_10c.fd_count);
    }
    if ((uVar3 == local_10c.fd_count) && (local_10c.fd_count < 0x40)) {
      local_10c.fd_array[uVar3] = s;
      local_10c.fd_count = local_10c.fd_count + 1;
    }
    if ((timeout == (timeval *)0x0) ||
       (iVar4 = select(s,&local_10c,(fd_set *)0x0,(fd_set *)0x0,timeout), 0 < iVar4)) {
      from = local_110;
      if (local_110 == (sockaddr *)0x0) {
        iVar4 = recv(s,param_1,param_2,0);
      }
      else {
        local_110 = (sockaddr *)0x80;
        iVar4 = recvfrom(s,param_1,param_2,0,from,(int *)&local_110);
      }
      if (iVar4 == 0) {
        WSASetLastError(0x2746);
        DVar5 = WSAGetLastError();
        SetLastError(DVar5);
        goto LAB_004214bc;
      }
    }
    if (iVar4 == -1) {
      DVar5 = WSAGetLastError();
      SetLastError(DVar5);
    }
  }
LAB_004214bc:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

