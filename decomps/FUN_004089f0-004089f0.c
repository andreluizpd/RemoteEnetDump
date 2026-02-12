
undefined4 __fastcall FUN_004089f0(int *param_1)

{
  void *this;
  undefined1 *puVar1;
  
  FUN_004082d0(param_1);
  this = (void *)*param_1;
  if (*(uint *)((int)this + 0x10) < *(int *)((int)this + 0xc) + 4U) {
    FUN_00407ec0(this,4);
  }
  puVar1 = *(undefined1 **)(*param_1 + 0xc);
  *(undefined1 **)(*param_1 + 0xc) = puVar1 + 1;
  *puVar1 = 0x6e;
  puVar1 = *(undefined1 **)(*param_1 + 0xc);
  *(undefined1 **)(*param_1 + 0xc) = puVar1 + 1;
  *puVar1 = 0x75;
  puVar1 = *(undefined1 **)(*param_1 + 0xc);
  *(undefined1 **)(*param_1 + 0xc) = puVar1 + 1;
  *puVar1 = 0x6c;
  puVar1 = *(undefined1 **)(*param_1 + 0xc);
  *(undefined1 **)(*param_1 + 0xc) = puVar1 + 1;
  *puVar1 = 0x6c;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

