
int * __thiscall FUN_004022d0(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_1 != *(int **)((int)this + 8)) {
    *param_1 = *(int *)((int)this + 4);
    piVar1 = (int *)(**(code **)(**(int **)((int)this + 4) + 8))(param_1,param_2,param_3);
    if (piVar1 == (int *)0x0) {
      *param_1 = (int)this;
      return (int *)0x0;
    }
    *piVar1 = (int)this;
    return piVar1;
  }
  if (param_2 <= param_1[2]) {
    return param_1;
  }
  if (DAT_004589a0 != (int *)0x0) {
    (**(code **)(*DAT_004589a0 + 4))(param_2,param_1[2],param_1);
  }
  piVar1 = (int *)(**(code **)**(undefined4 **)((int)this + 4))(param_2,param_3);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_00401d80(piVar1 + 4,param_2 * param_3,param_1 + 4,(param_1[2] + 1) * param_3);
  piVar1[3] = param_1[3];
  *piVar1 = (int)this;
  piVar1[1] = param_1[1];
  return piVar1;
}

