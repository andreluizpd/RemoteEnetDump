
void __thiscall FUN_00407ec0(void *this,int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 8) == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      puVar2 = (undefined1 *)operator_new(1);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        uVar5 = *(uint *)((int)this + 0x14);
        *(undefined1 **)this = puVar2;
        *(undefined1 **)((int)this + 4) = puVar2;
        goto LAB_00407f06;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
    }
    uVar5 = *(uint *)((int)this + 0x14);
  }
  else {
    iVar4 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8);
    uVar5 = iVar4 + (iVar4 + 1U >> 1);
  }
LAB_00407f06:
  pvVar3 = *(void **)((int)this + 8);
  iVar4 = *(int *)((int)this + 0xc) - (int)pvVar3;
  uVar1 = iVar4 + param_1;
  if (uVar5 < uVar1) {
    uVar5 = uVar1;
  }
  pvVar3 = FUN_00407e40(pvVar3,*(int *)((int)this + 0x10) - (int)pvVar3,uVar5);
  *(void **)((int)this + 8) = pvVar3;
  *(int *)((int)this + 0xc) = (int)pvVar3 + iVar4;
  *(uint *)((int)this + 0x10) = (int)pvVar3 + uVar5;
  return;
}

