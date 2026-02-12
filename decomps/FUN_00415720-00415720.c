
int __cdecl FUN_00415720(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (*(byte *)(uVar1 + param_1) < 0x80) {
        param_3 = param_3 + 1;
      }
      else if (*(byte *)(uVar1 + param_1) < 0x800) {
        param_3 = param_3 + 2;
      }
      else {
        param_3 = param_3 + 3;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return param_3;
}

