
undefined4 * __thiscall FUN_00406390(void *this,byte param_1)

{
  *(undefined ***)this = CIconResource::vftable;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    FUN_004061b0(*(void **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  return (undefined4 *)this;
}

