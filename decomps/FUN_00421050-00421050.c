
undefined4 __thiscall FUN_00421050(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == 2) {
    uVar2 = 8;
    do {
                    /* WARNING: Load size is inaccurate */
      if (*this != *(int *)param_1) goto LAB_00421098;
      uVar2 = uVar2 - 4;
      param_1 = param_1 + 4;
      this = (void *)((int)this + 4);
    } while (3 < uVar2);
  }
  else {
    uVar2 = 0x80;
    do {
                    /* WARNING: Load size is inaccurate */
      if (*this != *(int *)param_1) goto LAB_00421098;
      uVar2 = uVar2 - 4;
      param_1 = param_1 + 4;
      this = (void *)((int)this + 4);
    } while (3 < uVar2);
  }
  if (uVar2 == 0) {
    return 1;
  }
LAB_00421098:
                    /* WARNING: Load size is inaccurate */
  iVar1 = (uint)*this - (uint)*param_1;
  if (iVar1 == 0) {
    if (uVar2 < 2) {
      return 1;
    }
    iVar1 = (uint)*(byte *)((int)this + 1) - (uint)param_1[1];
    if (iVar1 == 0) {
      if (uVar2 < 3) {
        return 1;
      }
      iVar1 = (uint)*(byte *)((int)this + 2) - (uint)param_1[2];
      if (iVar1 == 0) {
        if (uVar2 < 4) {
          return 1;
        }
        iVar1 = (uint)*(byte *)((int)this + 3) - (uint)param_1[3];
      }
    }
  }
  return CONCAT31((int3)(iVar1 >> 0x1f),(iVar1 >> 0x1f | 1U) == 0);
}

