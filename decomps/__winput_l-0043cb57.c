
/* Library Function - Single Match
    __winput_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __winput_l(FILE *_File,wchar_t *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte *pbVar1;
  void *pvVar2;
  wint_t wVar3;
  ushort uVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  int *piVar7;
  char *_Dst;
  errno_t eVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  size_t sVar13;
  size_t sVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  bool bVar18;
  longlong lVar19;
  char *pcVar20;
  FILE *pFVar21;
  int local_33c [2];
  int local_334;
  char local_330;
  uint local_32c;
  va_list local_328;
  int local_324;
  va_list local_320;
  void *local_31c;
  int local_318;
  int local_314;
  int local_310;
  wchar_t *local_30c;
  wchar_t *local_308;
  uint local_304;
  undefined8 local_300;
  int local_2f8;
  uint local_2f4;
  byte local_2ed;
  uint local_2ec;
  int local_2e8;
  wchar_t *local_2e4;
  char local_2df;
  char local_2de;
  char local_2dd;
  FILE *local_2dc;
  char local_2d7;
  char local_2d6;
  char local_2d5;
  int local_2d4;
  uint local_2d0;
  uint local_2cc;
  char local_2c5;
  wchar_t local_2c4 [350];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_320 = _ArgList;
  local_2e4 = local_2c4;
  local_2dc = _File;
  local_308 = param_2;
  local_318 = 0x15e;
  local_314 = 0;
  local_31c = (void *)0x0;
  local_324 = 0;
  local_2d0 = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (FILE *)0x0)) {
    piVar7 = __errno();
    *piVar7 = 0x16;
    FUN_00433a30();
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_33c,_Locale);
    wVar5 = *param_2;
    local_2de = '\0';
    local_2cc = 0;
    local_310 = 0;
    pwVar16 = local_308;
    if (wVar5 != L'\0') {
LAB_0043cc0d:
      iVar11 = _iswctype(wVar5,8);
      if (iVar11 != 0) {
        local_2cc = local_2cc - 1;
        pFVar21 = local_2dc;
        wVar3 = __whiteout(local_2dc);
        __un_inc(wVar3,pFVar21);
        do {
          pwVar16 = pwVar16 + 1;
          iVar11 = _iswctype(*pwVar16,8);
        } while (iVar11 != 0);
        goto LAB_0043db6e;
      }
      if (*pwVar16 == L'%') {
        if (pwVar16[1] == L'%') {
          if (pwVar16[1] == L'%') {
            pwVar16 = pwVar16 + 1;
          }
          goto LAB_0043db1f;
        }
        local_2f4 = 0;
        local_32c = 0;
        local_2e8 = 0;
        local_2f8 = 0;
        local_2d4 = 0;
        local_304 = 0;
        local_2ed = 0;
        local_2df = '\0';
        local_2d7 = '\0';
        local_2c5 = '\0';
        local_2dd = '\0';
        local_2d5 = '\0';
        local_2d6 = '\x01';
        pwVar15 = (wchar_t *)0x0;
        do {
          pwVar17 = pwVar16 + 1;
          uVar12 = (uint)(ushort)*pwVar17;
          if ((*pwVar17 & 0xff00U) == 0) {
            iVar11 = _isdigit(uVar12 & 0xff);
            if (iVar11 == 0) goto LAB_0043cd09;
            local_2f8 = local_2f8 + 1;
            local_2d4 = local_2d4 * 10 + -0x30 + uVar12;
          }
          else {
LAB_0043cd09:
            if (uVar12 < 0x4f) {
              if (uVar12 != 0x4e) {
                if (uVar12 == 0x2a) {
                  local_2d7 = local_2d7 + '\x01';
                }
                else if (uVar12 != 0x46) {
                  if (uVar12 == 0x49) {
                    wVar5 = pwVar16[2];
                    if ((wVar5 == L'6') && (pwVar16[3] == L'4')) {
                      pwVar17 = pwVar16 + 3;
                      goto LAB_0043cd4e;
                    }
                    if ((wVar5 == L'3') && (pwVar16[3] == L'2')) {
                      pwVar17 = pwVar16 + 3;
                    }
                    else if ((wVar5 != L'd') &&
                            ((((wVar5 != L'i' && (wVar5 != L'o')) && (wVar5 != L'x')) &&
                             (wVar5 != L'X')))) goto LAB_0043cda5;
                  }
                  else if (uVar12 == 0x4c) {
                    local_2d6 = local_2d6 + '\x01';
                  }
                  else {
LAB_0043cda5:
                    local_2c5 = local_2c5 + '\x01';
                  }
                }
              }
            }
            else if (uVar12 == 0x68) {
              local_2d6 = local_2d6 + -1;
              local_2d5 = local_2d5 + -1;
            }
            else {
              if (uVar12 == 0x6c) {
                if (pwVar16[2] == L'l') {
                  pwVar17 = pwVar16 + 2;
LAB_0043cd4e:
                  local_304 = local_304 + 1;
                  local_300 = 0;
                  goto LAB_0043cdd3;
                }
                local_2d6 = local_2d6 + '\x01';
              }
              else if (uVar12 != 0x77) goto LAB_0043cda5;
              local_2d5 = local_2d5 + '\x01';
            }
          }
LAB_0043cdd3:
          pwVar16 = pwVar17;
        } while (local_2c5 == '\0');
        if (local_2d7 == '\0') {
          pwVar15 = *(wchar_t **)local_320;
          local_328 = local_320;
          local_320 = local_320 + 4;
        }
        local_2c5 = '\0';
        if ((local_2d5 == '\0') && ((*pwVar17 == L'S' || (local_2d5 = '\x01', *pwVar17 == L'C')))) {
          local_2d5 = -1;
        }
        uVar12 = (ushort)*pwVar17 | 0x20;
        local_30c = pwVar15;
        local_308 = pwVar17;
        local_2ec = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            local_2cc = local_2cc + 1;
            uVar4 = __fgetwc_nolock(local_2dc);
          }
          else {
            uVar4 = __whiteout(local_2dc);
          }
          local_2d0 = (uint)uVar4;
          if (uVar4 == 0xffff) goto LAB_0043dba2;
        }
        if ((local_2f8 != 0) && (local_2d4 == 0)) goto LAB_0043db9b;
        if (uVar12 < 0x70) {
          if (uVar12 == 0x6f) {
LAB_0043d800:
            if ((wchar_t)local_2d0 == L'-') {
              local_2df = '\x01';
            }
            else if ((wchar_t)local_2d0 != L'+') goto LAB_0043d84f;
            local_2d4 = local_2d4 + -1;
            if ((local_2d4 == 0) && (local_2f8 != 0)) {
              local_2c5 = '\x01';
            }
            else {
              local_2cc = local_2cc + 1;
              wVar3 = __fgetwc_nolock(local_2dc);
              local_2d0 = (uint)wVar3;
            }
            goto LAB_0043d84f;
          }
          if (uVar12 == 99) {
            if (local_2f8 == 0) {
              local_2d4 = local_2d4 + 1;
              local_2f8 = 1;
            }
LAB_0043d3b3:
            pwVar16 = local_308;
            if ('\0' < local_2d5) {
              local_2dd = '\x01';
            }
            goto LAB_0043d3c3;
          }
          if (uVar12 == 100) goto LAB_0043d800;
          if (uVar12 < 0x65) {
LAB_0043d4ca:
            if (*local_308 != (wchar_t)local_2d0) goto LAB_0043db9b;
            local_2de = local_2de + -1;
            if (local_2d7 == '\0') {
              local_320 = local_328;
            }
            goto LAB_0043dafa;
          }
          if (0x67 < uVar12) {
            if (uVar12 == 0x69) {
              local_2ec = 100;
              goto LAB_0043cf0b;
            }
            if (uVar12 != 0x6e) goto LAB_0043d4ca;
            uVar12 = local_2cc;
            lVar19 = local_300;
            if (local_2d7 != '\0') goto LAB_0043dafa;
            goto LAB_0043dace;
          }
          sVar13 = 0;
          if ((wchar_t)local_2d0 == L'-') {
            *local_2e4 = L'-';
            sVar13 = 1;
LAB_0043cf4f:
            local_2d4 = local_2d4 + -1;
            local_2cc = local_2cc + 1;
            wVar3 = __fgetwc_nolock(local_2dc);
            local_2d0 = (uint)wVar3;
          }
          else if ((wchar_t)local_2d0 == L'+') goto LAB_0043cf4f;
          if (local_2f8 == 0) {
            local_2d4 = -1;
          }
          if ((local_2d0 & 0xff00) == 0) {
            do {
              iVar11 = _isdigit(local_2d0 & 0xff);
              if ((iVar11 == 0) ||
                 (iVar11 = local_2d4 + -1, bVar18 = local_2d4 == 0, local_2d4 = iVar11, bVar18))
              break;
              local_2e8 = local_2e8 + 1;
              local_2e4[sVar13] = (short)(char)local_2d0;
              sVar13 = sVar13 + 1;
              iVar11 = ___check_float_string(sVar13,local_2c4,&local_314);
              if (iVar11 == 0) goto LAB_0043dba2;
              local_2cc = local_2cc + 1;
              wVar3 = __fgetwc_nolock(local_2dc);
              local_2d0 = (uint)wVar3;
            } while ((wVar3 & 0xff00) == 0);
          }
          wVar5 = **(wchar_t **)(*(int *)(local_33c[0] + 0xbc) + 0x30);
          if (((uint)(ushort)wVar5 == (int)(char)local_2d0) &&
             (iVar11 = local_2d4 + -1, bVar18 = local_2d4 != 0, local_2d4 = iVar11, bVar18)) {
            local_2cc = local_2cc + 1;
            wVar3 = __fgetwc_nolock(local_2dc);
            local_2d0 = (uint)wVar3;
            local_2e4[sVar13] = wVar5;
            sVar13 = sVar13 + 1;
            iVar11 = ___check_float_string(sVar13,local_2c4,&local_314);
            if (iVar11 == 0) goto LAB_0043dba2;
            if ((local_2d0 & 0xff00) == 0) {
              do {
                iVar11 = _isdigit(local_2d0 & 0xff);
                if ((iVar11 == 0) ||
                   (iVar11 = local_2d4 + -1, bVar18 = local_2d4 == 0, local_2d4 = iVar11, bVar18))
                break;
                local_2e8 = local_2e8 + 1;
                local_2e4[sVar13] = (wchar_t)local_2d0;
                sVar13 = sVar13 + 1;
                iVar11 = ___check_float_string(sVar13,local_2c4,&local_314);
                if (iVar11 == 0) goto LAB_0043dba2;
                local_2cc = local_2cc + 1;
                wVar3 = __fgetwc_nolock(local_2dc);
                local_2d0 = (uint)wVar3;
              } while ((wVar3 & 0xff00) == 0);
            }
          }
          if ((local_2e8 != 0) &&
             ((((wchar_t)local_2d0 == 0x65 || ((wchar_t)local_2d0 == 0x45)) &&
              (iVar11 = local_2d4 + -1, bVar18 = local_2d4 != 0, local_2d4 = iVar11, bVar18)))) {
            local_2e4[sVar13] = L'e';
            sVar14 = sVar13 + 1;
            iVar11 = ___check_float_string(sVar14,local_2c4,&local_314);
            if (iVar11 == 0) goto LAB_0043dba2;
            local_2cc = local_2cc + 1;
            wVar3 = __fgetwc_nolock(local_2dc);
            local_2d0 = (uint)wVar3;
            if (wVar3 == 0x2d) {
              local_2e4[sVar14] = L'-';
              sVar14 = sVar13 + 2;
              iVar11 = ___check_float_string(sVar14,local_2c4,&local_314);
              if (iVar11 == 0) goto LAB_0043dba2;
LAB_0043d211:
              sVar13 = sVar14;
              if (local_2d4 == 0) {
                local_2d4 = 0;
              }
              else {
                local_2cc = local_2cc + 1;
                local_2d4 = local_2d4 + -1;
                wVar3 = __fgetwc_nolock(local_2dc);
                local_2d0 = (uint)wVar3;
              }
            }
            else {
              sVar13 = sVar14;
              if (wVar3 == 0x2b) goto LAB_0043d211;
            }
            if ((local_2d0 & 0xff00) == 0) {
              do {
                iVar11 = _isdigit(local_2d0 & 0xff);
                if ((iVar11 == 0) ||
                   (iVar11 = local_2d4 + -1, bVar18 = local_2d4 == 0, local_2d4 = iVar11, bVar18))
                break;
                local_2e8 = local_2e8 + 1;
                local_2e4[sVar13] = (wchar_t)local_2d0;
                sVar13 = sVar13 + 1;
                iVar11 = ___check_float_string(sVar13,local_2c4,&local_314);
                if (iVar11 == 0) goto LAB_0043dba2;
                local_2cc = local_2cc + 1;
                wVar3 = __fgetwc_nolock(local_2dc);
                local_2d0 = (uint)wVar3;
              } while ((wVar3 & 0xff00) == 0);
            }
          }
          local_2cc = local_2cc - 1;
          __un_inc((wint_t)local_2d0,local_2dc);
          if (local_2e8 == 0) goto LAB_0043dba2;
          if (local_2d7 == '\0') {
            local_310 = local_310 + 1;
            iVar11 = local_318 * 2;
            sVar14 = iVar11 + 2;
            local_2e4[sVar13] = L'\0';
            _Dst = (char *)__malloc_crt(sVar14);
            if (_Dst != (char *)0x0) {
              eVar8 = _wcstombs_s((size_t *)0x0,_Dst,sVar14,local_2e4,iVar11 + 1);
              if ((eVar8 != 0) && ((eVar8 == 0x16 || (eVar8 == 0x22)))) {
LAB_0043db81:
                    /* WARNING: Subroutine does not return */
                __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              piVar7 = local_33c;
              iVar11 = local_2d6 + -1;
              pwVar16 = local_30c;
              pcVar20 = _Dst;
              pcVar9 = (code *)DecodePointer(PTR_LAB_00458274);
              (*pcVar9)(iVar11,pwVar16,pcVar20,piVar7);
              _free(_Dst);
              goto LAB_0043dafa;
            }
            goto LAB_0043dba2;
          }
        }
        else {
          if (uVar12 == 0x70) {
            local_2d6 = '\x01';
            goto LAB_0043d800;
          }
          if (uVar12 == 0x73) goto LAB_0043d3b3;
          if (uVar12 == 0x75) goto LAB_0043d800;
          if (uVar12 != 0x78) {
            if (uVar12 != 0x7b) goto LAB_0043d4ca;
            if ('\0' < local_2d5) {
              local_2dd = '\x01';
            }
            pwVar16 = local_308 + 1;
            if (*pwVar16 == L'^') {
              pwVar16 = local_308 + 2;
              local_2ed = 0xff;
            }
            if (local_31c == (void *)0x0) {
              local_31c = __malloc_crt(0x2000);
              if (local_31c == (void *)0x0) goto LAB_0043dba2;
              local_324 = 1;
            }
            pvVar2 = local_31c;
            _memset(local_31c,0,0x2000);
            uVar12 = local_32c;
            if (*pwVar16 == L']') {
              *(undefined1 *)((int)pvVar2 + 0xb) = 0x20;
              uVar12 = 0x5d;
              pwVar16 = pwVar16 + 1;
            }
LAB_0043d611:
            do {
              wVar5 = *pwVar16;
              if (wVar5 == L']') goto code_r0x0043d620;
              if ((wVar5 == L'-') && ((wchar_t)uVar12 != L'\0')) {
                wVar6 = pwVar16[1];
                if (wVar6 != L']') {
                  local_2f4 = (uint)(ushort)wVar6;
                  if ((ushort)wVar6 <= (ushort)(wchar_t)uVar12) {
                    local_2f4 = uVar12 & 0xffff;
                    uVar12 = (uint)(ushort)wVar6;
                  }
                  if ((ushort)uVar12 < (ushort)local_2f4) {
                    local_304 = local_2f4 - uVar12 & 0xffff;
                    uVar12 = uVar12 & 0xffff;
                    do {
                      pbVar1 = (byte *)((uVar12 >> 3) + (int)pvVar2);
                      *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar12 & 7);
                      uVar12 = uVar12 + 1;
                      local_304 = local_304 - 1;
                    } while (local_304 != 0);
                  }
                  pbVar1 = (byte *)((uint)(ushort)((ushort)local_2f4 >> 3) + (int)pvVar2);
                  *pbVar1 = *pbVar1 | '\x01' << ((byte)local_2f4 & 7);
                  uVar12 = 0;
                  pwVar16 = pwVar16 + 2;
                  goto LAB_0043d611;
                }
              }
              pbVar1 = (byte *)((uint)((ushort)wVar5 >> 3) + (int)pvVar2);
              *pbVar1 = *pbVar1 | '\x01' << ((byte)wVar5 & 7);
              uVar12 = (uint)(ushort)wVar5;
              pwVar16 = pwVar16 + 1;
            } while( true );
          }
LAB_0043cf0b:
          if ((wchar_t)local_2d0 == L'-') {
            local_2df = '\x01';
LAB_0043d649:
            local_2d4 = local_2d4 + -1;
            if ((local_2d4 == 0) && (local_2f8 != 0)) {
              local_2c5 = '\x01';
            }
            else {
              local_2cc = local_2cc + 1;
              wVar3 = __fgetwc_nolock(local_2dc);
              local_2d0 = (uint)wVar3;
            }
          }
          else if ((wchar_t)local_2d0 == L'+') goto LAB_0043d649;
          if ((short)local_2d0 == 0x30) {
            local_2cc = local_2cc + 1;
            wVar3 = __fgetwc_nolock(local_2dc);
            local_2d0 = (uint)wVar3;
            if ((wVar3 == 0x78) || (wVar3 == 0x58)) {
              local_2cc = local_2cc + 1;
              wVar3 = __fgetwc_nolock(local_2dc);
              local_2d0 = (uint)wVar3;
              if ((local_2f8 != 0) && (local_2d4 = local_2d4 + -2, local_2d4 < 1)) {
                local_2c5 = local_2c5 + '\x01';
              }
              local_2ec = 0x78;
            }
            else {
              local_2e8 = 1;
              if (local_2ec == 0x78) {
                local_2cc = local_2cc - 1;
                __un_inc(wVar3,local_2dc);
                local_2d0 = 0x30;
              }
              else {
                if ((local_2f8 != 0) && (local_2d4 = local_2d4 + -1, local_2d4 == 0)) {
                  local_2c5 = local_2c5 + '\x01';
                }
                local_2ec = 0x6f;
              }
            }
          }
LAB_0043d84f:
          lVar19 = local_300;
          if (local_304 == 0) {
            uVar12 = local_2f4;
            if (local_2c5 == '\0') {
              while ((uVar10 = local_2d0, uVar4 = (ushort)local_2d0, local_2ec != 0x78 &&
                     (local_2ec != 0x70))) {
                if ((local_2d0 & 0xff00) != 0) goto LAB_0043da7d;
                iVar11 = _isdigit(local_2d0 & 0xff);
                if (iVar11 == 0) goto LAB_0043da7d;
                if (local_2ec == 0x6f) {
                  if (0x37 < uVar4) goto LAB_0043da7d;
                  iVar11 = uVar12 << 3;
                }
                else {
                  iVar11 = uVar12 * 10;
                }
LAB_0043da3f:
                local_2e8 = local_2e8 + 1;
                uVar12 = iVar11 + -0x30 + (uVar10 & 0xffff);
                if ((local_2f8 != 0) &&
                   (local_2d4 = local_2d4 + -1, lVar19 = local_300, local_2d4 == 0))
                goto LAB_0043da91;
                local_2cc = local_2cc + 1;
                wVar3 = __fgetwc_nolock(local_2dc);
                local_2d0 = (uint)wVar3;
              }
              if ((local_2d0 & 0xff00) == 0) {
                iVar11 = _isxdigit(local_2d0 & 0xff);
                if (iVar11 != 0) {
                  iVar11 = uVar12 << 4;
                  uVar10 = __hextodec(uVar10);
                  uVar10 = uVar10 & 0xffff;
                  local_2d0 = uVar10;
                  goto LAB_0043da3f;
                }
              }
LAB_0043da7d:
              local_2cc = local_2cc - 1;
              __un_inc(uVar4,local_2dc);
              lVar19 = local_300;
            }
LAB_0043da91:
            if (local_2df != '\0') {
              uVar12 = -uVar12;
            }
          }
          else {
            if (local_2c5 == '\0') {
              while ((uVar12 = local_2d0, uVar4 = (ushort)local_2d0, local_2ec != 0x78 &&
                     (local_2ec != 0x70))) {
                if ((local_2d0 & 0xff00) != 0) goto LAB_0043d974;
                iVar11 = _isdigit(local_2d0 & 0xff);
                if (iVar11 == 0) goto LAB_0043d974;
                if (local_2ec == 0x6f) {
                  if (0x37 < uVar4) goto LAB_0043d974;
                  lVar19 = local_300 << 3;
                }
                else {
                  lVar19 = __allmul((uint)local_300,local_300._4_4_,10,0);
                }
LAB_0043d928:
                local_2e8 = local_2e8 + 1;
                local_300 = lVar19 + (int)((uVar12 & 0xffff) - 0x30);
                if ((local_2f8 != 0) &&
                   (local_2d4 = local_2d4 + -1, lVar19 = local_300, local_2d4 == 0))
                goto LAB_0043d988;
                local_2cc = local_2cc + 1;
                wVar3 = __fgetwc_nolock(local_2dc);
                local_2d0 = (uint)wVar3;
              }
              if ((local_2d0 & 0xff00) == 0) {
                iVar11 = _isxdigit(local_2d0 & 0xff);
                if (iVar11 != 0) {
                  lVar19 = local_300 << 4;
                  local_300._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
                  uVar12 = __hextodec(uVar12);
                  lVar19 = CONCAT44(local_300._4_4_,(int)lVar19);
                  uVar12 = uVar12 & 0xffff;
                  local_2d0 = uVar12;
                  goto LAB_0043d928;
                }
              }
LAB_0043d974:
              local_2cc = local_2cc - 1;
              __un_inc(uVar4,local_2dc);
              lVar19 = local_300;
            }
LAB_0043d988:
            local_300._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
            local_300._0_4_ = (uint)lVar19;
            uVar12 = local_2f4;
            if (local_2df != '\0') {
              lVar19 = CONCAT44(-(local_300._4_4_ + (uint)((uint)local_300 != 0)),-(uint)local_300);
            }
          }
          if (local_2ec == 0x46) {
            local_2e8 = 0;
          }
          local_300 = lVar19;
          if (local_2e8 == 0) goto LAB_0043dba2;
          if (local_2d7 == '\0') {
            local_310 = local_310 + 1;
LAB_0043dace:
            local_300 = lVar19;
            if (local_304 == 0) {
              if (local_2d6 == '\0') {
                *local_30c = (wchar_t)uVar12;
              }
              else {
                *(uint *)local_30c = uVar12;
              }
            }
            else {
              *(longlong *)local_30c = lVar19;
            }
          }
        }
        goto LAB_0043dafa;
      }
LAB_0043db1f:
      local_2cc = local_2cc + 1;
      wVar6 = __fgetwc_nolock(local_2dc);
      local_2d0 = (uint)(ushort)wVar6;
      wVar5 = *pwVar16;
      pwVar16 = pwVar16 + 1;
      local_308 = pwVar16;
      if (wVar5 == wVar6) goto LAB_0043db4b;
LAB_0043db9b:
      __un_inc((wint_t)local_2d0,local_2dc);
LAB_0043dba2:
      if (local_324 == 1) {
        _free(local_31c);
      }
      if (local_314 == 1) {
        _free(local_2e4);
      }
      if ((wchar_t)local_2d0 == -1) {
        if (local_330 != '\0') {
          *(uint *)(local_334 + 0x70) = *(uint *)(local_334 + 0x70) & 0xfffffffd;
        }
        goto LAB_0043dc1e;
      }
    }
    if (local_330 != '\0') {
      *(uint *)(local_334 + 0x70) = *(uint *)(local_334 + 0x70) & 0xfffffffd;
    }
  }
LAB_0043dc1e:
  iVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar11;
code_r0x0043d620:
  uVar12 = local_2ec;
  if (*pwVar16 != L'\0') {
LAB_0043d3c3:
    local_308 = pwVar16;
    pwVar16 = local_30c;
    local_2cc = local_2cc - 1;
    __un_inc((wint_t)local_2d0,local_2dc);
    pwVar15 = pwVar16;
    do {
      if ((local_2f8 != 0) &&
         (iVar11 = local_2d4 + -1, bVar18 = local_2d4 == 0, local_2d4 = iVar11, bVar18))
      goto LAB_0043d7ae;
      local_2cc = local_2cc + 1;
      wVar5 = __fgetwc_nolock(local_2dc);
      local_2d0 = (uint)(ushort)wVar5;
      if (wVar5 == L'\xffff') goto LAB_0043d79a;
      if (uVar12 != 99) {
        if (uVar12 == 0x73) {
          if ((8 < local_2d0) && (local_2d0 < 0xe)) goto LAB_0043d79a;
          if (local_2d0 != 0x20) goto LAB_0043d47b;
        }
        if ((uVar12 != 0x7b) ||
           (uVar12 = local_2ec,
           ((int)(char)(*(byte *)((uint)((ushort)wVar5 >> 3) + (int)local_31c) ^ local_2ed) &
           1 << ((byte)wVar5 & 7)) == 0)) goto LAB_0043d79a;
      }
LAB_0043d47b:
      if (local_2d7 == '\0') {
        if (local_2dd == '\0') {
          local_2f4 = 0;
          eVar8 = _wctomb_s((int *)&local_2f4,(char *)pwVar16,5,wVar5);
          if (eVar8 == 0) {
            pwVar16 = (wchar_t *)((int)pwVar16 + local_2f4);
            local_30c = pwVar16;
          }
          else if ((eVar8 == 0x16) || (eVar8 == 0x22)) goto LAB_0043db81;
        }
        else {
          *pwVar16 = wVar5;
          pwVar16 = pwVar16 + 1;
          local_30c = pwVar16;
        }
      }
      else {
        pwVar15 = pwVar15 + 1;
      }
    } while( true );
  }
  goto LAB_0043dba2;
LAB_0043d79a:
  local_2cc = local_2cc - 1;
  __un_inc(wVar5,local_2dc);
LAB_0043d7ae:
  if (pwVar15 == pwVar16) goto LAB_0043dba2;
  if ((local_2d7 == '\0') && (local_310 = local_310 + 1, uVar12 != 99)) {
    if (local_2dd == '\0') {
      *(undefined1 *)local_30c = 0;
    }
    else {
      *local_30c = L'\0';
    }
  }
LAB_0043dafa:
  local_2de = local_2de + '\x01';
  pwVar16 = local_308 + 1;
LAB_0043db4b:
  local_308 = pwVar16;
  if (((wchar_t)local_2d0 == -1) && ((*pwVar16 != L'%' || (pwVar16[1] != L'n')))) goto LAB_0043dba2;
LAB_0043db6e:
  wVar5 = *pwVar16;
  if (wVar5 == L'\0') goto LAB_0043dba2;
  goto LAB_0043cc0d;
}

