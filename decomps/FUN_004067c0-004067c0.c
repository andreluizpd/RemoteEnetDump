
uint __thiscall FUN_004067c0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x14))(param_1,param_2);
  }
  return uVar1;
}

