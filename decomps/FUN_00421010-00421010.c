
void __fastcall FUN_00421010(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (param_1 != 0) {
    do {
      if (*param_2 == '\0') {
        if (iVar2 != 0) goto LAB_00421033;
        break;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar1 = -0x7ff8ffa9;
LAB_00421033:
  if (unaff_EDI != (int *)0x0) {
    if (-1 < iVar1) {
      *unaff_EDI = param_1 - iVar2;
      return;
    }
    *unaff_EDI = 0;
  }
  return;
}

