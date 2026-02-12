
char * __cdecl FUN_00407db0(double param_1,undefined2 *param_2,int param_3)

{
  double dVar1;
  char *pcVar2;
  undefined2 *puVar3;
  size_t local_8;
  
  if (param_1._0_4_ == 0 && ((ulonglong)param_1 & 0x7fffffff00000000) == 0) {
    if ((param_1._0_4_ != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) ||
        ((ulonglong)param_1 & 0x8000000000000000) != 0) {
      *(undefined1 *)param_2 = 0x2d;
      param_2 = (undefined2 *)((int)param_2 + 1);
    }
    *param_2 = 0x2e30;
    *(undefined1 *)(param_2 + 1) = 0x30;
    return (char *)((int)param_2 + 3);
  }
  puVar3 = param_2;
  dVar1 = param_1;
  if (param_1 < 0.0) {
    *(undefined1 *)param_2 = 0x2d;
    dVar1 = -param_1;
    puVar3 = (undefined2 *)((int)param_2 + 1);
  }
  FUN_00407a90(dVar1,(int)puVar3,(int *)&local_8,(int *)((int)&param_1 + 4));
  pcVar2 = FUN_00407c10(puVar3,local_8,param_1._4_4_,param_3);
  return pcVar2;
}

