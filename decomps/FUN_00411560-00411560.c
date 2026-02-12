
undefined4 __thiscall FUN_00411560(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  WPARAM WVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_2);
    WVar2 = FUN_0040ff50(this,(int)param_1);
    if (-1 < (int)WVar2) {
      FUN_004104d0(this,WVar2);
      if (WVar2 == *(WPARAM *)((int)this + 0xa8)) {
        FUN_00410530(this,param_1,*(WPARAM *)((int)this + 0xa8));
      }
    }
    return uVar1;
  }
  return 0;
}

