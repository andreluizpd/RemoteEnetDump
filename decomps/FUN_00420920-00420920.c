
void __thiscall FUN_00420920(void *this,wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  undefined4 *puVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  int local_474;
  int local_470;
  undefined4 local_46c [3];
  LPCWSTR local_460 [136];
  undefined4 local_240 [3];
  wchar_t *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446a2c;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_470 = param_2;
  FUN_00405160((undefined *)param_1);
  FUN_004044b0(&DAT_00459110,PTR_s_3U8nCikXIEU_00457230," %d, %S");
  pwVar2 = L"Global\\";
  if (DAT_004571fc == '\0') {
    pwVar2 = L"Local\\";
  }
  FUN_00405ba0(local_240,pwVar2);
  local_8 = 0;
  if (param_1 != (wchar_t *)0x0) {
    DVar5 = (*param_1 != L'\0') - 1 & 0x80070057;
    if ((int)DVar5 < 0) goto LAB_00420c2a;
    local_474 = 0;
    pwVar2 = FUN_00428ae0(param_1,local_234[0],-1);
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = param_1;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      FUN_00403850(local_234,param_1,(int)pwVar2 - (int)(param_1 + 1) >> 1);
    }
    else {
      FUN_00414350(local_240,param_1);
    }
    if (local_470 == 0) {
      DVar5 = FUN_00420650(param_1,&local_470);
      if (local_470 == 0) {
        if (-1 < (int)DVar5) {
          DVar5 = 0x800705b6;
        }
        goto LAB_00420c2a;
      }
      if ((int)DVar5 < 0) goto LAB_00420c2a;
      local_474 = 4;
    }
    hFileMappingObject = OpenFileMappingW(0xf001f,0,local_234[0]);
    if ((hFileMappingObject == (HANDLE)0x0) || (hFileMappingObject == (HANDLE)0xffffffff)) {
      DVar5 = GetLastError();
      *(DWORD *)((int)this + 0x28) = DVar5;
      if (0 < (int)DVar5) {
        DVar5 = DVar5 & 0xffff | 0x80070000;
      }
      goto LAB_00420c2a;
    }
    lpBaseAddress = MapViewOfFile(hFileMappingObject,0xf001f,0,0,local_470 + local_474);
    if (lpBaseAddress != (LPVOID)0x0) {
      FUN_0041fd60(local_46c,(int)local_240);
      local_8._0_1_ = 1;
      FUN_00403e20(local_460,L".Lock");
      puVar3 = (undefined4 *)FUN_0042dcce(4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        local_8._0_1_ = 1;
      }
      pvVar4 = OpenMutexW(0x100000,0,local_460[0]);
      *puVar3 = pvVar4;
      if (pvVar4 == (HANDLE)0x0) {
        local_8._0_1_ = 1;
        if ((HANDLE)*puVar3 != (HANDLE)0x0) {
          CloseHandle((HANDLE)*puVar3);
          *puVar3 = 0;
        }
        FUN_0042bc24(puVar3);
        DVar5 = GetLastError();
        *(DWORD *)((int)this + 0x28) = DVar5;
        if (0 < (int)DVar5) {
          DVar5 = DVar5 & 0xffff | 0x80070000;
        }
        UnmapViewOfFile(lpBaseAddress);
        CloseHandle(hFileMappingObject);
        if (-1 < (int)DVar5) {
          DVar5 = 0x80004003;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004030c0(local_46c);
          goto LAB_00420c2a;
        }
      }
      else {
        *(int *)((int)this + 8) = local_470;
        DVar5 = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        FUN_0041feb0((void *)((int)this + 0x14),local_234);
        *(HANDLE *)((int)this + 0xc) = hFileMappingObject;
        *(undefined4 **)((int)this + 0x18) = puVar3;
        *(LPVOID *)((int)this + 4) = lpBaseAddress;
        *(LPVOID *)((int)this + 0x10) = lpBaseAddress;
        *(int *)((int)this + 0x2c) = local_474;
        if (local_474 != 0) {
          *(int *)((int)this + 4) = (int)lpBaseAddress + local_474;
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004030c0(local_46c);
      goto LAB_00420c2a;
    }
    DVar5 = GetLastError();
    *(DWORD *)((int)this + 0x28) = DVar5;
    if (0 < (int)DVar5) {
      DVar5 = DVar5 & 0xffff | 0x80070000;
    }
    CloseHandle(hFileMappingObject);
    if ((int)DVar5 < 0) goto LAB_00420c2a;
  }
  DVar5 = 0x80004003;
LAB_00420c2a:
  FUN_004045a0(&DAT_00459110,PTR_s_3U8nCikXIEU_00457230,DVar5,
               ", %S, %S, %d, map=%p, buf=%p, %p, mutex=%p, size=%d, adjust=%d, locks=%d");
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

