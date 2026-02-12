
undefined4 __cdecl FUN_00417fb0(undefined4 *param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_00416c20(param_3,param_4 >> 2,0);
  pbVar2 = (byte *)(*(code *)PTR_FUN_00456d88)(iVar1 + 1);
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  puVar3 = (undefined1 *)FUN_00416dd0(param_3,param_4 >> 2,pbVar2);
  *puVar3 = 0;
  *param_1 = pbVar2;
  *param_2 = iVar1 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

