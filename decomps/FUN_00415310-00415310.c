
uint __cdecl FUN_00415310(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    do {
      if ((*param_1 & 7) == 1) {
        return CONCAT31((int3)((uint)param_1 >> 8),1);
      }
      param_1 = (uint *)param_1[6];
    } while (param_1 != (uint *)0x0);
  }
  return (uint)param_1 & 0xffffff00;
}

