
undefined4 __thiscall
FUN_0041d350(void *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4,
            undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  if (param_6 == 0) {
    if (param_2 == 0x2b) {
      if (this == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)((int)this + -0x24);
      }
      *(undefined4 *)(*(int *)((int)pvVar3 + 0x18) + 0x20) = 1;
      FUN_0041c580(pvVar3,param_4);
      iVar1 = *(int *)(*(int *)((int)pvVar3 + 0x18) + 0x20);
      *param_5 = 1;
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    if (param_2 != 0x2c) {
      if (param_2 == 0x39) {
        if (this == (void *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (int)this + -0x24;
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20) = 1;
        iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + 0x20);
        *param_5 = 0;
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      if (param_2 != 0x2d) {
        return 0;
      }
      param_2 = 1;
      uVar2 = FUN_0041d000(this,0x2d,param_3,param_4,&param_2);
      *param_5 = uVar2;
      if (param_2 == 0) {
        return 0;
      }
      return 1;
    }
    if (this == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)this + -0x24;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20) = 1;
    *(int *)(param_4 + 0x10) = *(int *)(iVar1 + 100) + 3;
    iVar1 = *(int *)(iVar1 + 0x18);
LAB_0041d494:
    param_2 = *(int *)(iVar1 + 0x20);
  }
  else {
    if (param_6 != 1) {
      return 0;
    }
    if (param_2 == 0x202b) {
      if (this == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)((int)this + -0x24);
      }
      *(undefined4 *)(*(int *)((int)pvVar3 + 0x18) + 0x20) = 1;
      FUN_0041c580(pvVar3,param_4);
      iVar1 = *(int *)((int)pvVar3 + 0x18);
      goto LAB_0041d494;
    }
    if (param_2 != 0x202c) {
      if (param_2 == 0x2039) {
        if (this == (void *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (int)this + -0x24;
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20) = 1;
        param_2 = *(int *)(*(int *)(iVar1 + 0x18) + 0x20);
        *param_5 = 0;
      }
      else {
        if (param_2 != 0x202d) {
          return 0;
        }
        param_2 = 1;
        uVar2 = FUN_0041d000(this,0x202d,param_3,param_4,&param_2);
        *param_5 = uVar2;
      }
      goto LAB_0041d49e;
    }
    if (this == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)this + -0x24;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x20) = 1;
    *(int *)(param_4 + 0x10) = *(int *)(iVar1 + 100) + 3;
    param_2 = *(int *)(*(int *)(iVar1 + 0x18) + 0x20);
  }
  *param_5 = 1;
LAB_0041d49e:
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}

