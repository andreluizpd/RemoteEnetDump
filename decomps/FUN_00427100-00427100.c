
void __thiscall
FUN_00427100(void *this,int *param_1,undefined4 param_2,char *param_3,char *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined2 local_3d8;
  undefined1 local_3d6;
  undefined4 local_3d4 [202];
  undefined **local_ac [3];
  uchar *local_a0 [3];
  size_t local_94;
  undefined1 local_8c [44];
  undefined **local_60 [3];
  char *local_54 [3];
  size_t local_48;
  undefined1 local_40 [44];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044719a;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = FUN_00402ef0(local_3d4,DAT_00459770,'\0');
  local_8 = 0;
  pcVar5 = *(char **)(iVar4 + 8);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = *(char **)(iVar4 + 4);
  }
  FUN_0040ea40(local_60,pcVar5);
  local_8._0_1_ = 2;
  FUN_00402a60(local_3d4);
  FUN_0040c360((int *)local_ac);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (param_4 != (char *)0x0) {
    pcVar5 = param_4;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00403380(local_a0,param_4,(int)pcVar5 - (int)(param_4 + 1));
  }
  if (param_3 == (char *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar6 = (char *)(**(code **)(*this + 0x1a8))();
    pcVar5 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((pcVar6 != pcVar5) && (iVar4 = FID_conflict___mbscoll(local_a0[0],"#self;"), iVar4 == 0)) {
                    /* WARNING: Load size is inaccurate */
      pcVar5 = (char *)(**(code **)(*this + 0x1a8))();
      FUN_0040dc00(local_60,pcVar5);
    }
  }
  else {
    pcVar5 = param_3;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00403380(local_54,param_3,(int)pcVar5 - (int)(param_3 + 1));
  }
  iVar4 = param_1[1];
  FUN_00422fa0(param_1,'\t',iVar4);
  iVar7 = FID_conflict___mbscoll(local_a0[0],"#self;");
  if (iVar7 == 0) {
    local_3d8 = CONCAT11(local_3d8._1_1_,0x3c);
    (**(code **)(*param_1 + 4))(&local_3d8,1);
    if (local_54[0] != (char *)0x0) {
      pcVar5 = local_54[0];
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      (**(code **)(*param_1 + 4))(local_54[0],(int)pcVar5 - (int)(local_54[0] + 1));
    }
    local_3d8 = 0xa3e;
    (**(code **)(*param_1 + 4))(&local_3d8,2);
  }
  else {
    iVar7 = FID_conflict___mbscoll(local_a0[0],"#xattr;");
    if (iVar7 == 0) {
      local_3d8 = CONCAT11(local_3d8._1_1_,0x3c);
      (**(code **)(*param_1 + 4))(&local_3d8,1);
      if (local_54[0] != (char *)0x0) {
        pcVar5 = local_54[0];
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        (**(code **)(*param_1 + 4))(local_54[0],(int)pcVar5 - (int)(local_54[0] + 1));
      }
      local_3d8 = CONCAT11(local_3d8._1_1_,10);
      (**(code **)(*param_1 + 4))(&local_3d8,1);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x1a8))();
      FUN_00424350(param_1,(wchar_t *)"<%s name=\"%s\">\n");
    }
  }
  param_1[1] = iVar4 + 1;
                    /* WARNING: Load size is inaccurate */
  uVar8 = 0;
  iVar7 = (**(code **)(*this + 0x14))();
  if (0 < iVar7) {
    do {
      if (*(uint *)((int)this + 0xbc) <= uVar8) goto LAB_004274f3;
      piVar3 = *(int **)(*(int *)((int)this + 0xb8) + uVar8 * 4);
      if (piVar3 != (int *)0x0) {
        local_3d8 = CONCAT11(local_3d8._1_1_,9);
        if (param_1[2] == 0) {
          (**(code **)(*param_1 + 4))(&local_3d8,1);
        }
        else {
          FUN_00422fa0(param_1,' ',param_1[2]);
        }
        (**(code **)(*piVar3 + 0x5c))(param_1,param_4,param_5,param_6);
        local_3d8 = CONCAT11(local_3d8._1_1_,10);
        (**(code **)(*param_1 + 4))(&local_3d8,1);
      }
                    /* WARNING: Load size is inaccurate */
      uVar8 = uVar8 + 1;
      iVar7 = (**(code **)(*this + 0x14))();
    } while ((int)uVar8 < iVar7);
  }
  FUN_00422fa0(param_1,'\t',iVar4);
  iVar7 = FID_conflict___mbscoll(local_a0[0],"#xattr;");
  if (iVar7 == 0) {
    local_3d8 = 0x3e2f;
    local_3d6 = 10;
    uVar9 = 3;
  }
  else {
    local_3d8 = 0x2f3c;
    (**(code **)(*param_1 + 4))(&local_3d8,2);
    if (local_54[0] != (char *)0x0) {
      pcVar5 = local_54[0];
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      (**(code **)(*param_1 + 4))(local_54[0],(int)pcVar5 - (int)(local_54[0] + 1));
    }
    local_3d8 = 0xa3e;
    uVar9 = 2;
  }
  (**(code **)(*param_1 + 4))(&local_3d8,uVar9);
  param_1[1] = iVar4;
  local_ac[0] = ATL::
                CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,40>
                ::vftable;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),5);
  if (local_94 != 0) {
    _memset(local_8c,0,local_94);
  }
  piVar3 = *(int **)(local_a0[0] + -0x10);
  if (*(int *)(local_a0[0] + -0xc) != 0) {
    piVar1 = (int *)(local_a0[0] + -4);
    if (*(int *)(local_a0[0] + -4) < 0) {
      if (*(int *)(local_a0[0] + -8) < 0) {
LAB_004274f3:
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x80070057);
      }
      local_a0[0][-0xffffffff0000000c] = '\0';
      local_a0[0][-0xffffffff0000000b] = '\0';
      local_a0[0][-0xffffffff0000000a] = '\0';
      local_a0[0][-0xffffffff00000009] = '\0';
      *local_a0[0] = '\0';
    }
    else {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(local_a0[0] + -0x10) + 4))(local_a0[0] + -0x10);
      }
      iVar4 = (**(code **)(*piVar3 + 0xc))();
      local_a0[0] = (uchar *)(iVar4 + 0x10);
    }
  }
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),4);
  piVar3 = (int *)(local_a0[0] + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_a0[0] + -0x10) + 4))(local_a0[0] + -0x10);
  }
  local_ac[0] = ATL::CFixedStringMgr::vftable;
  local_60[0] = ATL::
                CFixedStringT<class_ATL::CStringT<char,class_ATL::StrTraitATL<char,class_ATL::ChTraitsCRT<char>_>_>,40>
                ::vftable;
  local_8 = 8;
  if (local_48 != 0) {
    _memset(local_40,0,local_48);
  }
  piVar3 = *(int **)(local_54[0] + -0x10);
  if (*(int *)(local_54[0] + -0xc) != 0) {
    piVar1 = (int *)(local_54[0] + -4);
    if (*(int *)(local_54[0] + -4) < 0) {
      if (*(int *)(local_54[0] + -8) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x80070057);
      }
      local_54[0][-0xffffffff0000000c] = '\0';
      local_54[0][-0xffffffff0000000b] = '\0';
      local_54[0][-0xffffffff0000000a] = '\0';
      local_54[0][-0xffffffff00000009] = '\0';
      *local_54[0] = '\0';
    }
    else {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(local_54[0] + -0x10) + 4))(local_54[0] + -0x10);
      }
      iVar4 = (**(code **)(*piVar3 + 0xc))();
      local_54[0] = (char *)(iVar4 + 0x10);
    }
  }
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),7);
  piVar3 = (int *)(local_54[0] + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_54[0] + -0x10) + 4))(local_54[0] + -0x10);
  }
  local_8 = 0xffffffff;
  local_60[0] = ATL::CFixedStringMgr::vftable;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

