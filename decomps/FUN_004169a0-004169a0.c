
undefined4 __cdecl FUN_004169a0(undefined4 *param_1,int *param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_4 >> 1;
  iVar7 = 0;
  if (param_3 < param_3 + uVar6) {
    puVar5 = param_3 + 1;
    puVar4 = param_3;
    do {
      uVar1 = (uint)*puVar4;
      if ((uVar1 < 0xd800) || (uVar1 - 0xe000 < 0x2000)) {
        if (uVar1 < 0x80) {
          iVar7 = iVar7 + 1;
        }
        else if (uVar1 < 0x800) {
          iVar7 = iVar7 + 2;
        }
        else {
          iVar7 = iVar7 + 3;
        }
LAB_004169d2:
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      else {
        if ((0x3ff < uVar1 - 0xd800) || ((param_3 + uVar6 <= puVar5 || (0x3ff < *puVar5 - 0xdc00))))
        goto LAB_004169d2;
        iVar7 = iVar7 + 4;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      }
    } while (puVar4 < param_3 + uVar6);
  }
  pbVar2 = (byte *)(*(code *)PTR_FUN_00456d88)(iVar7 + 1);
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  puVar3 = (undefined1 *)FUN_00416870(param_3,uVar6,pbVar2);
  *puVar3 = 0;
  *param_1 = pbVar2;
  *param_2 = iVar7 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

