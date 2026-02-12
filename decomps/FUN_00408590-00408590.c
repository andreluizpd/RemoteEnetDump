
undefined4 __thiscall FUN_00408590(void *this,char param_1)

{
  void *this_00;
  undefined1 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  this_00 = *this;
  if (param_1 == '\0') {
    if (*(uint *)((int)this_00 + 0x10) < *(int *)((int)this_00 + 0xc) + 5U) {
      FUN_00407ec0(this_00,5);
    }
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x66;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x61;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x6c;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x73;
  }
  else {
    if (*(uint *)((int)this_00 + 0x10) < *(int *)((int)this_00 + 0xc) + 4U) {
      FUN_00407ec0(this_00,4);
    }
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x74;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x72;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined1 **)(*this + 0xc);
    *(undefined1 **)(*this + 0xc) = puVar1 + 1;
    *puVar1 = 0x75;
  }
                    /* WARNING: Load size is inaccurate */
  puVar1 = *(undefined1 **)(*this + 0xc);
  *(undefined1 **)(*this + 0xc) = puVar1 + 1;
  *puVar1 = 0x65;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

