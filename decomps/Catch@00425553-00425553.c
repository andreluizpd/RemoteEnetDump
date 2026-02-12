
void Catch_00425553(void)

{
  int *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int unaff_EBP;
  
  this = *(int **)(unaff_EBP + -0x18);
  iVar1 = *this;
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  iVar3 = *(int *)(unaff_EBP + 8);
  FUN_00404840((void *)(iVar1 + iVar3 * 4),
               (void *)(iVar1 + (*(int *)(unaff_EBP + 0x10) + iVar3) * 4),uVar2 - iVar3);
  FUN_00425350(this,uVar2,-1);
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

