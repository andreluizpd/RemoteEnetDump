
undefined4 * __thiscall FUN_004238a0(void *this,char *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  puVar2 = (undefined1 *)((int)this + 0x18);
  *(undefined ***)this = CBufferedString<80,0>::vftable;
  *(undefined1 **)((int)this + 4) = puVar2;
  *(undefined4 *)((int)this + 8) = 0x51;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar4 = 0x52;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    bVar7 = param_1 == *(char **)((int)this + 4);
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar6 - (int)(param_1 + 1);
    if (*(int *)((int)this + 8) + -1 < iVar4) {
      uVar5 = iVar4 + 0x50U & 0xffffffb0;
      piVar3 = (int *)FUN_00401d70();
      pcVar6 = (char *)(**(code **)(*piVar3 + 4))(uVar5);
      if (pcVar6 == (char *)0x0) {
        iVar4 = *(int *)((int)this + 8) + -1;
      }
      else {
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
        *(uint *)((int)this + 0xc) = uVar5;
        if (bVar7) {
          FUN_00402480(pcVar6,iVar4 + 1,*(int *)((int)this + 4));
          pcVar6[iVar4] = '\0';
        }
        FUN_00423300((int)this);
        *(uint *)((int)this + 8) = uVar5;
        *(char **)((int)this + 4) = pcVar6;
      }
    }
    if ((!bVar7) && (0 < iVar4)) {
      FUN_00402480(*(char **)((int)this + 4),iVar4 + 1,(int)param_1);
      *(undefined1 *)(iVar4 + *(int *)((int)this + 4)) = 0;
    }
    return (undefined4 *)this;
  }
  FUN_00423300((int)this);
  return (undefined4 *)this;
}

