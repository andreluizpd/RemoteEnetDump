
void __thiscall FUN_00402290(void *this,undefined4 *param_1)

{
  if (param_1 != *(undefined4 **)((int)this + 8)) {
    *param_1 = *(undefined4 *)((int)this + 4);
    (**(code **)(**(int **)((int)this + 4) + 4))(param_1);
  }
  *(undefined4 *)(*(int *)((int)this + 8) + 0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 8) + 4) = 0;
  *(undefined2 *)(*(int *)((int)this + 8) + 0x10) = 0;
  return;
}

