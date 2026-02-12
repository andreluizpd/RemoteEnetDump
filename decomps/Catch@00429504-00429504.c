
undefined * Catch_00429504(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x1c);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  *(uint *)(unaff_EBP + -0x14) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_00429525;
}

