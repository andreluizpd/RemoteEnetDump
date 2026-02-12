
void __fastcall FUN_004082d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  undefined1 *puVar3;
  char *pcVar4;
  
  if (param_1[4] == param_1[3]) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar1 = param_1[4];
  uVar2 = *(uint *)(iVar1 + -8);
  if (uVar2 != 0) {
    this = (void *)*param_1;
    if (*(char *)(iVar1 + -4) != '\0') {
      if (*(uint *)((int)this + 0x10) < *(int *)((int)this + 0xc) + 1U) {
        FUN_00407ec0(this,1);
      }
      puVar3 = *(undefined1 **)((int)this + 0xc);
      *(undefined1 **)((int)this + 0xc) = puVar3 + 1;
      *puVar3 = 0x2c;
      *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
      return;
    }
    if (*(uint *)((int)this + 0x10) < *(int *)((int)this + 0xc) + 1U) {
      FUN_00407ec0(this,1);
    }
    pcVar4 = *(char **)((int)this + 0xc);
    *(char **)((int)this + 0xc) = pcVar4 + 1;
    *pcVar4 = (-((uVar2 & 1) != 0) & 0xeU) + 0x2c;
  }
  *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
  return;
}

