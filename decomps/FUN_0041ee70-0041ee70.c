
int __thiscall FUN_0041ee70(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar3 = param_1;
  piVar1 = *(int **)((int)this + 4);
  if ((piVar1 != (int *)0x0) && (param_1 != 0)) {
    param_1 = 0;
    iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,iVar3,param_2,&param_1);
    if ((param_1 != iVar2) && (-1 < iVar3)) {
      iVar3 = -0x7ff8ffe3;
    }
    return iVar3;
  }
  return -0x7fffbffd;
}

