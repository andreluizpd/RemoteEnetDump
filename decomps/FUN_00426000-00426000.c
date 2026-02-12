
void __cdecl FUN_00426000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00425a40(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00425a40(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00425a40(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00425a40(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00425a40(param_1,param_2,param_3);
  return;
}

