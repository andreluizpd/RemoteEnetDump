
void __thiscall FUN_00419950(void *this,LPCWSTR param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  WCHAR WVar1;
  undefined2 *puVar2;
  uint uVar3;
  wchar_t *pwVar4;
  LPWSTR pWVar5;
  int iVar6;
  void *pvVar7;
  LPCWSTR pWVar8;
  rsize_t rVar9;
  LPCWSTR pWVar10;
  WCHAR *pWVar11;
  code *pcVar12;
  wchar_t *local_7c;
  LPCWSTR local_78;
  undefined4 *local_74;
  undefined4 local_70;
  int local_6c;
  undefined2 *local_68;
  int local_64;
  char local_5d;
  undefined4 local_5c;
  char local_56;
  char local_55;
  wchar_t local_54 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445d88;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_74 = param_2;
  local_14 = uVar3;
  if ((param_1 != (LPCWSTR)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    local_6c = lstrlenW(param_1);
    local_6c = local_6c * 2;
    if (local_6c < 100) {
      local_6c = 1000;
    }
    local_70 = 0;
    if (local_6c < 0) {
      local_68 = (undefined2 *)0x0;
    }
    else {
      local_68 = (undefined2 *)CoTaskMemAlloc(local_6c * 2);
    }
    if (local_68 != (undefined2 *)0x0) {
      *local_68 = 0;
    }
    local_8 = 0;
    if (local_68 == (undefined2 *)0x0) {
      local_8 = 0xffffffff;
      CoTaskMemFree((LPVOID)0x0);
    }
    else {
      *(LPCWSTR *)this = param_1;
      local_5c = 0;
      local_64 = 0;
      local_56 = '\0';
      local_55 = '\0';
      WVar1 = *param_1;
      puVar2 = local_68;
      local_5d = DAT_00459075;
      pcVar12 = CharNextW_exref;
      while (CharNextW_exref = pcVar12, WVar1 != L'\0') {
        local_68 = puVar2;
        if (local_5d == '\x01') {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
          if (((local_64 != 0) ||
              (pwVar4 = _wcsstr(*this,L"HKCR"), pcVar12 = CharNextW_exref, pwVar4 == (wchar_t *)0x0)
              ) || (pwVar4 != *this)) {
LAB_00419a85:
                    /* WARNING: Load size is inaccurate */
            if (**this == 0x27) {
              if (local_55 == '\0') {
                local_55 = '\x01';
                goto LAB_00419b04;
              }
              iVar6 = FUN_00418c60((undefined4 *)this);
              if (iVar6 == 0) {
                    /* WARNING: Load size is inaccurate */
                pvVar7 = (void *)(*pcVar12)(*this);
                *(void **)this = pvVar7;
                iVar6 = FUN_00418ca0(&local_70,pvVar7,1);
                if (iVar6 == 0) goto LAB_00419b2a;
                goto LAB_00419ac4;
              }
              local_55 = '\0';
            }
            else {
LAB_00419ac4:
              if (local_55 != '\0') goto LAB_00419b04;
            }
                    /* WARNING: Load size is inaccurate */
            if (**this == 0x7b) {
              local_64 = local_64 + 1;
            }
            if (((**this == 0x7d) && (local_64 = local_64 + -1, local_64 == 0)) &&
               (local_56 == '\x01')) {
              iVar6 = FUN_004194d0(&local_70,L"\r\n\t}\r\n}\r\n");
              if (iVar6 == 0) goto LAB_00419b2a;
              local_56 = '\0';
            }
            goto LAB_00419b04;
          }
          pWVar5 = CharNextW(*this);
          *(LPWSTR *)this = pWVar5;
          pWVar5 = CharNextW(pWVar5);
          *(LPWSTR *)this = pWVar5;
          pWVar5 = CharNextW(pWVar5);
          *(LPWSTR *)this = pWVar5;
          pWVar5 = CharNextW(pWVar5);
          *(LPWSTR *)this = pWVar5;
          iVar6 = FUN_004194d0(&local_70,L"HKCU\r\n{\tSoftware\r\n\t{\r\n\t\tClasses");
          if (iVar6 != 0) {
            local_56 = '\x01';
            goto LAB_00419a85;
          }
LAB_00419b2a:
          local_5c = 0x8007000e;
          goto LAB_00419be8;
        }
LAB_00419b04:
                    /* WARNING: Load size is inaccurate */
        pWVar8 = *this;
        if (*pWVar8 == L'%') {
          pWVar8 = (LPCWSTR)(*pcVar12)(pWVar8,uVar3);
          *(LPCWSTR *)this = pWVar8;
          if (*pWVar8 == L'%') goto LAB_00419b17;
          local_78 = FUN_00418f10(pWVar8,L'%');
          if (local_78 == (LPCWSTR)0x0) {
LAB_00419bfe:
            local_5c = 0x80020009;
            goto LAB_00419be8;
          }
                    /* WARNING: Load size is inaccurate */
          rVar9 = (int)local_78 - (int)*this >> 1;
          if (0x1f < (int)rVar9) {
            local_5c = 0x80004005;
            goto LAB_00419be8;
          }
          FUN_004186e0(local_54,0x20,*this,rVar9);
          iVar6 = *(int *)((int)this + 4);
          local_7c = local_54;
          lpCriticalSection = (LPCRITICAL_SECTION)(iVar6 + 0x10);
          EnterCriticalSection(lpCriticalSection);
          pWVar8 = (LPCWSTR)FUN_004195e0((void *)(iVar6 + 4),&local_7c);
          LeaveCriticalSection(lpCriticalSection);
          if (pWVar8 == (LPCWSTR)0x0) goto LAB_00419bfe;
          iVar6 = FUN_004194d0(&local_70,pWVar8);
          pWVar8 = local_78;
          if (iVar6 == 0) goto LAB_00419b2a;
                    /* WARNING: Load size is inaccurate */
          pWVar10 = *this;
          pcVar12 = CharNextW_exref;
          while (CharNextW_exref = pcVar12, pWVar10 != pWVar8) {
                    /* WARNING: Load size is inaccurate */
            pWVar10 = CharNextW(*this);
            *(LPCWSTR *)this = pWVar10;
            pcVar12 = CharNextW_exref;
          }
        }
        else {
LAB_00419b17:
          iVar6 = FUN_00418ca0(&local_70,pWVar8,1);
          if (iVar6 == 0) goto LAB_00419b2a;
        }
                    /* WARNING: Load size is inaccurate */
        pWVar11 = (WCHAR *)(*pcVar12)(*this);
        *(WCHAR **)this = pWVar11;
        param_2 = local_74;
        puVar2 = local_68;
        pcVar12 = CharNextW_exref;
        WVar1 = *pWVar11;
      }
      local_68 = (undefined2 *)0x0;
      local_70 = 0;
      local_6c = 0;
      *param_2 = puVar2;
LAB_00419be8:
      local_8 = 0xffffffff;
      CoTaskMemFree(local_68);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

