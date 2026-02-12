
void __thiscall FUN_00402d90(void *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  if (param_1 < *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (1 < *(int *)(iVar1 + -4)) {
    FUN_00402860(this,param_1);
    return;
  }
  iVar1 = *(int *)(iVar1 + -8);
  if (iVar1 < param_1) {
    if (iVar1 < 0x40000001) {
      iVar1 = iVar1 + iVar1 / 2;
    }
    else {
      iVar1 = iVar1 + 0x100000;
    }
    if (iVar1 < param_1) {
      iVar1 = param_1;
    }
    FUN_004028e0(this,iVar1);
  }
  return;
}

