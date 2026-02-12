
void __cdecl FUN_00433cd9(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  code *pcVar7;
  errno_t eVar8;
  undefined *puVar9;
  int iVar10;
  int extraout_ECX;
  uint uVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  undefined4 local_278;
  size_t local_274;
  uint local_26c;
  int *local_268;
  wchar_t *local_264;
  int local_260;
  int local_25c;
  localeinfo_struct local_258;
  int local_250;
  char local_24c;
  uint local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  FILE *local_234;
  undefined1 local_230;
  char local_22f;
  size_t local_22c;
  int local_228;
  wchar_t *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_234 = param_1;
  local_220 = param_4;
  local_25c = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_260 = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_258,param_3);
  local_268 = __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar5 = __fileno(param_1);
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar9 = &DAT_00457a98;
      }
      else {
        puVar9 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_0045a740)[(int)uVar5 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
          puVar9 = &DAT_00457a98;
        }
        else {
          puVar9 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_0045a740)[(int)uVar5 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_00433dde;
      }
    }
    else {
LAB_00433dde:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_228 = 0;
        local_22c = 0;
        local_248 = 0;
        local_264 = (wchar_t *)0x0;
        if (local_215 != 0) {
          do {
            pbVar12 = param_2 + 1;
            local_244 = pbVar12;
            if (local_228 < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar5 = (byte)(&DAT_0044de50)[(char)local_215] & 0xf;
            }
            else {
              uVar5 = 0;
            }
            local_248 = (uint)((byte)(&DAT_0044de70)[local_248 + uVar5 * 9] >> 4);
            if (local_248 == 8) goto LAB_00433d4f;
            switch(local_248) {
            case 0:
switchD_00433e6b_caseD_0:
              local_240 = 0;
              iVar10 = __isleadbyte_l((uint)local_215,&local_258);
              if (iVar10 != 0) {
                write_char();
                local_244 = param_2 + 2;
                if (*pbVar12 == 0) goto LAB_00433d4f;
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_278 = 0;
              local_260 = 0;
              local_23c = 0;
              local_238 = 0;
              local_214 = 0;
              local_240 = 0;
              break;
            case 2:
              if (local_215 == 0x20) {
                local_214 = local_214 | 2;
              }
              else if (local_215 == 0x23) {
                local_214 = local_214 | 0x80;
              }
              else if (local_215 == 0x2b) {
                local_214 = local_214 | 1;
              }
              else if (local_215 == 0x2d) {
                local_214 = local_214 | 4;
              }
              else if (local_215 == 0x30) {
                local_214 = local_214 | 8;
              }
              break;
            case 3:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_23c = *(int *)param_4;
                if (local_23c < 0) {
                  local_214 = local_214 | 4;
                  local_23c = -local_23c;
                }
              }
              else {
                local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 4:
              local_21c = 0;
              break;
            case 5:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_21c = *(int *)param_4;
                if (local_21c < 0) {
                  local_21c = -1;
                }
              }
              else {
                local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 6:
              if (local_215 == 0x49) {
                bVar1 = *pbVar12;
                if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                  local_214 = local_214 | 0x8000;
                  local_244 = param_2 + 3;
                }
                else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                  local_214 = local_214 & 0xffff7fff;
                  local_244 = param_2 + 3;
                }
                else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                         ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                  local_248 = 0;
                  goto switchD_00433e6b_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar12 == 0x6c) {
                  local_214 = local_214 | 0x1000;
                  local_244 = param_2 + 2;
                }
                else {
                  local_214 = local_214 | 0x10;
                }
              }
              else if (local_215 == 0x77) {
                local_214 = local_214 | 0x800;
              }
              break;
            case 7:
              if ((char)local_215 < 'e') {
                if (local_215 == 100) {
LAB_00434337:
                  local_214 = local_214 | 0x40;
LAB_0043433e:
                  local_220 = param_4;
                  local_22c = 10;
LAB_00434348:
                  if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                    pwVar13 = local_220 + 2;
                    if ((local_214 & 0x20) == 0) {
                      uVar5 = *(uint *)local_220;
                      if ((local_214 & 0x40) == 0) {
                        uVar11 = 0;
                        local_220 = pwVar13;
                      }
                      else {
                        uVar11 = (int)uVar5 >> 0x1f;
                        local_220 = pwVar13;
                      }
                    }
                    else {
                      if ((local_214 & 0x40) == 0) {
                        uVar5 = (uint)(ushort)*local_220;
                      }
                      else {
                        uVar5 = (uint)*local_220;
                      }
                      uVar11 = (int)uVar5 >> 0x1f;
                      local_220 = pwVar13;
                    }
                  }
                  else {
                    uVar5 = *(uint *)local_220;
                    uVar11 = *(uint *)(local_220 + 2);
                    local_220 = local_220 + 4;
                  }
                  if ((((local_214 & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
                    bVar14 = uVar5 != 0;
                    uVar5 = -uVar5;
                    uVar11 = -(uVar11 + bVar14);
                    local_214 = local_214 | 0x100;
                  }
                  uVar15 = CONCAT44(uVar11,uVar5);
                  if ((local_214 & 0x9000) == 0) {
                    uVar11 = 0;
                  }
                  if (local_21c < 0) {
                    local_21c = 1;
                  }
                  else {
                    local_214 = local_214 & 0xfffffff7;
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                  }
                  if (uVar5 == 0 && uVar11 == 0) {
                    local_238 = 0;
                  }
                  pwVar13 = &local_11;
                  while( true ) {
                    uVar5 = (uint)uVar15;
                    iVar10 = local_21c + -1;
                    if ((local_21c < 1) && (uVar5 == 0 && uVar11 == 0)) break;
                    local_21c = iVar10;
                    uVar15 = __aulldvrm(uVar5,uVar11,local_22c,(int)local_22c >> 0x1f);
                    uVar11 = (uint)((ulonglong)uVar15 >> 0x20);
                    iVar10 = extraout_ECX + 0x30;
                    if (0x39 < iVar10) {
                      iVar10 = iVar10 + local_25c;
                    }
                    *(char *)pwVar13 = (char)iVar10;
                    pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                    local_26c = uVar5;
                  }
                  local_22c = (int)&local_11 + -(int)pwVar13;
                  local_224 = (wchar_t *)((int)pwVar13 + 1);
                  local_21c = iVar10;
                  if (((local_214 & 0x200) != 0) &&
                     ((local_22c == 0 || (*(char *)local_224 != '0')))) {
                    *(char *)pwVar13 = '0';
                    local_22c = (int)&local_11 + -(int)pwVar13 + 1;
                    local_224 = pwVar13;
                  }
                }
                else if ((char)local_215 < 'T') {
                  if (local_215 == 0x53) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
                    goto LAB_0043414f;
                  }
                  if (local_215 == 0x41) {
LAB_00434102:
                    local_215 = local_215 + 0x20;
                    local_278 = 1;
LAB_0043436d:
                    local_214 = local_214 | 0x40;
                    local_26c = 0x200;
                    pwVar13 = local_210;
                    uVar5 = local_26c;
                    pwVar17 = local_210;
                    if (local_21c < 0) {
                      local_21c = 6;
                    }
                    else if (local_21c == 0) {
                      if (local_215 == 0x67) {
                        local_21c = 1;
                      }
                    }
                    else {
                      if (0x200 < local_21c) {
                        local_21c = 0x200;
                      }
                      if (0xa3 < local_21c) {
                        uVar5 = local_21c + 0x15d;
                        local_224 = local_210;
                        local_264 = (wchar_t *)__malloc_crt(uVar5);
                        pwVar13 = local_264;
                        pwVar17 = local_264;
                        if (local_264 == (wchar_t *)0x0) {
                          local_21c = 0xa3;
                          pwVar13 = local_210;
                          uVar5 = local_26c;
                          pwVar17 = local_224;
                        }
                      }
                    }
                    local_224 = pwVar17;
                    local_26c = uVar5;
                    local_284 = *(undefined4 *)param_4;
                    local_220 = param_4 + 4;
                    local_280 = *(undefined4 *)(param_4 + 2);
                    plVar19 = &local_258;
                    iVar6 = (int)(char)local_215;
                    puVar16 = &local_284;
                    pwVar17 = pwVar13;
                    uVar5 = local_26c;
                    iVar10 = local_21c;
                    uVar18 = local_278;
                    pcVar7 = (code *)DecodePointer(PTR_LAB_00458270);
                    (*pcVar7)(puVar16,pwVar17,uVar5,iVar6,iVar10,uVar18,plVar19);
                    uVar5 = local_214 & 0x80;
                    if ((uVar5 != 0) && (local_21c == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = (code *)DecodePointer(PTR_LAB_0045827c);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((local_215 == 0x67) && (uVar5 == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = (code *)DecodePointer(PTR_LAB_00458278);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((char)*pwVar13 == '-') {
                      local_214 = local_214 | 0x100;
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                      local_224 = pwVar13;
                    }
LAB_00434288:
                    local_22c = _strlen((char *)pwVar13);
                  }
                  else if (local_215 == 0x43) {
                    local_220 = param_4;
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
LAB_004341c8:
                    if ((local_214 & 0x810) == 0) {
                      local_210[0]._0_1_ = (char)*local_220;
                      local_22c = 1;
                      local_220 = local_220 + 2;
                    }
                    else {
                      wVar2 = *local_220;
                      local_220 = local_220 + 2;
                      eVar8 = _wctomb_s((int *)&local_22c,(char *)local_210,0x200,wVar2);
                      if (eVar8 != 0) {
                        local_260 = 1;
                      }
                    }
                    local_224 = local_210;
                  }
                  else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_00434102;
                }
                else {
                  if (local_215 == 0x58) goto LAB_004344ca;
                  if (local_215 == 0x5a) {
                    psVar3 = *(short **)param_4;
                    local_220 = param_4 + 2;
                    if ((psVar3 == (short *)0x0) ||
                       (local_224 = *(wchar_t **)(psVar3 + 2), local_224 == (wchar_t *)0x0)) {
                      local_224 = (wchar_t *)PTR_DAT_00457a90;
                      pwVar13 = (wchar_t *)PTR_DAT_00457a90;
                      goto LAB_00434288;
                    }
                    local_22c = (size_t)*psVar3;
                    if ((local_214 & 0x800) == 0) {
                      local_240 = 0;
                    }
                    else {
                      local_22c = (int)local_22c / 2;
                      local_240 = 1;
                    }
                  }
                  else {
                    if (local_215 == 0x61) goto LAB_0043436d;
                    if (local_215 == 99) goto LAB_004341c8;
                  }
                }
LAB_004346aa:
                if (local_260 == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_004346f7;
                        local_230 = 0x20;
                      }
                      else {
                        local_230 = 0x2b;
                      }
                    }
                    else {
                      local_230 = 0x2d;
                    }
                    local_238 = 1;
                  }
LAB_004346f7:
                  uVar5 = (local_23c - local_22c) - local_238;
                  local_26c = uVar5;
                  if ((local_214 & 0xc) == 0) {
                    do {
                      if ((int)uVar5 < 1) break;
                      uVar5 = uVar5 - 1;
                      write_char();
                    } while (local_228 != -1);
                  }
                  FUN_00433c77(&local_230,local_238);
                  if (((local_214 & 8) != 0) && (uVar5 = local_26c, (local_214 & 4) == 0)) {
                    do {
                      if ((int)uVar5 < 1) break;
                      write_char();
                      uVar5 = uVar5 - 1;
                    } while (local_228 != -1);
                  }
                  if ((local_240 == 0) || ((int)local_22c < 1)) {
                    FUN_00433c77(local_224,local_22c);
                  }
                  else {
                    local_274 = local_22c;
                    pwVar13 = local_224;
                    do {
                      wVar2 = *pwVar13;
                      local_274 = local_274 - 1;
                      pwVar13 = pwVar13 + 1;
                      eVar8 = _wctomb_s(&local_27c,(char *)((int)&local_11 + 1),6,wVar2);
                      if ((eVar8 != 0) || (local_27c == 0)) {
                        local_228 = -1;
                        break;
                      }
                      FUN_00433c77((int)&local_11 + 1,local_27c);
                    } while (local_274 != 0);
                  }
                  if ((-1 < local_228) && (uVar5 = local_26c, (local_214 & 4) != 0)) {
                    do {
                      if ((int)uVar5 < 1) break;
                      write_char();
                      uVar5 = uVar5 - 1;
                    } while (local_228 != -1);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_0043414f:
                    iVar10 = local_21c;
                    if (local_21c == -1) {
                      iVar10 = 0x7fffffff;
                    }
                    local_220 = param_4 + 2;
                    local_224 = *(wchar_t **)param_4;
                    if ((local_214 & 0x810) == 0) {
                      pwVar13 = local_224;
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_DAT_00457a90;
                        pwVar13 = (wchar_t *)PTR_DAT_00457a90;
                      }
                      for (; (iVar10 != 0 && (iVar10 = iVar10 + -1, (char)*pwVar13 != '\0'));
                          pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224;
                    }
                    else {
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_u__null__00457a94;
                      }
                      local_240 = 1;
                      for (pwVar13 = local_224;
                          (iVar10 != 0 && (iVar10 = iVar10 + -1, *pwVar13 != L'\0'));
                          pwVar13 = pwVar13 + 1) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224 >> 1;
                    }
                    goto LAB_004346aa;
                  }
                  if (local_215 == 0x75) goto LAB_0043433e;
                  if (local_215 != 0x78) goto LAB_004346aa;
                  local_25c = 0x27;
LAB_004344fc:
                  local_22c = 0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_22f = (char)local_25c + 'Q';
                    local_230 = 0x30;
                    local_238 = 2;
                  }
                  goto LAB_00434348;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_004344ca:
                  local_25c = 7;
                  local_220 = param_4;
                  goto LAB_004344fc;
                }
                if ((char)local_215 < 'e') goto LAB_004346aa;
                param_4 = local_220;
                if ((char)local_215 < 'h') goto LAB_0043436d;
                if (local_215 == 0x69) goto LAB_00434337;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_004346aa;
                  local_22c = 8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_00434348;
                }
                piVar4 = *(int **)local_220;
                local_220 = local_220 + 2;
                bVar14 = FUN_0042c60e();
                if (CONCAT31(extraout_var,bVar14) == 0) goto LAB_00433d4f;
                if ((local_214 & 0x20) == 0) {
                  *piVar4 = local_228;
                }
                else {
                  *(undefined2 *)piVar4 = (undefined2)local_228;
                }
                local_260 = 1;
              }
              if (local_264 != (wchar_t *)0x0) {
                _free(local_264);
                local_264 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_244;
            param_2 = local_244;
            param_4 = local_220;
          } while (local_215 != 0);
          if ((local_248 != 0) && (local_248 != 7)) goto LAB_00433d4f;
        }
        if (local_24c != '\0') {
          *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
        }
        goto LAB_004348db;
      }
    }
  }
LAB_00433d4f:
  piVar4 = __errno();
  *piVar4 = 0x16;
  FUN_00433a30();
  if (local_24c != '\0') {
    *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
  }
LAB_004348db:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

