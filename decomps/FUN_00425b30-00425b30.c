
void __thiscall FUN_00425b30(void *this,int param_1)

{
  if (0 < param_1) {
    if (param_1 != -1) {
      *(int *)((int)this + 0xc4) = param_1;
    }
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      _free(*(void **)((int)this + 0xb8));
      *(undefined4 *)((int)this + 0xb8) = 0;
    }
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined4 *)((int)this + 0xc0) = 0;
  }
  return;
}

