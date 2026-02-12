
undefined4 * __thiscall FUN_004018d0(void *this,byte param_1)

{
  *(undefined ***)this = ATL::CWin32Heap::vftable;
  if ((*(char *)((int)this + 8) != '\0') && (*(HANDLE *)((int)this + 4) != (HANDLE)0x0)) {
    HeapDestroy(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  return (undefined4 *)this;
}

