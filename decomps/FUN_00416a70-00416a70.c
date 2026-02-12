
int __cdecl FUN_00416a70(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      if (uVar2 < 0x10000) {
        if (uVar2 < 0x80) {
          param_3 = param_3 + 1;
        }
        else if (uVar2 < 0x800) {
          param_3 = param_3 + 2;
        }
        else {
          param_3 = param_3 + 3;
        }
      }
      else {
        param_3 = param_3 + 4;
      }
      param_1 = param_1 + 1;
    } while (param_1 < puVar1);
  }
  return param_3;
}

