
void __cdecl FUN_00425a40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)*param_2 + 0x58))(*param_1);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  iVar2 = (**(code **)(*(int *)*param_3 + 0x58))(*param_2);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  iVar2 = (**(code **)(*(int *)*param_2 + 0x58))(*param_1);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

