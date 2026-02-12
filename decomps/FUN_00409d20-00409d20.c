
int * __thiscall FUN_00409d20(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  uVar4 = param_1 + 1;
  uVar2 = ((int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3) * 8;
  if (uVar4 != uVar2) {
    uVar4 = uVar2 + 8;
  }
  iVar1 = *(int *)((int)this + 4);
  if ((0 < iVar1) && (uVar2 = ((int)uVar4 / iVar1) * iVar1, uVar4 != uVar2)) {
    uVar4 = uVar2 + iVar1;
  }
  uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)param_2);
  if ((((int)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x20) == 0) && (uVar2 < 0xfffffff0)) &&
     (piVar3 = (int *)(**(code **)**(undefined4 **)((int)this + 0x10))(uVar2 + 0x10),
     piVar3 != (int *)0x0)) {
    *piVar3 = (int)this;
    piVar3[2] = uVar4 - 1;
    piVar3[3] = 1;
    piVar3[1] = 0;
    return piVar3;
  }
  return (int *)0x0;
}

