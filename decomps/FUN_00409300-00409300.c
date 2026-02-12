
undefined4 __thiscall FUN_00409300(void *this,void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8007000e;
  if (*(uint *)((int)this + 0x14) < *(int *)((int)this + 0x10) + 1U) {
    FUN_00407ec0((void *)((int)this + 4),1);
  }
  puVar2 = *(undefined1 **)((int)this + 0x10);
  *(undefined1 **)((int)this + 0x10) = puVar2 + 1;
  *puVar2 = 0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  pcVar3 = *(char **)((int)this + 0xc);
  if (pcVar3 != (char *)0x0) {
    uVar5 = 0;
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00403380(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  }
  return uVar5;
}

