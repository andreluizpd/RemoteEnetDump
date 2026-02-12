
void __thiscall FUN_00405660(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *_Str;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar2 = *(int *)(iVar1 + -0xc);
  _Str = (char *)(iVar2 + param_2);
  pcVar4 = *(char **)((int)this + 4);
  if (pcVar4 < _Str) {
    do {
      pcVar4 = (char *)((int)pcVar4 * 2);
    } while (pcVar4 < _Str);
    *(char **)((int)this + 4) = pcVar4;
  }
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 < 0) goto LAB_00405692;
  if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar3) < 0) {
    FUN_00402d90(this,iVar3);
  }
                    /* WARNING: Load size is inaccurate */
  FID_conflict__memcpy((void *)(*this + iVar2),param_1,param_2);
  if (_Str == (char *)0xffffffff) {
                    /* WARNING: Load size is inaccurate */
    _Str = *this;
    if (_Str != (char *)0x0) {
      _Str = (char *)_strnlen(_Str,*(size_t *)(_Str + -8));
      goto LAB_004056e4;
    }
  }
  else {
LAB_004056e4:
    if ((int)_Str < 0) goto LAB_00405692;
  }
                    /* WARNING: Load size is inaccurate */
  if ((int)_Str <= *(int *)(*this + -8)) {
    *(char **)(*this + -0xc) = _Str;
                    /* WARNING: Load size is inaccurate */
    _Str[*this] = '\0';
    return;
  }
LAB_00405692:
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

