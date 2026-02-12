
int * __fastcall FUN_00420df0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (-1 < iVar2) {
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar2) < 0) {
      FUN_00402df0(param_1,iVar2);
    }
    FUN_0042f584((wchar_t *)*param_1,iVar2 + 1);
    if (iVar2 <= *(int *)(*param_1 + -8)) {
      *(int *)(*param_1 + -0xc) = iVar2;
      *(undefined2 *)(*param_1 + iVar2 * 2) = 0;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

