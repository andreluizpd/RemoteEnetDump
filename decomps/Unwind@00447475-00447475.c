
void Unwind_00447475(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x544) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x544) = *(uint *)(unaff_EBP + -0x544) & 0xfffffffb;
    FUN_00402c20((int *)(unaff_EBP + -0x564));
    return;
  }
  return;
}

