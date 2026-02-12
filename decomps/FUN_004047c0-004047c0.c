
int __cdecl FUN_004047c0(int *param_1)

{
  short sVar1;
  
  if (param_1[8] != 0) {
    return ((param_1[8] & 0xffffU) * 4 & 0xffff) + *param_1 + (int)param_1;
  }
  sVar1 = *(short *)((int)param_1 + 0xe);
  if (sVar1 == 1) {
    return *param_1 + 8 + (int)param_1;
  }
  if (sVar1 == 4) {
    return *param_1 + 0x40 + (int)param_1;
  }
  if (sVar1 != 8) {
    return *param_1 + (int)param_1;
  }
  return *param_1 + 0x400 + (int)param_1;
}

