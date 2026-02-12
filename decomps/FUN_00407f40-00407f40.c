
void __thiscall FUN_00407f40(void *this,int param_1)

{
  void *_Memory;
  undefined1 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint _NewSize;
  
  if (*(int *)((int)this + 8) == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      puVar1 = (undefined1 *)operator_new(1);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
        _NewSize = *(uint *)((int)this + 0x14);
        *(undefined1 **)this = puVar1;
        *(undefined1 **)((int)this + 4) = puVar1;
        goto LAB_00407f86;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
    }
    _NewSize = *(uint *)((int)this + 0x14);
  }
  else {
    iVar4 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8);
    _NewSize = iVar4 + (iVar4 + 1U >> 1);
  }
LAB_00407f86:
  _Memory = *(void **)((int)this + 8);
  iVar4 = *(int *)((int)this + 0xc);
  uVar2 = (param_1 * 8 - (int)_Memory) + iVar4;
  if (_NewSize < uVar2) {
    _NewSize = uVar2;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = _realloc(_Memory,_NewSize);
  }
  *(void **)((int)this + 8) = pvVar3;
  *(int *)((int)this + 0xc) = (int)pvVar3 + (iVar4 - (int)_Memory);
  *(uint *)((int)this + 0x10) = (int)pvVar3 + _NewSize;
  return;
}

