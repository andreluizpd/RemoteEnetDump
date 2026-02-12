
void __cdecl FUN_00425ab0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 * 2;
  iVar3 = param_2;
  while (iVar4 = iVar1 + 2, iVar4 < param_3) {
    iVar2 = (**(code **)(**(int **)(param_1 + iVar4 * 4) + 0x58))
                      (*(undefined4 *)(param_1 + -4 + iVar4 * 4));
    if ((iVar2 < 1) && (iVar2 < 0)) {
      iVar4 = iVar1 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    iVar3 = iVar4;
    iVar1 = iVar4 * 2;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = param_3 + -1;
  }
  FUN_00425730(param_1,iVar3,param_2,param_4);
  return;
}

