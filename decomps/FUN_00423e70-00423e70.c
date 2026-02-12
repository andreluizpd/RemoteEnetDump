
void __thiscall FUN_00423e70(void *this,LPCWSTR param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  char *local_11c;
  char local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446cab;
  local_10 = ExceptionList;
  uVar4 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = (int)this + 0x70;
  local_14 = uVar4;
  if (param_1 == (LPCWSTR)0x0) {
    FUN_00423360(iVar1);
  }
  else {
    local_11c = local_118;
    FUN_00402790(&local_11c,param_1,3);
    pcVar3 = local_11c;
    local_8 = 0;
    if ((local_11c == (char *)0x0) || (*local_11c == '\0')) {
      FUN_00423360(iVar1);
    }
    else {
      bVar9 = local_11c == *(char **)((int)this + 0x74);
      pcVar7 = local_11c;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar8 = (int)pcVar7 - (int)(local_11c + 1);
      if (*(int *)((int)this + 0x78) + -1 < iVar8) {
        uVar6 = iVar8 + 0x104U & 0xfffffefc;
        piVar5 = (int *)FUN_00401d70();
        pcVar7 = (char *)(**(code **)(*piVar5 + 4))(uVar6,uVar4);
        if (pcVar7 == (char *)0x0) {
          iVar8 = *(int *)((int)this + 0x78) + -1;
        }
        else {
          *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
          *(uint *)((int)this + 0x7c) = uVar6;
          if (bVar9) {
            FUN_00402480(pcVar7,iVar8 + 1,*(int *)((int)this + 0x74));
            pcVar7[iVar8] = '\0';
          }
          FUN_00423360(iVar1);
          *(uint *)((int)this + 0x78) = uVar6;
          *(char **)((int)this + 0x74) = pcVar7;
        }
      }
      if ((!bVar9) && (0 < iVar8)) {
        FUN_00402480(*(char **)((int)this + 0x74),iVar8 + 1,(int)pcVar3);
        *(undefined1 *)(iVar8 + *(int *)((int)this + 0x74)) = 0;
      }
    }
    local_8 = 0xffffffff;
    if (local_11c != local_118) {
      _free(local_11c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

