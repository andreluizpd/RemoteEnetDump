
/* Library Function - Single Match
    __input_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __input_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar11;
  undefined4 extraout_ECX_04;
  FILE *extraout_ECX_05;
  FILE *pFVar12;
  FILE *extraout_ECX_06;
  FILE *extraout_ECX_07;
  FILE *extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint extraout_ECX_10;
  byte bVar13;
  void *_C;
  size_t sVar14;
  size_t sVar15;
  wchar_t *pwVar16;
  byte *pbVar17;
  uint uVar18;
  wchar_t *pwVar19;
  byte *pbVar20;
  bool bVar21;
  longlong lVar22;
  undefined1 *puVar23;
  localeinfo_struct *plVar24;
  va_list local_204;
  localeinfo_struct local_200;
  int local_1f8;
  char local_1f4;
  wchar_t local_1f0 [2];
  va_list local_1ec;
  int local_1e8;
  byte local_1e4;
  undefined1 local_1e3;
  undefined4 local_1e0;
  int local_1dc;
  byte local_1d5;
  int local_1d4;
  int local_1d0;
  undefined8 local_1cc;
  wchar_t *local_1c4;
  byte *local_1c0;
  FILE *local_1bc;
  uint local_1b8;
  undefined1 *local_1b4;
  int local_1b0;
  byte local_1ac;
  char local_1ab;
  char local_1aa;
  char local_1a9;
  FILE *local_1a8;
  char local_1a1;
  int local_1a0;
  char local_199;
  uint local_198;
  char local_191;
  int local_190;
  byte local_189;
  undefined1 local_188 [352];
  byte local_28 [32];
  uint local_8;
  void *pvVar5;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_1ec = _ArgList;
  local_1b4 = local_188;
  local_1a8 = _File;
  local_1e0 = 0x15e;
  local_1d4 = 0;
  local_1f0[0] = L'\0';
  local_1f0[1] = L'\0';
  local_198 = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00433a30();
    goto LAB_0043bf58;
  }
  if ((_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar10 = &DAT_00457a98;
    }
    else {
      puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0045a740)[(int)uVar4 >> 5]);
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar10 = &DAT_00457a98;
      }
      else {
        puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0045a740)[(int)uVar4 >> 5]);
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_0043b051;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00433a30();
  }
  else {
LAB_0043b051:
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_200,_Locale);
    bVar2 = *param_2;
    local_1a9 = '\0';
    local_190 = 0;
    local_1d0 = 0;
    if (bVar2 != 0) {
LAB_0043b07e:
      pvVar5 = (void *)(uint)bVar2;
      iVar9 = _isspace((int)pvVar5);
      if (iVar9 != 0) {
        local_190 = local_190 + -1;
        uVar4 = __whiteout(pvVar5,local_1a8);
        if (uVar4 != 0xffffffff) {
          __ungetc_nolock(uVar4,local_1a8);
        }
        do {
          param_2 = param_2 + 1;
          iVar9 = _isspace((uint)*param_2);
        } while (iVar9 != 0);
        goto LAB_0043beb6;
      }
      if (*param_2 == 0x25) {
        if (param_2[1] == 0x25) {
          if (param_2[1] == 0x25) {
            param_2 = param_2 + 1;
          }
          goto LAB_0043be40;
        }
        local_1e8 = 0;
        local_1d5 = 0;
        local_1b0 = 0;
        local_1bc = (FILE *)0x0;
        local_1a0 = 0;
        local_1ac = 0;
        local_1ab = '\0';
        local_1a1 = '\0';
        local_191 = '\0';
        local_1aa = '\0';
        local_199 = '\0';
        local_189 = 1;
        local_1dc = 0;
        do {
          pbVar17 = param_2 + 1;
          _C = (void *)(uint)*pbVar17;
          pvVar5 = _C;
          iVar9 = _isdigit((int)_C);
          pbVar20 = pbVar17;
          if (iVar9 == 0) {
            if (_C < (void *)0x4f) {
              if (_C != (void *)0x4e) {
                if (_C == (void *)0x2a) {
                  local_1a1 = local_1a1 + '\x01';
                }
                else if (_C != (void *)0x46) {
                  if (_C == (void *)0x49) {
                    bVar2 = param_2[2];
                    pvVar5 = (void *)CONCAT31((int3)((uint)pvVar5 >> 8),bVar2);
                    if ((bVar2 == 0x36) && (pbVar20 = param_2 + 3, *pbVar20 == 0x34))
                    goto LAB_0043b1a3;
                    if ((((((bVar2 != 0x33) || (pbVar20 = param_2 + 3, *pbVar20 != 0x32)) &&
                          (pbVar20 = pbVar17, bVar2 != 100)) && ((bVar2 != 0x69 && (bVar2 != 0x6f)))
                         ) && (bVar2 != 0x78)) && (bVar2 != 0x58)) goto LAB_0043b1fc;
                  }
                  else if (_C == (void *)0x4c) {
                    local_189 = local_189 + 1;
                  }
                  else {
LAB_0043b1fc:
                    local_191 = local_191 + '\x01';
                    pbVar20 = pbVar17;
                  }
                }
              }
            }
            else if (_C == (void *)0x68) {
              local_189 = local_189 - 1;
              local_199 = local_199 + -1;
            }
            else {
              if (_C == (void *)0x6c) {
                pbVar20 = param_2 + 2;
                if (*pbVar20 == 0x6c) {
LAB_0043b1a3:
                  local_1dc = local_1dc + 1;
                  local_1cc = 0;
                  goto LAB_0043b226;
                }
                local_189 = local_189 + 1;
              }
              else if (_C != (void *)0x77) goto LAB_0043b1fc;
              local_199 = local_199 + '\x01';
              pbVar20 = pbVar17;
            }
          }
          else {
            local_1bc = (FILE *)((int)&local_1bc->_ptr + 1);
            local_1a0 = local_1a0 * 10 + -0x30 + (int)_C;
          }
LAB_0043b226:
          param_2 = pbVar20;
        } while (local_191 == '\0');
        if (local_1a1 == '\0') {
          local_1c4 = *(wchar_t **)local_1ec;
          local_204 = local_1ec;
          local_1ec = local_1ec + 4;
        }
        else {
          local_1c4 = (wchar_t *)0x0;
        }
        local_191 = '\0';
        if ((local_199 == '\0') && ((*pbVar20 == 0x53 || (local_199 = -1, *pbVar20 == 0x43)))) {
          local_199 = '\x01';
        }
        uVar4 = *pbVar20 | 0x20;
        local_1c0 = pbVar20;
        local_1b8 = uVar4;
        if (uVar4 != 0x6e) {
          if ((uVar4 == 99) || (uVar4 == 0x7b)) {
            local_190 = local_190 + 1;
            local_198 = __inc(pvVar5,local_1a8);
          }
          else {
            local_198 = __whiteout(pvVar5,local_1a8);
          }
          if (local_198 == 0xffffffff) goto LAB_0043bef6;
        }
        pFVar12 = local_1bc;
        uVar7 = local_198;
        if ((local_1bc != (FILE *)0x0) && (local_1a0 == 0)) goto LAB_0043bee1;
        if (uVar4 < 0x70) {
          if (uVar4 == 0x6f) {
LAB_0043bb6b:
            if (local_198 == 0x2d) {
              local_1ab = '\x01';
            }
            else if (local_198 != 0x2b) goto LAB_0043bbb2;
            local_1a0 = local_1a0 + -1;
            if ((local_1a0 == 0) && (local_1bc != (FILE *)0x0)) {
              local_191 = '\x01';
            }
            else {
              local_190 = local_190 + 1;
              local_198 = __inc(local_1bc,local_1a8);
            }
            goto LAB_0043bbb2;
          }
          if (uVar4 == 99) {
            if (local_1bc == (FILE *)0x0) {
              local_1a0 = local_1a0 + 1;
              local_1bc = (FILE *)0x1;
            }
LAB_0043b73e:
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
LAB_0043b74e:
            pwVar16 = local_1c4;
            local_190 = local_190 + -1;
            pwVar19 = pwVar16;
            if (local_198 != 0xffffffff) {
              pFVar12 = local_1a8;
              __ungetc_nolock(local_198,local_1a8);
            }
            do {
              if ((local_1bc != (FILE *)0x0) &&
                 (iVar9 = local_1a0 + -1, bVar21 = local_1a0 == 0, local_1a0 = iVar9, bVar21))
              goto LAB_0043bb19;
              local_190 = local_190 + 1;
              local_198 = __inc(pFVar12,local_1a8);
              if (local_198 == 0xffffffff) goto LAB_0043bb00;
              bVar2 = (byte)local_198;
              pFVar12 = extraout_ECX_05;
              if (uVar4 != 99) {
                if (uVar4 == 0x73) {
                  if ((8 < (int)local_198) && ((int)local_198 < 0xe)) goto LAB_0043bb00;
                  if (local_198 != 0x20) goto LAB_0043b800;
                }
                if ((uVar4 != 0x7b) ||
                   (pFVar12 = (FILE *)(int)(char)(local_28[(int)local_198 >> 3] ^ local_1ac),
                   uVar4 = local_1b8, ((uint)pFVar12 & 1 << (bVar2 & 7)) == 0)) goto LAB_0043bb00;
              }
LAB_0043b800:
              if (local_1a1 == '\0') {
                if (local_1aa == '\0') {
                  *(byte *)pwVar16 = bVar2;
                  pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                  local_1c4 = pwVar16;
                }
                else {
                  uVar7 = local_198 & 0xff;
                  local_1e4 = bVar2;
                  iVar9 = _isleadbyte(uVar7);
                  if (iVar9 != 0) {
                    local_190 = local_190 + 1;
                    uVar7 = __inc(uVar7,local_1a8);
                    local_1e3 = (undefined1)uVar7;
                  }
                  local_1f0[0] = L'?';
                  local_1f0[1] = L'\0';
                  __mbtowc_l(local_1f0,(char *)&local_1e4,
                             (size_t)(local_200.locinfo)->locale_name[3],&local_200);
                  *pwVar16 = local_1f0[0];
                  pwVar16 = pwVar16 + 1;
                  pFVar12 = extraout_ECX_06;
                  local_1c4 = pwVar16;
                }
              }
              else {
                pwVar19 = (wchar_t *)((int)pwVar19 + 1);
              }
            } while( true );
          }
          if (uVar4 == 100) goto LAB_0043bb6b;
          if (uVar4 < 0x65) {
LAB_0043b8b4:
            if (*local_1c0 != local_198) goto LAB_0043bee1;
            local_1a9 = local_1a9 + -1;
            if (local_1a1 == '\0') {
              local_1ec = local_204;
            }
            goto LAB_0043be21;
          }
          if (0x67 < uVar4) {
            if (uVar4 == 0x69) {
              local_1b8 = 100;
              goto LAB_0043b357;
            }
            if (uVar4 != 0x6e) goto LAB_0043b8b4;
            iVar9 = local_190;
            if (local_1a1 != '\0') goto LAB_0043be21;
            goto LAB_0043bdf5;
          }
          sVar14 = 0;
          if (local_198 == 0x2d) {
            *local_1b4 = 0x2d;
            sVar14 = 1;
LAB_0043b392:
            local_1a0 = local_1a0 + -1;
            local_190 = local_190 + 1;
            local_198 = __inc(local_1bc,local_1a8);
          }
          else if (local_198 == 0x2b) goto LAB_0043b392;
          if (local_1bc == (FILE *)0x0) {
            local_1a0 = -1;
          }
          while( true ) {
            uVar4 = local_198 & 0xff;
            iVar9 = _isdigit(uVar4);
            if ((iVar9 == 0) ||
               (iVar9 = local_1a0 + -1, bVar21 = local_1a0 == 0, local_1a0 = iVar9, bVar21)) break;
            local_1b0 = local_1b0 + 1;
            local_1b4[sVar14] = (byte)local_198;
            sVar14 = sVar14 + 1;
            iVar9 = ___check_float_string(sVar14,local_188,&local_1d4);
            if (iVar9 == 0) goto LAB_0043bef6;
            local_190 = local_190 + 1;
            local_198 = __inc(extraout_ECX,local_1a8);
          }
          local_1ac = **(byte **)local_200.locinfo[1].lc_codepage;
          if ((local_1ac == (byte)local_198) &&
             (iVar9 = local_1a0 + -1, bVar21 = local_1a0 != 0, local_1a0 = iVar9, bVar21)) {
            local_190 = local_190 + 1;
            local_198 = __inc(uVar4,local_1a8);
            local_1b4[sVar14] = local_1ac;
            sVar14 = sVar14 + 1;
            iVar9 = ___check_float_string(sVar14,local_188,&local_1d4);
            if (iVar9 == 0) goto LAB_0043bef6;
            while ((iVar9 = _isdigit(local_198 & 0xff), iVar9 != 0 &&
                   (iVar9 = local_1a0 + -1, bVar21 = local_1a0 != 0, local_1a0 = iVar9, bVar21))) {
              local_1b0 = local_1b0 + 1;
              local_1b4[sVar14] = (byte)local_198;
              sVar14 = sVar14 + 1;
              iVar9 = ___check_float_string(sVar14,local_188,&local_1d4);
              if (iVar9 == 0) goto LAB_0043bef6;
              local_190 = local_190 + 1;
              local_198 = __inc(extraout_ECX_00,local_1a8);
            }
          }
          sVar15 = sVar14;
          if ((local_1b0 != 0) &&
             (((local_198 == 0x65 || (local_198 == 0x45)) &&
              (iVar9 = local_1a0 + -1, bVar21 = local_1a0 != 0, local_1a0 = iVar9, bVar21)))) {
            local_1b4[sVar14] = 0x65;
            sVar15 = sVar14 + 1;
            iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
            if (iVar9 == 0) goto LAB_0043bef6;
            local_190 = local_190 + 1;
            local_198 = __inc(extraout_ECX_01,local_1a8);
            if (local_198 == 0x2d) {
              local_1b4[sVar15] = 0x2d;
              sVar15 = sVar14 + 2;
              iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
              uVar11 = extraout_ECX_03;
              if (iVar9 == 0) goto LAB_0043bef6;
LAB_0043b603:
              if (local_1a0 == 0) {
                local_1a0 = 0;
              }
              else {
                local_190 = local_190 + 1;
                local_1a0 = local_1a0 + -1;
                local_198 = __inc(uVar11,local_1a8);
              }
            }
            else {
              uVar11 = extraout_ECX_02;
              if (local_198 == 0x2b) goto LAB_0043b603;
            }
            while ((iVar9 = _isdigit(local_198 & 0xff), iVar9 != 0 &&
                   (iVar9 = local_1a0 + -1, bVar21 = local_1a0 != 0, local_1a0 = iVar9, bVar21))) {
              local_1b0 = local_1b0 + 1;
              local_1b4[sVar15] = (byte)local_198;
              sVar15 = sVar15 + 1;
              iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
              if (iVar9 == 0) goto LAB_0043bef6;
              local_190 = local_190 + 1;
              local_198 = __inc(extraout_ECX_04,local_1a8);
            }
          }
          local_190 = local_190 + -1;
          if (local_198 != 0xffffffff) {
            __ungetc_nolock(local_198,local_1a8);
          }
          if (local_1b0 != 0) {
            if (local_1a1 == '\0') {
              local_1d0 = local_1d0 + 1;
              plVar24 = &local_200;
              local_1b4[sVar15] = 0;
              iVar9 = (char)local_189 + -1;
              pwVar16 = local_1c4;
              puVar23 = local_1b4;
              pcVar6 = (code *)DecodePointer(PTR_LAB_00458274);
              (*pcVar6)(iVar9,pwVar16,puVar23,plVar24);
            }
            goto LAB_0043be21;
          }
          goto LAB_0043bef6;
        }
        if (uVar4 == 0x70) {
          local_189 = 1;
          goto LAB_0043bb6b;
        }
        if (uVar4 == 0x73) goto LAB_0043b73e;
        if (uVar4 == 0x75) goto LAB_0043bb6b;
        if (uVar4 != 0x78) {
          if (uVar4 == 0x7b) {
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
            pbVar20 = local_1c0 + 1;
            if (local_1c0[1] == 0x5e) {
              pbVar20 = local_1c0 + 2;
              local_1ac = 0xff;
            }
            _memset(local_28,0,0x20);
            pFVar12 = extraout_ECX_07;
            bVar2 = local_1d5;
            if (*pbVar20 == 0x5d) {
              local_28[0xb] = 0x20;
              pbVar20 = pbVar20 + 1;
              bVar2 = 0x5d;
            }
            while( true ) {
              bVar13 = *pbVar20;
              local_1c0 = pbVar20;
              if (bVar13 == 0x5d) break;
              if (((bVar13 == 0x2d) && (bVar2 != 0)) && (bVar1 = pbVar20[1], bVar1 != 0x5d)) {
                bVar13 = bVar1;
                local_189 = bVar2;
                if (bVar2 < bVar1) {
                  bVar13 = bVar2;
                  local_189 = bVar1;
                }
                if (bVar13 < local_189) {
                  uVar18 = (uint)bVar13;
                  uVar7 = (uint)(byte)(local_189 - bVar13);
                  do {
                    local_28[uVar18 >> 3] = local_28[uVar18 >> 3] | '\x01' << ((byte)uVar18 & 7);
                    uVar18 = uVar18 + 1;
                    uVar7 = uVar7 - 1;
                    uVar4 = local_1b8;
                  } while (uVar7 != 0);
                }
                pFVar12 = (FILE *)(local_189 & 7);
                local_28[local_189 >> 3] = local_28[local_189 >> 3] | '\x01' << (sbyte)pFVar12;
                pbVar20 = pbVar20 + 2;
                bVar2 = 0;
              }
              else {
                pFVar12 = (FILE *)(bVar13 & 7);
                local_28[bVar13 >> 3] = local_28[bVar13 >> 3] | '\x01' << (sbyte)pFVar12;
                uVar4 = local_1b8;
                pbVar20 = pbVar20 + 1;
                bVar2 = bVar13;
              }
            }
            goto LAB_0043b74e;
          }
          goto LAB_0043b8b4;
        }
LAB_0043b357:
        if (local_198 == 0x2d) {
          local_1ab = '\x01';
LAB_0043b9f1:
          local_1a0 = local_1a0 + -1;
          if ((local_1a0 == 0) && (local_1bc != (FILE *)0x0)) {
            local_191 = '\x01';
          }
          else {
            local_190 = local_190 + 1;
            local_198 = __inc(local_1bc,local_1a8);
            pFVar12 = extraout_ECX_08;
          }
        }
        else if (local_198 == 0x2b) goto LAB_0043b9f1;
        if (local_198 == 0x30) {
          local_190 = local_190 + 1;
          local_198 = __inc(pFVar12,local_1a8);
          if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
            local_190 = local_190 + 1;
            local_198 = __inc(extraout_ECX_09,local_1a8);
            if ((local_1bc != (FILE *)0x0) && (local_1a0 = local_1a0 + -2, local_1a0 < 1)) {
              local_191 = local_191 + '\x01';
            }
            local_1b8 = 0x78;
          }
          else {
            local_1b0 = 1;
            if (local_1b8 == 0x78) {
              local_190 = local_190 + -1;
              if (local_198 != 0xffffffff) {
                __ungetc_nolock(local_198,local_1a8);
              }
              local_198 = 0x30;
            }
            else {
              if ((local_1bc != (FILE *)0x0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0)) {
                local_191 = local_191 + '\x01';
              }
              local_1b8 = 0x6f;
            }
          }
        }
LAB_0043bbb2:
        if (local_1dc == 0) {
          iVar9 = local_1e8;
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              uVar7 = local_198 & 0xff;
              iVar8 = _isdigit(uVar7);
              if (iVar8 == 0) goto LAB_0043bd9f;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_0043bd9f;
                iVar9 = iVar9 << 3;
              }
              else {
                iVar9 = iVar9 * 10;
              }
LAB_0043bd66:
              local_1b0 = local_1b0 + 1;
              iVar9 = iVar9 + -0x30 + uVar4;
              if ((local_1bc != (FILE *)0x0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0))
              goto LAB_0043bdb8;
              local_190 = local_190 + 1;
              local_198 = __inc(uVar7,local_1a8);
            }
            iVar8 = _isxdigit(local_198 & 0xff);
            if (iVar8 != 0) {
              iVar9 = iVar9 << 4;
              uVar7 = uVar4;
              uVar4 = __hextodec((byte)uVar4);
              local_198 = uVar4;
              goto LAB_0043bd66;
            }
LAB_0043bd9f:
            local_190 = local_190 + -1;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
            }
          }
LAB_0043bdb8:
          if (local_1ab != '\0') {
            iVar9 = -iVar9;
          }
        }
        else {
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              uVar7 = local_198 & 0xff;
              iVar9 = _isdigit(uVar7);
              if (iVar9 == 0) goto LAB_0043bcab;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_0043bcab;
                lVar22 = CONCAT44(local_1cc._4_4_ << 3 | (uint)local_1cc >> 0x1d,
                                  (uint)local_1cc << 3);
              }
              else {
                lVar22 = __allmul((uint)local_1cc,local_1cc._4_4_,10,0);
                uVar7 = extraout_ECX_10;
              }
LAB_0043bc62:
              local_1b0 = local_1b0 + 1;
              local_1cc = lVar22 + (int)(uVar4 - 0x30);
              if ((local_1bc != (FILE *)0x0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0))
              goto LAB_0043bcc4;
              local_190 = local_190 + 1;
              local_198 = __inc(uVar7,local_1a8);
            }
            iVar9 = _isxdigit(local_198 & 0xff);
            if (iVar9 != 0) {
              lVar22 = CONCAT44(local_1cc._4_4_ << 4 | (uint)local_1cc >> 0x1c,(uint)local_1cc << 4)
              ;
              uVar7 = uVar4;
              uVar4 = __hextodec((byte)uVar4);
              local_198 = uVar4;
              goto LAB_0043bc62;
            }
LAB_0043bcab:
            local_190 = local_190 + -1;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
            }
          }
LAB_0043bcc4:
          iVar9 = local_1e8;
          if (local_1ab != '\0') {
            local_1cc = CONCAT44(-(local_1cc._4_4_ + (uint)((uint)local_1cc != 0)),-(uint)local_1cc)
            ;
          }
        }
        if (local_1b8 == 0x46) {
          local_1b0 = 0;
        }
        if (local_1b0 == 0) goto LAB_0043bef6;
        if (local_1a1 == '\0') {
          local_1d0 = local_1d0 + 1;
LAB_0043bdf5:
          if (local_1dc == 0) {
            if (local_189 == 0) {
              *local_1c4 = (wchar_t)iVar9;
            }
            else {
              *(int *)local_1c4 = iVar9;
            }
          }
          else {
            *(uint *)local_1c4 = (uint)local_1cc;
            *(int *)(local_1c4 + 2) = local_1cc._4_4_;
          }
        }
LAB_0043be21:
        local_1a9 = local_1a9 + '\x01';
        pbVar20 = local_1c0 + 1;
        local_1c0 = pbVar20;
LAB_0043be9a:
        param_2 = pbVar20;
        if ((local_198 == 0xffffffff) &&
           ((*pbVar20 != 0x25 || (param_2 = local_1c0, local_1c0[1] != 0x6e)))) goto LAB_0043bef6;
LAB_0043beb6:
        bVar2 = *param_2;
        if (bVar2 == 0) goto LAB_0043bef6;
        goto LAB_0043b07e;
      }
LAB_0043be40:
      local_190 = local_190 + 1;
      uVar7 = __inc(pvVar5,local_1a8);
      pbVar20 = param_2 + 1;
      local_1c0 = pbVar20;
      local_198 = uVar7;
      if (*param_2 == uVar7) {
        uVar4 = uVar7 & 0xff;
        iVar9 = _isleadbyte(uVar4);
        if (iVar9 != 0) {
          local_190 = local_190 + 1;
          uVar4 = __inc(uVar4,local_1a8);
          bVar2 = *pbVar20;
          pbVar20 = param_2 + 2;
          local_1c0 = pbVar20;
          if (bVar2 != uVar4) {
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
            }
            goto LAB_0043bee1;
          }
          local_190 = local_190 + -1;
        }
        goto LAB_0043be9a;
      }
LAB_0043bee1:
      if (uVar7 != 0xffffffff) {
        __ungetc_nolock(local_198,local_1a8);
      }
LAB_0043bef6:
      if (local_1d4 == 1) {
        _free(local_1b4);
      }
      if (local_198 == 0xffffffff) {
        if (local_1f4 != '\0') {
          *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
        }
        goto LAB_0043bf58;
      }
    }
    if (local_1f4 != '\0') {
      *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
    }
  }
LAB_0043bf58:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
LAB_0043bb00:
  local_190 = local_190 + -1;
  if (local_198 != 0xffffffff) {
    __ungetc_nolock(local_198,local_1a8);
  }
LAB_0043bb19:
  if (pwVar19 == pwVar16) goto LAB_0043bef6;
  if ((local_1a1 == '\0') && (local_1d0 = local_1d0 + 1, uVar4 != 99)) {
    if (local_1aa == '\0') {
      *(byte *)local_1c4 = 0;
    }
    else {
      *local_1c4 = L'\0';
    }
  }
  goto LAB_0043be21;
}

