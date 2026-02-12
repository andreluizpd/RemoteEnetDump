
void FUN_0042aa00(int *param_1)

{
  int *piVar1;
  char cVar2;
  uchar *puVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  rsize_t rVar9;
  char *pcVar10;
  uint uVar11;
  ushort *puVar12;
  size_t sVar13;
  undefined **local_2f4;
  int *local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  int *local_2e0;
  ushort *local_2dc;
  int local_2d8;
  undefined **local_2d4;
  int *local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  size_t local_2c0;
  uchar **local_2bc;
  int *local_2b8;
  undefined **local_2b4 [3];
  uchar *local_2a8 [3];
  size_t local_29c;
  undefined1 local_294 [264];
  undefined **local_18c [3];
  uchar *local_180 [3];
  size_t local_174;
  undefined1 local_16c [84];
  undefined **local_118 [3];
  uchar *local_10c [3];
  size_t local_100;
  undefined1 local_f8 [84];
  int local_a4 [7];
  undefined **local_88 [3];
  uchar *local_7c [3];
  size_t local_70;
  undefined1 local_68 [84];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044778b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2b8 = param_1;
  if ((int *)*param_1 != (int *)0x0) {
    FUN_004049b0((int *)*param_1,param_1[1]);
    _free((void *)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  piVar6 = local_a4;
  local_2c0 = 0;
  local_2e0 = piVar6;
  iVar5 = GetIpAddrTable(piVar6,&local_2c0,0);
  if ((iVar5 != 0x7a) ||
     (piVar6 = (int *)_malloc(local_2c0), local_2e0 = piVar6, piVar6 != (int *)0x0)) {
    iVar5 = GetIpAddrTable(piVar6,&local_2c0,0);
    if ((iVar5 == 0) && (local_2d8 = 0, 0 < *piVar6)) {
      puVar12 = (ushort *)((int)piVar6 + 0x1a);
      do {
        if ((*puVar12 & 0x48) == 0) {
          local_2dc = puVar12;
          FUN_0040c410((int *)local_88);
          local_8 = 0;
          FUN_0040c410((int *)local_118);
          local_8._0_1_ = 1;
          FUN_0040c410((int *)local_18c);
          local_8._0_1_ = 2;
          pcVar7 = inet_ntoa((in_addr)((_union_1226 *)(puVar12 + -0xb))->S_un_b);
          if (pcVar7 == (char *)0x0) {
            rVar9 = 0;
          }
          else {
            pcVar10 = pcVar7;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            rVar9 = (int)pcVar10 - (int)(pcVar7 + 1);
          }
          FUN_00403380(local_7c,pcVar7,rVar9);
          pcVar7 = inet_ntoa((in_addr)((_union_1226 *)(puVar12 + -7))->S_un_b);
          if (pcVar7 == (char *)0x0) {
            rVar9 = 0;
          }
          else {
            pcVar10 = pcVar7;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            rVar9 = (int)pcVar10 - (int)(pcVar7 + 1);
          }
          FUN_00403380(local_10c,pcVar7,rVar9);
          pcVar7 = inet_ntoa((in_addr)((_union_1226 *)(puVar12 + -5))->S_un_b);
          if (pcVar7 == (char *)0x0) {
            rVar9 = 0;
          }
          else {
            pcVar10 = pcVar7;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            rVar9 = (int)pcVar10 - (int)(pcVar7 + 1);
          }
          FUN_00403380(local_180,pcVar7,rVar9);
          bVar4 = FUN_00422050((char *)local_7c[0],"127.0",'\0');
          if (!bVar4) {
            FUN_0042a500(&local_2d4,local_7c,".",'\0');
            local_8._0_1_ = 3;
            FUN_0042a500(&local_2f4,local_10c,".",'\0');
            local_8._0_1_ = 4;
            if (local_2cc == local_2ec) {
              FUN_00403220((int *)local_2b4);
              local_8 = CONCAT31(local_8._1_3_,5);
              uVar11 = 0;
              if (local_2cc != 0) {
                do {
                  if (*(int *)(local_2a8[0] + -0xc) != 0) {
                    FUN_00404d00(local_2a8,0x2e);
                  }
                  if (uVar11 < local_2ec) {
                    piVar6 = local_2f0 + uVar11;
                  }
                  else {
                    piVar6 = (int *)0x0;
                  }
                  iVar5 = __mbscmp((uchar *)*piVar6,"255");
                  if (iVar5 == 0) {
                    if (uVar11 < local_2cc) {
                      sVar13 = *(size_t *)((char *)local_2d0[uVar11] + -0xc);
                      pcVar7 = (char *)local_2d0[uVar11];
                    }
                    else {
                      sVar13 = *(size_t *)(pcRam00000000 + -0xc);
                      pcVar7 = pcRam00000000;
                    }
                  }
                  else {
                    sVar13 = 3;
                    pcVar7 = "255";
                  }
                  FUN_00404c40(local_2a8,pcVar7,sVar13);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < local_2cc);
              }
              if (*(int *)(local_2a8[0] + -0xc) != 0) {
                uVar11 = 0;
                if (local_2b8[1] != 0) {
                  if (local_2b8[1] == 0) goto LAB_0042b19d;
                  do {
                    if (local_2a8[0] == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00401760(0x80004005);
                    }
                    iVar5 = __mbscmp(*(uchar **)(*local_2b8 + uVar11 * 4),local_2a8[0]);
                    if (iVar5 == 0) goto LAB_0042ad4b;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < (uint)local_2b8[1]);
                }
                puVar3 = local_2a8[0];
                uVar11 = local_2b8[1];
                if (((uint)local_2b8[2] <= uVar11) &&
                   (uVar8 = FUN_00404900(local_2b8,uVar11 + 1), (char)uVar8 == '\0')) {
                    /* WARNING: Subroutine does not return */
                  FUN_00401760(0x8007000e);
                }
                local_2bc = (uchar **)(*local_2b8 + uVar11 * 4);
                local_8._0_1_ = 6;
                if (local_2bc != (uchar **)0x0) {
                  FUN_00404d60(local_2bc,(char *)puVar3);
                }
                local_8 = (uint)local_8._1_3_ << 8;
                local_2b8[1] = local_2b8[1] + 1;
              }
LAB_0042ad4b:
              local_2b4[0] = ATL::
                             CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,260>
                             ::vftable;
              local_8 = CONCAT31((int3)((uint)local_8 >> 8),8);
              if (local_29c != 0) {
                _memset(local_294,0,local_29c);
              }
              piVar6 = *(int **)(local_2a8[0] + -0x10);
              if (*(int *)(local_2a8[0] + -0xc) != 0) {
                piVar1 = (int *)(local_2a8[0] + -4);
                if (*(int *)(local_2a8[0] + -4) < 0) {
                  if (*(int *)(local_2a8[0] + -8) < 0) goto LAB_0042b19d;
                  local_2a8[0][-0xffffffff0000000c] = '\0';
                  local_2a8[0][-0xffffffff0000000b] = '\0';
                  local_2a8[0][-0xffffffff0000000a] = '\0';
                  local_2a8[0][-0xffffffff00000009] = '\0';
                  *local_2a8[0] = '\0';
                }
                else {
                  LOCK();
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1 || iVar5 + -1 < 0) {
                    (**(code **)(**(int **)(local_2a8[0] + -0x10) + 4))(local_2a8[0] + -0x10);
                  }
                  iVar5 = (**(code **)(*piVar6 + 0xc))();
                  local_2a8[0] = (uchar *)(iVar5 + 0x10);
                }
              }
              local_8._1_3_ = (uint3)((uint)local_8 >> 8);
              local_2bc = local_2a8;
              local_8._0_1_ = 7;
              piVar6 = (int *)(local_2a8[0] + -4);
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 1 || iVar5 + -1 < 0) {
                (**(code **)(**(int **)(local_2a8[0] + -0x10) + 4))(local_2a8[0] + -0x10);
              }
              local_2b4[0] = ATL::CFixedStringMgr::vftable;
              puVar12 = local_2dc;
            }
            local_2f4 = CStringTokenizerA::vftable;
            local_8._0_1_ = 10;
            if (local_2f0 != (int *)0x0) {
              FUN_004049b0(local_2f0,local_2ec);
              _free(local_2f0);
              local_2f0 = (int *)0x0;
            }
            local_2ec = 0;
            local_2e8 = 0;
            local_8._0_1_ = 3;
            if (local_2f0 != (int *)0x0) {
              FUN_004049b0(local_2f0,0);
              _free(local_2f0);
            }
            local_2d4 = CStringTokenizerA::vftable;
            local_8._0_1_ = 0xb;
            if (local_2d0 != (int *)0x0) {
              FUN_004049b0(local_2d0,local_2cc);
              _free(local_2d0);
              local_2d0 = (int *)0x0;
            }
            local_2cc = 0;
            local_2c8 = 0;
            local_8._0_1_ = 2;
            if (local_2d0 != (int *)0x0) {
              FUN_004049b0(local_2d0,0);
              _free(local_2d0);
            }
          }
          local_18c[0] = ATL::
                         CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,80>
                         ::vftable;
          local_8 = CONCAT31(local_8._1_3_,0xd);
          if (local_174 != 0) {
            _memset(local_16c,0,local_174);
          }
          piVar6 = *(int **)(local_180[0] + -0x10);
          if (*(int *)(local_180[0] + -0xc) != 0) {
            piVar1 = (int *)(local_180[0] + -4);
            if (*(int *)(local_180[0] + -4) < 0) {
              if (*(int *)(local_180[0] + -8) < 0) goto LAB_0042b19d;
              local_180[0][-0xffffffff0000000c] = '\0';
              local_180[0][-0xffffffff0000000b] = '\0';
              local_180[0][-0xffffffff0000000a] = '\0';
              local_180[0][-0xffffffff00000009] = '\0';
              *local_180[0] = '\0';
            }
            else {
              LOCK();
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1 || iVar5 + -1 < 0) {
                (**(code **)(**(int **)(local_180[0] + -0x10) + 4))(local_180[0] + -0x10);
              }
              iVar5 = (**(code **)(*piVar6 + 0xc))();
              local_180[0] = (uchar *)(iVar5 + 0x10);
            }
          }
          local_8._1_3_ = (uint3)((uint)local_8 >> 8);
          local_2bc = local_180;
          local_8._0_1_ = 0xc;
          piVar6 = (int *)(local_180[0] + -4);
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1 || iVar5 + -1 < 0) {
            (**(code **)(**(int **)(local_180[0] + -0x10) + 4))(local_180[0] + -0x10);
          }
          local_18c[0] = ATL::CFixedStringMgr::vftable;
          local_118[0] = ATL::
                         CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,80>
                         ::vftable;
          local_8 = CONCAT31(local_8._1_3_,0x10);
          if (local_100 != 0) {
            _memset(local_f8,0,local_100);
          }
          piVar6 = *(int **)(local_10c[0] + -0x10);
          if (*(int *)(local_10c[0] + -0xc) != 0) {
            piVar1 = (int *)(local_10c[0] + -4);
            if (*(int *)(local_10c[0] + -4) < 0) {
              if (*(int *)(local_10c[0] + -8) < 0) goto LAB_0042b19d;
              local_10c[0][-0xffffffff0000000c] = '\0';
              local_10c[0][-0xffffffff0000000b] = '\0';
              local_10c[0][-0xffffffff0000000a] = '\0';
              local_10c[0][-0xffffffff00000009] = '\0';
              *local_10c[0] = '\0';
            }
            else {
              LOCK();
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1 || iVar5 + -1 < 0) {
                (**(code **)(**(int **)(local_10c[0] + -0x10) + 4))(local_10c[0] + -0x10);
              }
              iVar5 = (**(code **)(*piVar6 + 0xc))();
              local_10c[0] = (uchar *)(iVar5 + 0x10);
            }
          }
          local_2bc = local_10c;
          local_8 = CONCAT31((int3)((uint)local_8 >> 8),0xf);
          piVar6 = (int *)(local_10c[0] + -4);
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1 || iVar5 + -1 < 0) {
            (**(code **)(**(int **)(local_10c[0] + -0x10) + 4))(local_10c[0] + -0x10);
          }
          local_118[0] = ATL::CFixedStringMgr::vftable;
          local_88[0] = ATL::
                        CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,80>
                        ::vftable;
          local_8 = 0x13;
          if (local_70 != 0) {
            _memset(local_68,0,local_70);
          }
          piVar6 = *(int **)(local_7c[0] + -0x10);
          if (*(int *)(local_7c[0] + -0xc) != 0) {
            piVar1 = (int *)(local_7c[0] + -4);
            if (*(int *)(local_7c[0] + -4) < 0) {
              if (*(int *)(local_7c[0] + -8) < 0) {
LAB_0042b19d:
                    /* WARNING: Subroutine does not return */
                FUN_00401760(0x80070057);
              }
              local_7c[0][-0xffffffff0000000c] = '\0';
              local_7c[0][-0xffffffff0000000b] = '\0';
              local_7c[0][-0xffffffff0000000a] = '\0';
              local_7c[0][-0xffffffff00000009] = '\0';
              *local_7c[0] = '\0';
            }
            else {
              LOCK();
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1 || iVar5 + -1 < 0) {
                (**(code **)(**(int **)(local_7c[0] + -0x10) + 4))(local_7c[0] + -0x10);
              }
              iVar5 = (**(code **)(*piVar6 + 0xc))();
              local_7c[0] = (uchar *)(iVar5 + 0x10);
            }
          }
          local_2bc = local_7c;
          local_8 = CONCAT31((int3)((uint)local_8 >> 8),0x12);
          piVar6 = (int *)(local_7c[0] + -4);
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1 || iVar5 + -1 < 0) {
            (**(code **)(**(int **)(local_7c[0] + -0x10) + 4))(local_7c[0] + -0x10);
          }
          local_8 = 0xffffffff;
          local_88[0] = ATL::CFixedStringMgr::vftable;
          piVar6 = local_2e0;
        }
        local_2d8 = local_2d8 + 1;
        puVar12 = puVar12 + 0xc;
        local_2dc = puVar12;
      } while (local_2d8 < *piVar6);
    }
    if (piVar6 != local_a4) {
      _free(piVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

