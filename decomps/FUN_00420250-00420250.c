
void __thiscall FUN_00420250(void *this,int param_1,char param_2,OLECHAR *param_3)

{
  OLECHAR OVar1;
  int iVar2;
  wchar_t *pwVar3;
  OLECHAR *pOVar4;
  HANDLE pvVar5;
  uint uVar6;
  LPVOID lpBaseAddress;
  undefined4 *puVar7;
  LPSECURITY_ATTRIBUTES p_Var8;
  uint uVar9;
  _SECURITY_ATTRIBUTES local_510;
  undefined4 *local_504;
  HANDLE local_500;
  undefined4 local_4fc [3];
  undefined1 local_4f0 [544];
  undefined4 local_2d0 [3];
  wchar_t *local_2c4 [136];
  GUID local_a4;
  OLECHAR local_94;
  undefined1 local_92 [126];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044696c;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00405160((undefined *)param_3);
  FUN_004044b0(&DAT_00459110,PTR_s_CzrQOMFo5yN63poLym9HIw_00457228," %d, %d, %S");
  local_510.lpSecurityDescriptor = (HLOCAL)0x0;
  local_510.bInheritHandle = 0;
  p_Var8 = (LPSECURITY_ATTRIBUTES)0x0;
  local_510.nLength = 0xc;
  iVar2 = FUN_004200f0(this,(int)&local_510);
  if ((-1 < iVar2) && (local_510.lpSecurityDescriptor != (HLOCAL)0x0)) {
    p_Var8 = &local_510;
  }
  pwVar3 = L"Global\\";
  if (DAT_004571fc == '\0') {
    pwVar3 = L"Local\\";
  }
  FUN_00405ba0(local_2d0,pwVar3);
  local_8 = 0;
  if (param_3 == (OLECHAR *)0x0) {
    CoCreateGuid(&local_a4);
    StringFromGUID2(&local_a4,&local_94,0x40);
    pOVar4 = &local_94;
    do {
      OVar1 = *pOVar4;
      pOVar4 = pOVar4 + 1;
    } while (OVar1 != L'\0');
    iVar2 = (int)pOVar4 - (int)local_92;
    param_3 = &local_94;
LAB_00420395:
    FUN_00403850(local_2c4,param_3,iVar2 >> 1);
  }
  else {
    pwVar3 = FUN_00428ae0(param_3,local_2c4[0],-1);
    if (pwVar3 == (wchar_t *)0x0) {
      pOVar4 = param_3;
      do {
        OVar1 = *pOVar4;
        pOVar4 = pOVar4 + 1;
      } while (OVar1 != L'\0');
      iVar2 = (int)pOVar4 - (int)(param_3 + 1);
      goto LAB_00420395;
    }
    FUN_00414350(local_2d0,param_3);
  }
  FUN_0041fd60(local_4fc,(int)local_2d0);
  local_8._0_1_ = 1;
  FUN_00403850(local_4f0,L".Lock",5);
  uVar9 = -(uint)(param_2 != '\0') & 4;
  pvVar5 = CreateFileMappingW((HANDLE)0xffffffff,p_Var8,4,0,uVar9 + param_1,local_2c4[0]);
  local_500 = pvVar5;
  uVar6 = GetLastError();
  if (uVar6 == 0) {
    if ((pvVar5 == (HANDLE)0x0) || (pvVar5 == (HANDLE)0xffffffff)) {
      *(undefined4 *)((int)this + 0x28) = 0;
      uVar6 = 0x80004005;
    }
    else {
      p_Var8 = (LPSECURITY_ATTRIBUTES)0x0;
      lpBaseAddress = MapViewOfFile(pvVar5,0xf001f,0,0,0);
      if (lpBaseAddress == (LPVOID)0x0) {
        uVar6 = GetLastError();
        *(uint *)((int)this + 0x28) = uVar6;
        if (0 < (int)uVar6) {
          uVar6 = uVar6 & 0xffff | 0x80070000;
        }
        CloseHandle(local_500);
      }
      else {
        puVar7 = (undefined4 *)FUN_0042dcce(4);
        local_504 = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          uVar6 = 0x8007000e;
          *(undefined4 *)((int)this + 0x28) = 8;
        }
        else {
          *puVar7 = 0;
          local_8._0_1_ = 1;
          pvVar5 = CreateMutexW(p_Var8,(BOOL)&local_510,(LPCWSTR)0x0);
          *puVar7 = pvVar5;
          if (pvVar5 != (HANDLE)0x0) {
            uVar6 = 0;
            *(undefined4 *)((int)this + 0x1c) = 1;
            *(int *)((int)this + 8) = param_1;
            FUN_0041feb0((void *)((int)this + 0x14),local_2c4);
            *(undefined4 **)((int)this + 0x18) = local_504;
            *(HANDLE *)((int)this + 0xc) = local_500;
            *(uint *)((int)this + 0x2c) = uVar9;
            *(LPVOID *)((int)this + 4) = lpBaseAddress;
            *(LPVOID *)((int)this + 0x10) = lpBaseAddress;
            iVar2 = FUN_0041fb40((int)this);
            if (iVar2 != 0) {
              **(int **)((int)this + 0x10) = param_1;
              FUN_0041fb60((int)this);
              *(uint *)((int)this + 4) = *(int *)((int)this + 0x10) + uVar9;
            }
            goto LAB_004205a4;
          }
          uVar6 = GetLastError();
          puVar7 = local_504;
          *(uint *)((int)this + 0x28) = uVar6;
          if (0 < (int)uVar6) {
            uVar6 = uVar6 & 0xffff | 0x80070000;
          }
          if (-1 < (int)uVar6) {
            uVar6 = 0x80004003;
          }
          local_8._0_1_ = 1;
          if ((HANDLE)*local_504 != (HANDLE)0x0) {
            CloseHandle((HANDLE)*local_504);
            *puVar7 = 0;
          }
          FUN_0042bc24(puVar7);
        }
        UnmapViewOfFile(lpBaseAddress);
        CloseHandle(local_500);
      }
    }
  }
  else if (0 < (int)uVar6) {
    uVar6 = uVar6 & 0xffff | 0x80070000;
  }
LAB_004205a4:
  if (local_510.lpSecurityDescriptor != (HLOCAL)0x0) {
    LocalFree(local_510.lpSecurityDescriptor);
  }
  FUN_004045a0(&DAT_00459110,PTR_s_CzrQOMFo5yN63poLym9HIw_00457228,uVar6,
               ", %S, %S, %d, map=%p, buf=%p, %p, mutex=%p, size=%d (%d, overhead=%d), locks=%d");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004030c0(local_4fc);
  local_8 = 0xffffffff;
  FUN_004030c0(local_2d0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

