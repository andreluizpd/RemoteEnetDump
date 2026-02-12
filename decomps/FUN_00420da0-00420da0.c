
undefined4 * __thiscall FUN_00420da0(void *this,byte param_1)

{
  *(undefined ***)this = CSingleInstance::vftable;
  if (*(int *)((int)this + 4) != 0) {
    FUN_0041fb60(*(int *)((int)this + 4));
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 4))(1);
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
    FUN_0042bc24(this);
  }
  return (undefined4 *)this;
}

