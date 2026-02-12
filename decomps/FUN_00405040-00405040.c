
undefined4 FUN_00405040(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  undefined1 local_14 [8];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_2 != 0) {
    puVar2 = local_14;
    do {
      local_c = puVar2;
      uVar1 = local_8;
      for (iVar4 = 0; (uVar1 < param_2 && (iVar4 < 8)); iVar4 = iVar4 + 1) {
        puVar2[uVar1] = *(undefined1 *)(uVar1 + param_1);
        uVar1 = uVar1 + 1;
      }
      sVar3 = 0x20;
      do {
        sVar3 = sVar3 + -1;
      } while (0 < sVar3);
      uVar1 = local_8;
      for (iVar4 = 0; (uVar1 < param_2 && (iVar4 < 8)); iVar4 = iVar4 + 1) {
        *(undefined1 *)(uVar1 + param_1) = local_c[uVar1];
        uVar1 = uVar1 + 1;
      }
      local_8 = local_8 + 8;
      puVar2 = local_c + -8;
    } while (local_8 < param_2);
  }
  return 0;
}

