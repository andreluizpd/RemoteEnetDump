
int * __cdecl FUN_00416fa0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445b81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = param_2[1] + 0x14;
  if (uVar1 < 0x8001) {
    piVar5 = (int *)*param_2;
    piVar4 = (int *)((int)piVar5 + param_2[1] + 0x14);
    param_2[1] = uVar1;
  }
  else {
    piVar4 = FUN_00414a60(param_2,0x14,&param_2);
    piVar5 = param_2;
  }
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)piVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
  }
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_10;
    return (int *)0x0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
    *(int **)(iVar3 + 0x10) = piVar4;
    piVar4[3] = iVar3;
    *(int **)(iVar2 + 0xc) = piVar4;
    ExceptionList = local_10;
    return piVar4;
  }
  *(int **)(param_1 + 0x1c) = piVar4;
  piVar4[3] = (int)piVar4;
  ExceptionList = local_10;
  return piVar4;
}

