
void Unwind_00447426(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x544) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x544) = *(uint *)(unaff_EBP + -0x544) & 0xfffffffe;
    FUN_00402c20((int *)(unaff_EBP + -0x54c));
    return;
  }
  return;
}

