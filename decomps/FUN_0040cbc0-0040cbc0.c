
int * __fastcall FUN_0040cbc0(int *param_1)

{
  uchar uVar1;
  int iVar2;
  uchar *_Ptr;
  uchar *puVar3;
  int iVar4;
  
  _Ptr = (uchar *)*param_1;
  uVar1 = *_Ptr;
  puVar3 = (uchar *)0x0;
  if (uVar1 != '\0') {
    do {
      iVar2 = __ismbcspace((int)(char)uVar1);
      if (iVar2 == 0) {
        puVar3 = (uchar *)0x0;
      }
      else if (puVar3 == (uchar *)0x0) {
        puVar3 = _Ptr;
      }
      _Ptr = __mbsinc(_Ptr);
      uVar1 = *_Ptr;
    } while (uVar1 != '\0');
    if (puVar3 != (uchar *)0x0) {
      iVar2 = *param_1;
      iVar4 = (int)puVar3 - iVar2;
      if (-1 < iVar4) {
        if ((int)(1U - *(int *)(iVar2 + -4) | *(int *)(iVar2 + -8) - iVar4) < 0) {
          FUN_00402d90(param_1,iVar4);
        }
        if (iVar4 <= *(int *)(*param_1 + -8)) {
          *(int *)(*param_1 + -0xc) = iVar4;
          *(undefined1 *)(iVar4 + *param_1) = 0;
          return param_1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  return param_1;
}

