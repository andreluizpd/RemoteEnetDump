
int * __thiscall FUN_0040a2e0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 0x10) = param_1[4];
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  uVar2 = (**(code **)(*param_1 + 0x1a8))();
  (**(code **)(iVar1 + 0x1b0))(uVar2);
  return (int *)this;
}

