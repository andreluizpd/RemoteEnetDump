
void __thiscall FUN_00426a40(void *this,char *param_1,char param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined **local_aa0;
  undefined4 local_a9c;
  undefined **local_884;
  undefined4 local_880;
  undefined **local_668;
  undefined1 *local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined1 local_650 [516];
  undefined **local_44c;
  undefined1 *local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 local_434 [516];
  undefined **local_230;
  char *local_22c;
  size_t local_228;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004470c7;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00424e10(&local_230);
    local_8 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      if (cVar1 == param_2) {
        if (((local_22c != (char *)0x0) &&
            (pcVar2 = _strchr(local_22c,(int)param_3), pcVar2 != (char *)0x0)) &&
           (iVar3 = (int)pcVar2 - (int)local_22c, 0 < iVar3)) {
          local_664 = local_650;
          local_668 = CBufferedString<512,0>::vftable;
          local_660 = 0x201;
          local_65c = 0;
          local_658 = 0;
          local_654 = 0;
          puVar4 = local_650;
          iVar5 = 0x202;
          do {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          local_8 = local_8 & 0xffffff00;
          local_448 = local_434;
          local_44c = CBufferedString<512,0>::vftable;
          local_444 = 0x201;
          local_440 = 0;
          local_43c = 0;
          local_438 = 0;
          iVar5 = 0x202;
          puVar4 = local_448;
          do {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          local_8._0_1_ = 2;
          FUN_00425270(&local_668,local_22c,iVar3);
          if (local_22c == (char *)0x0) {
            iVar5 = 0;
          }
          else {
            pcVar2 = local_22c;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            iVar5 = (int)pcVar2 - (int)(local_22c + 1);
          }
          FUN_00425270(&local_44c,local_22c + iVar3 + 1,(iVar5 - iVar3) + -1);
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 0x4c))(local_664,local_448);
          local_8._0_1_ = 1;
          local_44c = CBufferedString<512,0>::vftable;
          FUN_00424e50((int)&local_44c);
          local_8 = (uint)local_8._1_3_ << 8;
          local_668 = CBufferedString<512,0>::vftable;
          FUN_00424e50((int)&local_668);
        }
        _memset(local_22c,0,local_228);
      }
      else {
        FUN_00425f80(&local_230,cVar1);
      }
      pcVar2 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar2;
    }
    if (local_22c != (char *)0x0) {
      pcVar2 = local_22c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (((0 < (int)pcVar2 - (int)(local_22c + 1)) &&
          (pcVar2 = _strchr(local_22c,(int)param_3), pcVar2 != (char *)0x0)) &&
         (iVar3 = (int)pcVar2 - (int)local_22c, 0 < iVar3)) {
        FUN_00424e10(&local_aa0);
        local_8._0_1_ = 3;
        FUN_00424e10(&local_884);
        local_8._0_1_ = 4;
        FUN_00425270(&local_aa0,local_22c,iVar3);
        if (local_22c == (char *)0x0) {
          iVar5 = 0;
        }
        else {
          pcVar2 = local_22c;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          iVar5 = (int)pcVar2 - (int)(local_22c + 1);
        }
        FUN_00425270(&local_884,local_22c + iVar3 + 1,(iVar5 - iVar3) + -1);
                    /* WARNING: Load size is inaccurate */
        (**(code **)(*this + 0x4c))(local_a9c,local_880);
        local_8._0_1_ = 3;
        local_884 = CBufferedString<512,0>::vftable;
        FUN_00424e50((int)&local_884);
        local_8 = (uint)local_8._1_3_ << 8;
        local_aa0 = CBufferedString<512,0>::vftable;
        FUN_00424e50((int)&local_aa0);
      }
    }
    local_8 = 0xffffffff;
    local_230 = CBufferedString<512,0>::vftable;
    FUN_00424e50((int)&local_230);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

