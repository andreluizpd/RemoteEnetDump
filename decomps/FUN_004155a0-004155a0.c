
void __fastcall FUN_004155a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + 0x47U & 0xffffffc0);
  piVar1 = piVar2 + 5;
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[4] = 0;
  piVar2[3] = 0x8000;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)piVar2;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = (int)piVar2;
    piVar2[0xe] = piVar2[3];
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
  }
  *param_1 = (int)piVar1;
  piVar1[5] = (int)piVar1;
  if (*param_1 != 0) {
    *piVar2 = *param_1 + 0x20;
    return;
  }
  *piVar2 = 0;
  return;
}

