
undefined4 * __thiscall FUN_00413520(void *this,byte param_1)

{
  *(undefined ***)this = CMD5Ex::vftable;
  _memset((void *)((int)this + 4),0,0x58);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  return (undefined4 *)this;
}

