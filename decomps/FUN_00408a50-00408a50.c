
void __fastcall FUN_00408a50(undefined4 *param_1)

{
  undefined1 uVar1;
  void *this;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 9);
  this = (void *)*param_1;
  iVar3 = ((uint)(param_1[4] - param_1[3]) >> 3) * param_1[10];
  if (*(uint *)((int)this + 0x10) < (uint)(*(int *)((int)this + 0xc) + iVar3)) {
    FUN_00407ec0(this,iVar3);
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = *(undefined1 **)((int)this + 0xc);
    *(undefined1 **)((int)this + 0xc) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  return;
}

