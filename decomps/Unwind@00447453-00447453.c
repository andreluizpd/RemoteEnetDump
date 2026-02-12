
void Unwind_00447453(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x544) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x544) = *(uint *)(unaff_EBP + -0x544) & 0xfffffffd;
    FUN_00402c20((int *)(unaff_EBP + -0x55c));
    return;
  }
  return;
}

