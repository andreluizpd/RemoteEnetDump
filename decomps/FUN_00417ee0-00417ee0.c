
void __fastcall FUN_00417ee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    (*(code *)PTR_FUN_00456d8c)(param_1[1]);
    param_1[1] = 0;
  }
  for (piVar1 = *(int **)(*param_1 + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      (*(code *)PTR_FUN_00456d8c)(*piVar1);
    }
  }
  iVar3 = *(int *)((*(uint *)*param_1 & 0xffffffc0) + 8);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    (*(code *)PTR_FUN_00456d8c)(iVar3 - *(char *)(iVar3 + -1));
    iVar3 = iVar2;
  }
  *param_1 = 0;
  return;
}

