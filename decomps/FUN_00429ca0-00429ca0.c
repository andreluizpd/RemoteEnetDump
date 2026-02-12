
int FUN_00429ca0(void)

{
  uchar *puVar1;
  byte unaff_BL;
  int iVar2;
  int *unaff_EDI;
  
  if (0 < *(int *)((uchar *)*unaff_EDI + -0xc)) {
    puVar1 = __mbschr((uchar *)*unaff_EDI,(uint)unaff_BL);
    if ((puVar1 != (uchar *)0x0) && (-1 < (int)puVar1 - *unaff_EDI)) {
      return *unaff_EDI;
    }
  }
  FUN_00428480(unaff_EDI,'-');
  iVar2 = *(int *)(*unaff_EDI + -0xc) + -2;
  if (0 < iVar2) {
    do {
      FUN_00428380(unaff_EDI,iVar2,unaff_BL);
      iVar2 = iVar2 + -2;
    } while (0 < iVar2);
    return *unaff_EDI;
  }
  return *unaff_EDI;
}

