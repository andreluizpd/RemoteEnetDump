
char * __cdecl FUN_00407b90(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
  }
  if (99 < param_1) {
    iVar1 = (param_1 % 100) * 2;
    *param_2 = (char)(param_1 / 100) + '0';
    param_2[1] = (&DAT_004489f0)[iVar1];
    param_2[2] = (&DAT_004489f1)[iVar1];
    return param_2 + 3;
  }
  if (9 < param_1) {
    *param_2 = (&DAT_004489f0)[param_1 * 2];
    param_2[1] = (&DAT_004489f1)[param_1 * 2];
    return param_2 + 2;
  }
  *param_2 = (char)param_1 + '0';
  return param_2 + 1;
}

