
int * __thiscall FUN_0041feb0(void *this,undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  pvVar2 = (void *)*param_1;
                    /* WARNING: Load size is inaccurate */
  iVar3 = *this;
  piVar4 = (int *)((int)pvVar2 + -0x10);
  piVar5 = (int *)(iVar3 + -0x10);
  if (piVar4 != piVar5) {
    piVar1 = (int *)(iVar3 + -4);
    if ((-1 < *(int *)(iVar3 + -4)) && (*piVar4 == *piVar5)) {
      piVar4 = FUN_0041fc30(piVar4);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      *(int **)this = piVar4 + 4;
      return (int *)this;
    }
    FUN_00403710(this,pvVar2,*(int *)((int)pvVar2 + -0xc));
  }
  return (int *)this;
}

