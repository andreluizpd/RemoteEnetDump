
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0041a500(void *this,LPCWSTR param_1,HKEY param_2,int param_3,int param_4)

{
  WCHAR WVar1;
  HKEY pHVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  errno_t eVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  HKEY *ppHVar9;
  undefined **ppuVar10;
  HKEY local_226c;
  undefined4 local_2268;
  undefined4 local_2264;
  HKEY local_2260;
  undefined4 local_225c;
  undefined4 local_2258;
  int local_2254;
  HKEY local_2250;
  undefined4 local_224c;
  undefined4 local_2248;
  int local_2244;
  HKEY local_2240;
  undefined4 local_223c;
  undefined4 local_2238;
  HKEY local_2234;
  uint local_2230;
  HKEY local_222c;
  undefined4 local_2228;
  undefined4 local_2224;
  void *local_2220;
  WCHAR local_221c [4096];
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00445f57;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2234 = param_2;
  local_222c = (HKEY)0x0;
  local_2228 = 0;
  local_2224 = 0;
  local_8 = 0;
  local_2254 = param_4;
  local_2220 = this;
  iVar4 = FUN_00418fc0(this,param_1);
  if (iVar4 < 0) {
    local_8 = 0xffffffff;
  }
  else {
    if (*param_1 != L'}') {
LAB_0041a590:
      local_2244 = 1;
      iVar4 = lstrcmpiW(param_1,L"Delete");
      local_2230 = (uint)(iVar4 == 0);
      iVar5 = lstrcmpiW(param_1,L"ForceRemove");
      if ((iVar5 != 0) && ((iVar4 == 0) == 0)) {
LAB_0041a722:
        iVar4 = lstrcmpiW(param_1,L"NoRemove");
        if (iVar4 == 0) {
          local_2244 = 0;
          iVar4 = FUN_00418fc0(local_2220,param_1);
          if (iVar4 < 0) goto LAB_0041abde;
        }
        iVar4 = lstrcmpiW(param_1,L"Val");
        if (iVar4 == 0) {
          iVar4 = FUN_00418fc0(local_2220,local_221c);
          if ((-1 < iVar4) && (iVar4 = FUN_00418fc0(local_2220,param_1), -1 < iVar4)) {
            if (*param_1 != L'=') {
LAB_0041abb7:
              local_8 = 0xffffffff;
              FUN_00419290(&local_222c);
              goto LAB_0041ac04;
            }
            if (param_3 != 0) {
              local_8._0_1_ = 2;
              local_2250 = local_2234;
              local_224c = 0;
              local_2248 = 0;
              iVar4 = FUN_0041a150(local_2220,&local_2250,local_221c,param_1);
              local_2250 = (HKEY)0x0;
              local_224c = 0;
              local_2248 = 0;
              if (-1 < iVar4) {
                local_8 = (uint)local_8._1_3_ << 8;
                local_224c = 0;
                goto LAB_0041a6c0;
              }
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00419290(&local_2250);
              goto LAB_0041ac30;
            }
            if ((param_4 == 0) && (local_2244 != 0)) {
              local_226c = (HKEY)0x0;
              local_2268 = 0;
              local_2264 = 0;
              local_8._0_1_ = 3;
              uVar7 = FUN_00418af0(&local_226c,local_2234,(LPCWSTR)0x0,0x20006);
              pHVar2 = local_226c;
              if ((uVar7 != 0) ||
                 ((uVar7 = RegDeleteValueW(local_226c,local_221c), uVar7 != 0 && (uVar7 != 2)))) {
                FUN_004187e0(uVar7);
                local_8 = (uint)local_8._1_3_ << 8;
                ppHVar9 = &local_226c;
                goto LAB_0041abd9;
              }
              local_8 = (uint)local_8._1_3_ << 8;
              if (pHVar2 != (HKEY)0x0) {
                RegCloseKey(pHVar2);
                local_226c = (HKEY)0x0;
              }
              local_2268 = 0;
            }
            iVar4 = FUN_004191c0(local_2220,param_1);
LAB_0041a700:
            if (-1 < iVar4) goto LAB_0041a70a;
          }
        }
        else {
          WVar1 = *param_1;
          pWVar6 = param_1;
          pHVar2 = local_2234;
          while (local_2234 = pHVar2, WVar1 != L'\0') {
            if (WVar1 == L'\\') {
              if (pWVar6 != (LPCWSTR)0x0) goto LAB_0041abb7;
              break;
            }
            pWVar6 = CharNextW(pWVar6);
            pHVar2 = local_2234;
            WVar1 = *pWVar6;
          }
          if (param_3 == 0) {
            if (param_4 == 0) {
              local_2230 = FUN_00418af0(&local_222c,pHVar2,param_1,0x20019);
              if (local_2230 == 0) goto LAB_0041a999;
            }
            else {
              local_2230 = 2;
            }
            param_4 = 1;
LAB_0041a999:
            eVar8 = _wcsncpy_s(local_21c,0x104,param_1,0xffffffff);
            switch(eVar8) {
            case 0:
            case 0x50:
              goto switchD_0041a9c0_caseD_0;
            default:
                    /* WARNING: Subroutine does not return */
              FUN_00401760(0x80004005);
            case 0xc:
                    /* WARNING: Subroutine does not return */
              FUN_00401760(0x8007000e);
            case 0x16:
            case 0x22:
                    /* WARNING: Subroutine does not return */
              FUN_00401760(0x80070057);
            }
          }
          iVar4 = FUN_00418af0(&local_222c,pHVar2,param_1,0x2001f);
          if (((iVar4 != 0) &&
              (iVar4 = FUN_00418af0(&local_222c,pHVar2,param_1,0x20019), iVar4 != 0)) &&
             (uVar7 = FUN_00418a50(&local_222c,pHVar2,param_1,(LPWSTR)0x0,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,(undefined4 *)0x0), uVar7 != 0))
          goto LAB_0041ac5f;
          iVar4 = FUN_00418fc0(local_2220,param_1);
          if ((-1 < iVar4) &&
             ((*param_1 != L'=' ||
              (iVar4 = FUN_0041a150(local_2220,&local_222c,(LPCWSTR)0x0,param_1), -1 < iVar4)))) {
LAB_0041a6c0:
            if ((*param_1 != L'{') || (iVar4 = lstrlenW(param_1), iVar4 != 1)) goto LAB_0041a70a;
            iVar4 = FUN_0041a500(local_2220,param_1,local_222c,param_3,0);
            if (-1 < iVar4) {
              iVar4 = FUN_00418fc0(local_2220,param_1);
              goto LAB_0041a700;
            }
          }
        }
        goto LAB_0041abde;
      }
      iVar4 = FUN_00418fc0(local_2220,param_1);
      if (-1 < iVar4) {
        if (param_3 == 0) goto LAB_0041a722;
        local_2240 = (HKEY)0x0;
        local_223c = 0;
        local_2238 = 0;
        local_8._0_1_ = 1;
        WVar1 = *param_1;
        pWVar6 = param_1;
        while (WVar1 != L'\0') {
          if (WVar1 == L'\\') {
            if (pWVar6 != (LPCWSTR)0x0) {
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00419290(&local_2240);
              goto LAB_0041abb7;
            }
            break;
          }
          pWVar6 = CharNextW(pWVar6);
          WVar1 = *pWVar6;
        }
        ppuVar10 = &PTR_u_AppID_00449f44;
        do {
          iVar4 = lstrcmpiW(param_1,(LPCWSTR)*ppuVar10);
          if (iVar4 == 0) goto LAB_0041a67f;
          ppuVar10 = ppuVar10 + 1;
        } while ((int)ppuVar10 < 0x449f74);
        local_2240 = local_2234;
        local_223c = 0;
        local_2238 = 0;
        FUN_004192b0(&local_2240,param_1);
        local_2240 = (HKEY)0x0;
        local_223c = 0;
        local_2238 = 0;
LAB_0041a67f:
        if (local_2230 == 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          local_223c = 0;
          goto LAB_0041a722;
        }
        iVar4 = FUN_00418fc0(local_2220,param_1);
        if ((-1 < iVar4) && (iVar4 = FUN_004191c0(local_2220,param_1), -1 < iVar4)) {
          local_8 = (uint)local_8._1_3_ << 8;
          local_223c = 0;
          goto LAB_0041a6c0;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        ppHVar9 = &local_2240;
        goto LAB_0041abd9;
      }
    }
LAB_0041abde:
    local_8 = 0xffffffff;
    if (local_222c != (HKEY)0x0) {
      RegCloseKey(local_222c);
      local_222c = (HKEY)0x0;
    }
  }
  local_2228 = 0;
LAB_0041ac04:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
switchD_0041a9c0_caseD_0:
  iVar4 = FUN_00418fc0(local_2220,param_1);
  if (((iVar4 < 0) || (iVar4 = FUN_004191c0(local_2220,param_1), iVar4 < 0)) ||
     (((*param_1 == L'{' && (iVar4 = lstrlenW(param_1), iVar4 == 1)) &&
      (((iVar4 = FUN_0041a500(local_2220,param_1,local_222c,0,param_4), iVar4 < 0 && (param_4 == 0))
       || (iVar4 = FUN_00418fc0(local_2220,param_1), iVar4 < 0)))))) goto LAB_0041abde;
  param_4 = local_2254;
  if (local_2230 != 2) {
    if (local_2230 == 0) {
      if ((local_2254 == 0) || (bVar3 = FUN_00419170(local_222c), CONCAT31(extraout_var,bVar3) == 0)
         ) {
        bVar3 = FUN_00419170(local_222c);
        local_2230 = CONCAT31(extraout_var_00,bVar3);
        uVar7 = 0;
        if (local_222c != (HKEY)0x0) {
          uVar7 = RegCloseKey(local_222c);
          local_222c = (HKEY)0x0;
        }
        local_2228 = 0;
        if (uVar7 != 0) {
LAB_0041ac5f:
          FUN_004187e0(uVar7);
LAB_0041ac30:
          local_8 = 0xffffffff;
          FUN_00419290(&local_222c);
          goto LAB_0041ac04;
        }
        if ((local_2244 != 0) && (local_2230 == 0)) {
          local_8._0_1_ = 4;
          local_2260 = local_2234;
          local_225c = 0;
          local_2258 = 0;
          uVar7 = FUN_004189d0(&local_2260,local_21c);
          local_2260 = (HKEY)0x0;
          local_225c = 0;
          local_2258 = 0;
          if (uVar7 != 0) {
            FUN_004187e0(uVar7);
            local_8 = (uint)local_8._1_3_ << 8;
            ppHVar9 = &local_2260;
LAB_0041abd9:
            FUN_00419290(ppHVar9);
            goto LAB_0041abde;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00419290(&local_2260);
        }
      }
      else {
        iVar4 = FUN_00419130(local_21c);
        if ((iVar4 != 0) && (local_2244 != 0)) {
          FUN_004192b0(&local_222c,local_21c);
        }
      }
    }
    else if (local_2254 == 0) {
      FUN_004187e0(local_2230);
      goto LAB_0041abde;
    }
  }
LAB_0041a70a:
  if (*param_1 == L'}') goto LAB_0041abde;
  goto LAB_0041a590;
}

