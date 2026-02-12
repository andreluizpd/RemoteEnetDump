
void __thiscall FUN_00429e40(void *this,undefined4 *param_1,char *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void **ppvVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  char **this_00;
  int local_568;
  undefined4 local_564;
  int *local_560;
  char *local_55c;
  char **local_558;
  int local_554;
  int local_550;
  char *local_54c;
  uint local_548;
  int *local_544;
  undefined **local_540;
  undefined **local_53c;
  undefined ****local_538;
  char *local_534;
  undefined ***local_530;
  undefined4 local_52c;
  size_t local_528;
  undefined4 local_524;
  undefined2 local_520 [132];
  char local_418 [1028];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044755f;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  uVar11 = 0;
  local_55c = param_2;
  local_548 = 0;
  pcVar5 = param_2;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  local_550 = (int)pcVar5 - (int)(param_2 + 1);
  local_544 = (int *)this;
  if (local_550 == 1) {
    ExceptionList = &local_10;
    iVar6 = (**(code **)(PTR_vftable_004575c8 + 0xc))(local_14);
    local_55c = (char *)(iVar6 + 0x10);
    local_8 = 1;
    pcVar5 = (char *)*param_1;
    local_564 = CONCAT31(local_564._1_3_,*param_2);
    local_54c = (char *)FUN_004276f0(pcVar5,*param_2);
    local_554 = 1;
    if (0 < (int)local_54c) {
      local_544 = local_544 + 1;
      do {
        FUN_00427690(pcVar5,local_554,(char)local_564,local_418);
        if (param_3 == '\0') {
          ppiVar8 = (int **)FUN_00404d60(&local_568,local_418);
          local_8 = 5;
          uVar11 = uVar11 | 4;
        }
        else {
          piVar7 = FUN_00404d60(&local_550,local_418);
          local_8 = CONCAT31(local_8._1_3_,2);
          local_548 = uVar11 | 1;
          piVar7 = FUN_0040cbc0(piVar7);
          piVar7 = FUN_0040cc40(piVar7);
          piVar7 = FUN_00402720((int *)(*piVar7 + -0x10));
          local_560 = piVar7 + 4;
          ppiVar8 = &local_560;
          local_8 = 4;
          uVar11 = uVar11 | 3;
        }
        local_548 = uVar11;
        piVar7 = *ppiVar8;
        uVar3 = local_544[1];
        if (((uint)local_544[2] <= uVar3) &&
           (uVar9 = FUN_00404900(local_544,uVar3 + 1), (char)uVar9 == '\0')) {
LAB_0042a12b:
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x8007000e);
        }
        local_558 = (char **)(*local_544 + uVar3 * 4);
        local_8 = 6;
        if (local_558 != (char **)0x0) {
          FUN_00404d60(local_558,(char *)piVar7);
        }
        local_544[1] = local_544[1] + 1;
        if ((uVar11 & 4) != 0) {
          uVar11 = uVar11 & 0xfffffffb;
          local_8 = 4;
          piVar7 = (int *)(local_568 + -4);
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          local_548 = uVar11;
          if (iVar6 + -1 < 1) {
            (**(code **)(**(int **)(local_568 + -0x10) + 4))((undefined4 *)(local_568 + -0x10));
          }
        }
        if ((uVar11 & 2) != 0) {
          uVar11 = uVar11 & 0xfffffffd;
          local_8 = 2;
          piVar7 = local_560 + -1;
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          local_548 = uVar11;
          if (iVar6 + -1 < 1) {
            (**(code **)(*(int *)local_560[-4] + 4))(local_560 + -4);
          }
        }
        local_8 = 1;
        if ((uVar11 & 1) != 0) {
          uVar11 = uVar11 & 0xfffffffe;
          local_8 = 1;
          piVar7 = (int *)(local_550 + -4);
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          local_548 = uVar11;
          if (iVar6 + -1 < 1) {
            (**(code **)(**(int **)(local_550 + -0x10) + 4))((undefined4 *)(local_550 + -0x10));
          }
        }
        local_554 = local_554 + 1;
      } while (local_554 <= (int)local_54c);
    }
    local_8 = 0xffffffff;
    piVar7 = (int *)(local_55c + -4);
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 1 || iVar6 + -1 < 0) {
      (**(code **)(**(int **)(local_55c + -0x10) + 4))(local_55c + -0x10);
    }
  }
  else {
    pcVar5 = (char *)*param_1;
    ppvVar4 = &local_10;
    while (ExceptionList = ppvVar4, local_8 = 0xffffffff, pcVar5 != (char *)0x0) {
      local_8 = 0xffffffff;
      if ((*pcVar5 == '\0') || (pcVar10 = FUN_00428a20(pcVar5,local_55c,-1), pcVar10 == (char *)0x0)
         ) {
        FUN_0040e9a0(&local_540,pcVar5);
        local_8 = 0x13;
        if (param_3 != '\0') {
          piVar7 = FUN_0040cbc0((int *)&local_534);
          FUN_0040cc40(piVar7);
        }
        FUN_00404e10(local_544 + 1,local_534);
        local_8 = 0xffffffff;
        FUN_00402e50(&local_540);
        break;
      }
      local_538 = &local_530;
      local_530 = &local_540;
      local_540 = ATL::CFixedStringMgr::vftable;
      local_53c = &PTR_vftable_004575c8;
      local_524 = 0xffffffff;
      local_52c = 0;
      local_528 = 0x104;
      local_520[0] = 0;
      local_8 = 0xb;
      local_558 = &local_534;
      iVar6 = FUN_0040fae0((int)local_530);
      local_534 = (char *)(iVar6 + 0x10);
      local_540 = ATL::
                  CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,260>
                  ::vftable;
      local_8 = 0xe;
      FUN_00404c40(&local_534,pcVar5,(int)pcVar10 - (int)pcVar5);
      if (param_3 != '\0') {
        piVar7 = FUN_0040cbc0((int *)&local_534);
        FUN_0040cc40(piVar7);
      }
      piVar7 = local_544;
      uVar11 = local_544[2];
      this_00 = (char **)(local_544 + 1);
      local_54c = local_534;
      local_558 = this_00;
      if (((uint)local_544[3] <= uVar11) &&
         (uVar9 = FUN_00404900(this_00,uVar11 + 1), (char)uVar9 == '\0')) goto LAB_0042a12b;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      if (*this_00 + uVar11 * 4 != (char *)0x0) {
        FUN_00404d60(*this_00 + uVar11 * 4,local_54c);
      }
      piVar7[2] = piVar7[2] + 1;
      pcVar5 = pcVar10 + local_550;
      local_540 = ATL::
                  CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,260>
                  ::vftable;
      local_8 = 0x11;
      if (local_528 != 0) {
        _memset(local_520,0,local_528);
      }
      piVar7 = *(int **)(local_534 + -0x10);
      if (*(int *)(local_534 + -0xc) != 0) {
        piVar1 = (int *)(local_534 + -4);
        if (*(int *)(local_534 + -4) < 0) {
          if (*(int *)(local_534 + -8) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00401760(0x80070057);
          }
          local_534[-0xffffffff0000000c] = '\0';
          local_534[-0xffffffff0000000b] = '\0';
          local_534[-0xffffffff0000000a] = '\0';
          local_534[-0xffffffff00000009] = '\0';
          *local_534 = '\0';
        }
        else {
          LOCK();
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1 || iVar6 + -1 < 0) {
            (**(code **)(**(int **)(local_534 + -0x10) + 4))(local_534 + -0x10);
          }
          iVar6 = (**(code **)(*piVar7 + 0xc))();
          local_534 = (char *)(iVar6 + 0x10);
        }
      }
      local_558 = &local_534;
      local_8 = CONCAT31((int3)((uint)local_8 >> 8),0x10);
      piVar7 = (int *)(local_534 + -4);
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(local_534 + -0x10) + 4))(local_534 + -0x10);
      }
      local_540 = ATL::CFixedStringMgr::vftable;
      ppvVar4 = (void **)ExceptionList;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

