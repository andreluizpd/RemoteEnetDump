
void __thiscall FUN_00423670(void *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    bVar6 = param_1 == *(char **)((int)this + 8);
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_1 + 1);
    if (*(int *)((int)this + 0xc) + -1 < iVar5) {
      uVar3 = iVar5 + 0x50U & 0xffffffb0;
      piVar2 = (int *)FUN_00401d70();
      pcVar4 = (char *)(**(code **)(*piVar2 + 4))(uVar3);
      if (pcVar4 == (char *)0x0) {
        iVar5 = *(int *)((int)this + 0xc) + -1;
      }
      else {
        *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
        *(uint *)((int)this + 0x10) = uVar3;
        if (bVar6) {
          FUN_00402480(pcVar4,iVar5 + 1,*(int *)((int)this + 8));
          pcVar4[iVar5] = '\0';
        }
        FUN_00423300((int)this + 4);
        *(uint *)((int)this + 0xc) = uVar3;
        *(char **)((int)this + 8) = pcVar4;
      }
    }
    if ((!bVar6) && (0 < iVar5)) {
      FUN_00402480(*(char **)((int)this + 8),iVar5 + 1,(int)param_1);
      *(undefined1 *)(iVar5 + *(int *)((int)this + 8)) = 0;
    }
    return;
  }
  FUN_00423300((int)this + 4);
  return;
}

