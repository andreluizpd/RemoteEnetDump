
void FUN_00410291(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  lstrcpyW(*(LPWSTR *)(unaff_ESI + 8),*(LPCWSTR *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

