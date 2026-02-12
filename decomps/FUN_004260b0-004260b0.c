
void __cdecl FUN_004260b0(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar4 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_8 = iVar4 * 2 + 2;
    do {
      local_10 = *(undefined4 *)(param_1 + -4 + iVar4 * 4);
      iVar4 = iVar4 + -1;
      local_c = CONCAT31(local_c._1_3_,param_3);
      local_8 = local_8 + -2;
      iVar1 = iVar4;
      for (iVar5 = local_8; iVar5 < iVar3; iVar5 = iVar5 * 2 + 2) {
        iVar2 = (**(code **)(**(int **)(param_1 + iVar5 * 4) + 0x58))
                          (*(undefined4 *)(param_1 + -4 + iVar5 * 4));
        if ((iVar2 < 1) && (iVar2 < 0)) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        iVar1 = iVar5;
      }
      param_2 = iVar1;
      if (iVar5 == iVar3) {
        param_2 = iVar3 + -1;
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + iVar3 * 4);
      }
      FUN_00425730(param_1,param_2,iVar4,&local_10);
    } while (0 < iVar4);
  }
  return;
}

