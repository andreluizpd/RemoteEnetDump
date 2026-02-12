
void __cdecl FUN_00427c30(wchar_t *param_1,SYSTEMTIME *param_2)

{
  wchar_t wVar1;
  WORD WVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  WORD local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  char local_a9;
  wchar_t local_a8 [80];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    if (7 < (uint)((int)pwVar5 - (int)(param_1 + 1) >> 1)) {
      local_c0 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_c4 = 0;
      local_d0 = 0;
      WVar2 = local_d0;
      local_d0 = 0;
      iVar3 = FID_conflict__swscanf(param_1,L"%4u-%2u-%2u",&local_c0,&local_c8);
      if (iVar3 == 3) {
        pwVar5 = param_1 + 10;
      }
      else {
        iVar3 = FID_conflict__swscanf(param_1,L"%4u%2u%2u",&local_c0,&local_c8);
        if (iVar3 != 3) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        pwVar5 = param_1 + 8;
      }
      wVar1 = *pwVar5;
      if (wVar1 != L'\0') {
        if ((wVar1 == L'T') || (wVar1 == L' ')) {
          pwVar5 = pwVar5 + 1;
        }
        iVar3 = FID_conflict__swscanf(pwVar5,L"%2u:%2u:%2u",&local_b8,&local_b4);
        if (iVar3 == 3) {
          pwVar5 = pwVar5 + 8;
        }
        else {
          iVar3 = FID_conflict__swscanf(pwVar5,L"%2u%2u%2u",&local_b8,&local_b4);
          if (iVar3 == 3) {
            pwVar5 = pwVar5 + 6;
          }
          else {
            iVar3 = FID_conflict__swscanf(pwVar5,L"%2u:%2u",&local_b8);
            if (iVar3 == 2) {
              pwVar5 = pwVar5 + 5;
            }
            else {
              iVar3 = FID_conflict__swscanf(pwVar5,L"%2u%2u",&local_b8);
              if (iVar3 == 2) {
                pwVar5 = pwVar5 + 4;
              }
            }
          }
        }
        if (*pwVar5 == L'.') {
          _memset(local_a8,0,0xa0);
          pwVar5 = pwVar5 + 1;
          do {
            iVar3 = _isdigit((uint)(ushort)*pwVar5);
            if (iVar3 == 0) break;
            local_a8[uVar6] = *pwVar5;
            uVar6 = uVar6 + 1;
            pwVar5 = pwVar5 + 1;
          } while (uVar6 < 0x4f);
          local_d0 = WVar2;
          if (local_a8[0] != L'\0') {
            local_d0 = FUN_0042f5b1(local_a8);
          }
        }
      }
      wVar1 = *pwVar5;
      local_b0 = 0;
      if ((wVar1 == L'+') || (wVar1 == L'-')) {
        local_a9 = wVar1 == L'+';
        pwVar5 = pwVar5 + 1;
        local_bc = 0;
        local_b0 = 0;
        iVar4 = FID_conflict__swscanf(pwVar5,L"%2u:%2u",&local_bc);
        iVar3 = local_bc;
        if ((iVar4 != 2) &&
           ((iVar4 = FID_conflict__swscanf(pwVar5,L"%2u%2u",&local_bc), iVar3 = local_bc, iVar4 != 2
            && (iVar4 = FID_conflict__swscanf(pwVar5,L"%u"), iVar3 = local_bc, iVar4 != 1)))) {
          iVar3 = 0;
        }
        iVar3 = local_b0 + iVar3 * 0x3c;
        local_b0 = iVar3 * 0x3c;
        if ((local_a9 != '\0') && (local_b0 != 0)) {
          local_b0 = iVar3 * -0x3c;
        }
      }
      param_2->wYear = 0;
      param_2->wMonth = 0;
      param_2->wDayOfWeek = 0;
      param_2->wDay = 0;
      param_2->wHour = 0;
      param_2->wMinute = 0;
      param_2->wSecond = 0;
      param_2->wMilliseconds = 0;
      param_2->wYear = (WORD)local_c0;
      param_2->wMonth = (WORD)local_c8;
      param_2->wDay = 0;
      param_2->wHour = (WORD)local_b8;
      param_2->wMinute = (WORD)local_b4;
      param_2->wSecond = (WORD)local_c4;
      param_2->wMilliseconds = local_d0;
      if (local_b0 != 0) {
        FUN_00427760(param_2);
        FUN_00427720(param_2);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pwVar5 = FUN_00428ae0(param_1,L"GMT",-1);
      if ((pwVar5 == (wchar_t *)0x0) &&
         (pwVar5 = FUN_00428ae0(param_1,L"UTC",-1), pwVar5 != (wchar_t *)0x0)) {
        FUN_00427720(param_2);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

