
int __thiscall FUN_004250e0(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_2;
  if (*(int *)((int)this + 4) == 0) {
    return -1;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  if (param_3 == -1) {
    param_3 = *(int *)((int)this + 4) + -1;
  }
  if (param_2 != param_3) {
    param_2 = -1;
    do {
      if (iVar2 == param_3) {
        return param_2;
      }
      if (param_3 == iVar2 + 2) {
        iVar5 = iVar2 + 1;
      }
      else {
        iVar5 = (param_3 - iVar2 >> 1) + iVar2;
      }
      iVar3 = (**(code **)(**(int **)(iVar1 + iVar5 * 4) + 0x58))(param_1);
      iVar4 = param_3;
      iVar6 = iVar2;
      if (iVar3 < 1) {
        if ((iVar3 < 0) && (iVar6 = iVar5, iVar5 = param_2, param_3 - iVar2 == 1)) {
          iVar3 = (**(code **)(**(int **)(iVar1 + param_3 * 4) + 0x58))(param_1);
          if ((0 < iVar3) || ((iVar3 < 0 || (iVar6 = iVar2, iVar5 = param_3, iVar3 != 0)))) {
            iVar3 = (**(code **)(**(int **)(iVar1 + iVar2 * 4) + 0x58))(param_1);
            iVar6 = param_3;
            iVar5 = param_2;
            if ((iVar3 < 1) && ((-1 < iVar3 && (iVar3 == 0)))) {
              iVar6 = iVar2;
              iVar5 = iVar2;
            }
          }
        }
      }
      else {
        iVar4 = iVar5;
        iVar5 = param_2;
        if (param_3 - iVar2 == 1) {
          iVar3 = (**(code **)(**(int **)(iVar1 + param_3 * 4) + 0x58))(param_1);
          if (((0 < iVar3) || (iVar3 < 0)) || (iVar4 = param_3, iVar5 = param_3, iVar3 != 0)) {
            iVar3 = (**(code **)(**(int **)(iVar1 + iVar2 * 4) + 0x58))(param_1);
            iVar4 = iVar2;
            iVar5 = param_2;
            if (((iVar3 < 1) && (-1 < iVar3)) && (iVar3 == 0)) {
              iVar4 = param_3;
              iVar5 = iVar2;
            }
          }
        }
      }
      param_2 = iVar5;
      param_3 = iVar4;
      iVar2 = iVar6;
    } while (param_2 == -1);
    return param_2;
  }
  iVar2 = (**(code **)(**(int **)(iVar1 + param_2 * 4) + 0x58))(param_1);
  if (((iVar2 < 1) && (-1 < iVar2)) && (iVar2 == 0)) {
    return param_2;
  }
  return -1;
}

