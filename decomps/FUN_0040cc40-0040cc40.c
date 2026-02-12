
int * __fastcall FUN_0040cc40(int *param_1)

{
  uchar *puVar1;
  void *_Dst;
  int iVar2;
  uchar *_Ptr;
  errno_t eVar3;
  
  _Ptr = (uchar *)*param_1;
  iVar2 = __ismbcspace((int)(char)*_Ptr);
  while (iVar2 != 0) {
    _Ptr = __mbsinc(_Ptr);
    iVar2 = __ismbcspace((int)(char)*_Ptr);
  }
  puVar1 = (uchar *)*param_1;
  if (_Ptr == puVar1) {
    return param_1;
  }
  iVar2 = *(int *)(puVar1 + -0xc);
  if (-1 < iVar2) {
    if ((int)(1U - *(int *)(puVar1 + -4) | *(int *)(puVar1 + -8) - iVar2) < 0) {
      FUN_00402d90(param_1,iVar2);
    }
    _Dst = (void *)*param_1;
    iVar2 = *(int *)((int)_Dst + -0xc) - ((int)_Ptr - (int)puVar1);
    eVar3 = _memmove_s(_Dst,*(int *)((int)_Dst + -0xc) + 1,
                       (void *)((int)_Dst + ((int)_Ptr - (int)puVar1)),iVar2 + 1);
    switch(eVar3) {
    case 0:
    case 0x50:
      if ((-1 < iVar2) && (iVar2 <= *(int *)(*param_1 + -8))) {
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

