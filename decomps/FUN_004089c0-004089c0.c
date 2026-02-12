
undefined4 __fastcall FUN_004089c0(int param_1)

{
  void *this;
  undefined1 *puVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -8;
  this = *(void **)(param_1 + 0x1c);
  if (*(uint *)((int)this + 0x10) < *(int *)((int)this + 0xc) + 1U) {
    FUN_00407ec0(this,1);
  }
  puVar1 = *(undefined1 **)((int)this + 0xc);
  *(undefined1 **)((int)this + 0xc) = puVar1 + 1;
  *puVar1 = 0x5d;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

