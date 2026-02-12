
void __thiscall
FUN_00421b00(void *this,WCHAR *param_1,WCHAR *param_2,int param_3,int param_4,byte param_5)

{
  void *this_00;
  bool bVar1;
  LONG LVar2;
  SOCKET s;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  char local_90 [7];
  char local_89;
  sockaddr local_88 [8];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  this_00 = (void *)((int)this + 0x14);
  FUN_00404460(this_00,PTR_s_VKkc0KbC6UISm1nOUxIM_A_00457274);
  LVar2 = InterlockedCompareExchange((LONG *)this,-1,-1);
  local_89 = LVar2 != -1;
  bVar1 = FUN_00401f30((int)this + 4);
  if (bVar1) {
    FUN_00404550((void *)((int)this + 8),PTR_s_mzRkDcUhfbI_0045726c," %d, socket = %d");
  }
  if (local_89 != '\0') {
    SetLastError(5);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  s = WSASocketW(param_3,param_4,0,0,0,1);
  WSAGetLastError();
  FUN_00404500(this_00,PTR_s_VKkc0KbC6UISm1nOUxIM_A_00457274," socket=%d, %d");
  if (s != 0xffffffff) {
    if ((param_5 & 4) != 0) {
      local_90[0] = '\x01';
      local_90[1] = '\0';
      local_90[2] = '\0';
      local_90[3] = '\0';
      iVar3 = setsockopt(s,0xffff,4,local_90,4);
      if (iVar3 == -1) goto LAB_00421d0c;
    }
    if (((param_4 == 2) && ((param_5 & 0x20) != 0)) && (param_3 == 2)) {
      local_90[0] = '\x01';
      local_90[1] = '\0';
      local_90[2] = '\0';
      local_90[3] = '\0';
      iVar3 = setsockopt(s,0xffff,0x20,local_90,4);
      if (iVar3 == -1) goto LAB_00421d0c;
    }
    _memset(local_88,0,0x80);
    FUN_00421840(param_1,param_2,(short)param_3,local_88);
    uVar4 = FUN_00421050(local_88,&DAT_004593a8);
    local_89 = (char)uVar4 == '\0';
    if ((bool)local_89) {
      iVar3 = bind(s,local_88,((local_88[0].sa_family != 2) - 1 & 0xffffff90) + 0x80);
      if (iVar3 != -1) {
        if (param_4 == 1) {
          local_90[0] = '\0';
          local_90[1] = '\0';
          local_90[2] = '\0';
          local_90[3] = '\0';
          setsockopt(s,0xffff,0x80,local_90,4);
          iVar3 = listen(s,0x7fffffff);
          if (iVar3 == -1) {
LAB_00421d0c:
            DVar5 = WSAGetLastError();
            SetLastError(DVar5);
            closesocket(s);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
        *(SOCKET *)this = s;
        goto LAB_00421d37;
      }
    }
    DVar5 = WSAGetLastError();
    FUN_00404500((void *)((int)this + 0x38),PTR_s_VKkc0KbC6UISm1nOUxIM_A_00457274,
                 " %d CreateFrom, %d bind");
    SetLastError(DVar5);
    closesocket(s);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00421d37:
  FUN_00404550(this_00,PTR_s_VKkc0KbC6UISm1nOUxIM_A_00457274," %d, socket=%d");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

