
undefined4 FUN_00418673(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x34) == unaff_EBX) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0x8007000e;
  }
  *(int *)(unaff_ESI + 0x38) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_EDI;
}

