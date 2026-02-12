
int * __thiscall FUN_00401cc0(void *this,int param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = param_1 + 8U & 0xfffffff8;
  lVar1 = (ulonglong)uVar4 * (ulonglong)param_2;
  uVar2 = (uint)lVar1;
  if ((((int)((ulonglong)lVar1 >> 0x20) == 0) && (uVar2 < 0xfffffff0)) &&
     (piVar3 = (int *)(**(code **)**(undefined4 **)((int)this + 4))(uVar2 + 0x10),
     piVar3 != (int *)0x0)) {
    *piVar3 = (int)this;
    piVar3[2] = uVar4 - 1;
    piVar3[3] = 1;
    piVar3[1] = 0;
    return piVar3;
  }
  return (int *)0x0;
}

