
undefined4 __thiscall FUN_00408920(void *this,void *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8007000e;
  if (*(uint *)((int)this + 0x14) < *(int *)((int)this + 0x10) + 1U) {
    FUN_00407ec0((void *)((int)this + 4),1);
  }
  puVar1 = *(undefined1 **)((int)this + 0x10);
  *(undefined1 **)((int)this + 0x10) = puVar1 + 1;
  *puVar1 = 0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  if (*(LPCSTR *)((int)this + 0xc) != (LPCSTR)0x0) {
    uVar2 = 0;
    FUN_004037c0(param_1,*(LPCSTR *)((int)this + 0xc));
  }
  return uVar2;
}

