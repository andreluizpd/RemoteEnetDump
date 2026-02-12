
void __cdecl FUN_00425730(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = (**(code **)(**(int **)(param_1 + iVar2 * 4) + 0x58))(*param_4);
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if (-1 < iVar1) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
    if (iVar2 <= param_3) {
      *(undefined4 *)(param_1 + iVar2 * 4) = *param_4;
      return;
    }
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}

