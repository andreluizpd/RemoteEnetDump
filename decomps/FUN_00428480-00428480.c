
int __thiscall FUN_00428480(void *this,uchar param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uchar *_Ptr;
  uchar *puVar8;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = *this;
  iVar7 = *(int *)(iVar3 + -0xc);
  if (-1 < iVar7) {
    if ((int)(1U - *(int *)(iVar3 + -4) | *(int *)(iVar3 + -8) - iVar7) < 0) {
      FUN_00402d90(this,iVar7);
    }
                    /* WARNING: Load size is inaccurate */
    puVar8 = *this;
    puVar1 = puVar8 + iVar7;
    puVar4 = puVar8;
    while (_Ptr = puVar4, _Ptr < puVar1) {
      puVar4 = __mbsinc(_Ptr);
      if (*_Ptr != param_1) {
        uVar6 = (int)puVar4 - (int)_Ptr;
        puVar2 = puVar8 + uVar6;
        for (uVar5 = 0; (puVar8 != puVar2 && (uVar5 < uVar6)); uVar5 = uVar5 + 1) {
          *puVar8 = *_Ptr;
          puVar8 = puVar8 + 1;
          _Ptr = _Ptr + 1;
        }
      }
    }
    iVar7 = iVar7 - ((int)_Ptr - (int)puVar8);
    *puVar8 = '\0';
                    /* WARNING: Load size is inaccurate */
    if ((-1 < iVar7) && (iVar7 <= *(int *)(*this + -8))) {
      *(int *)(*this + -0xc) = iVar7;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(iVar7 + *this) = 0;
      return (int)_Ptr - (int)puVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

