
void Catch_00424f61(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(int *)(unaff_EBP + -0x14) = iVar2;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

