
int * __thiscall FUN_00402220(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)(iVar1 + 8) < param_1) {
    if (DAT_004589a0 != (undefined4 *)0x0) {
      (**(code **)*DAT_004589a0)(param_1,*(undefined4 *)(iVar1 + 8),iVar1);
    }
    piVar2 = (int *)(**(code **)**(undefined4 **)((int)this + 4))(param_1,param_2);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)this;
      piVar2[3] = -1;
      return piVar2;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 8) + 4) = 0;
    **(undefined4 **)((int)this + 8) = this;
    piVar2 = *(int **)((int)this + 8);
  }
  return piVar2;
}

