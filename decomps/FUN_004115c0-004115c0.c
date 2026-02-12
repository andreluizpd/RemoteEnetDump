
undefined4 __thiscall FUN_004115c0(void *this,undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  void *pvVar3;
  size_t _Count;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004455c9;
  local_10 = ExceptionList;
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar1) {
                    /* WARNING: Load size is inaccurate */
    puVar2 = *this;
    if ((puVar2 <= param_1) && (param_1 < puVar2 + iVar1)) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80004005);
    }
    if (iVar1 == 0) {
      _Count = 1;
    }
    else {
      _Count = *(int *)((int)this + 4) * 2;
      if ((int)_Count < 0) {
        return 0;
      }
      if (0x3fffffff < _Count) {
        return 0;
      }
    }
    ExceptionList = &local_10;
    pvVar3 = __recalloc(puVar2,_Count,2);
    if (pvVar3 == (void *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    *(size_t *)((int)this + 8) = _Count;
    *(void **)this = pvVar3;
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (undefined2 *)(*this + *(int *)((int)this + 4) * 2);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return 1;
}

