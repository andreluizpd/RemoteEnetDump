
void __thiscall FUN_004241a0(void *this,LPCWSTR param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
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
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = (undefined1 *)((int)this + 0x18);
  *(undefined ***)this = CBufferedString<260,0>::vftable;
  *(undefined1 **)((int)this + 4) = puVar4;
  *(undefined4 *)((int)this + 8) = 0x105;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar6 = 0x106;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_14 = uVar3;
  if (param_1 == (LPCWSTR)0x0) {
    FUN_00423360((int)this);
  }
  else {
    local_11c = local_118;
    FUN_00402790(&local_11c,param_1,3);
    pcVar2 = local_11c;
    local_8 = 0;
    if ((local_11c == (char *)0x0) || (*local_11c == '\0')) {
      FUN_00423360((int)this);
    }
    else {
      bVar9 = local_11c == *(char **)((int)this + 4);
      pcVar8 = local_11c;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar6 = (int)pcVar8 - (int)(local_11c + 1);
      if (*(int *)((int)this + 8) + -1 < iVar6) {
        uVar7 = iVar6 + 0x104U & 0xfffffefc;
        piVar5 = (int *)FUN_00401d70();
        pcVar8 = (char *)(**(code **)(*piVar5 + 4))(uVar7,uVar3);
        if (pcVar8 == (char *)0x0) {
          iVar6 = *(int *)((int)this + 8) + -1;
        }
        else {
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
          *(uint *)((int)this + 0xc) = uVar7;
          if (bVar9) {
            FUN_00402480(pcVar8,iVar6 + 1,*(int *)((int)this + 4));
            pcVar8[iVar6] = '\0';
          }
          FUN_00423360((int)this);
          *(uint *)((int)this + 8) = uVar7;
          *(char **)((int)this + 4) = pcVar8;
        }
      }
      if ((!bVar9) && (0 < iVar6)) {
        FUN_00402480(*(char **)((int)this + 4),iVar6 + 1,(int)pcVar2);
        *(undefined1 *)(iVar6 + *(int *)((int)this + 4)) = 0;
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

