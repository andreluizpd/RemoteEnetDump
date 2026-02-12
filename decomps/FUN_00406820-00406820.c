
uint __thiscall FUN_00406820(void *this,undefined8 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x1c))(param_1);
  }
  return uVar1;
}

