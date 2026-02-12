
undefined ** __fastcall FUN_00415550(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)0x0) {
    if (((*puVar1 & 7) != 2) && ((*puVar1 & 7) != 3)) {
      puVar1 = (uint *)puVar1[4];
      if (puVar1 == (uint *)0x0) goto LAB_00415598;
      while (((*puVar1 & 7) != 2 && ((*puVar1 & 7) != 3))) {
        puVar1 = (uint *)puVar1[6];
        if (puVar1 == (uint *)0x0) {
          return &PTR_0044862c;
        }
      }
    }
    if ((puVar1 != (uint *)0x0) && ((undefined **)puVar1[3] != (undefined **)0x0)) {
      return (undefined **)puVar1[3];
    }
  }
LAB_00415598:
  return &PTR_0044862c;
}

