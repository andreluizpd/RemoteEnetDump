
void __thiscall FUN_00402570(void *this,char *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_2 == 0) && ((param_1 == (char *)0x0 || (*param_1 == '\0')))) {
    FUN_004024f0((int)this);
    return;
  }
  bVar5 = false;
  if (((param_1 != (char *)0x0) &&
      (bVar5 = param_1 == *(char **)((int)this + 4), param_1 != (char *)0x0)) && (param_2 == 0)) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_2 = (int)pcVar4 - (int)(param_1 + 1);
  }
  if (*(int *)((int)this + 8) + -1 < param_2) {
    uVar3 = param_2 + 0x100U & 0xffffff00;
    piVar2 = (int *)FUN_00401d70();
    pcVar4 = (char *)(**(code **)(*piVar2 + 4))(uVar3);
    if (pcVar4 == (char *)0x0) {
      param_2 = *(int *)((int)this + 8) + -1;
    }
    else {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      *(uint *)((int)this + 0xc) = uVar3;
      if (bVar5) {
        FUN_00402480(pcVar4,param_2 + 1,*(int *)((int)this + 4));
        pcVar4[param_2] = '\0';
      }
      FUN_004024f0((int)this);
      *(uint *)((int)this + 8) = uVar3;
      *(char **)((int)this + 4) = pcVar4;
    }
  }
  if (((!bVar5) && (0 < param_2)) && (param_1 != (char *)0x0)) {
    FUN_00402480(*(char **)((int)this + 4),param_2 + 1,(int)param_1);
    *(undefined1 *)(param_2 + *(int *)((int)this + 4)) = 0;
  }
  return;
}

