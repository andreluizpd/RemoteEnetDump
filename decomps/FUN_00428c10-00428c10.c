
int * __fastcall FUN_00428c10(int *param_1)

{
  int iVar1;
  int iVar2;
  errno_t eVar3;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (-1 < iVar2) {
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar2) < 0) {
      FUN_00402d90(param_1,iVar2);
    }
    eVar3 = FID_conflict___mbslwr_s((uchar *)*param_1,iVar2 + 1);
    switch(eVar3) {
    case 0:
    case 0x50:
      if (iVar2 <= *(int *)(*param_1 + -8)) {
        *(int *)(*param_1 + -0xc) = iVar2;
        *(undefined1 *)(iVar2 + *param_1) = 0;
        return param_1;
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    case 0xc:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    case 0x16:
    case 0x22:
      break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

