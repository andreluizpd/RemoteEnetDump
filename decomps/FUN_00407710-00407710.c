
int __cdecl FUN_00407710(uint param_1)

{
  if (param_1 < 10) {
    return 1;
  }
  if (param_1 < 100) {
    return 2;
  }
  if (param_1 < 1000) {
    return 3;
  }
  if (param_1 < 10000) {
    return 4;
  }
  if (param_1 < 100000) {
    return 5;
  }
  if (param_1 < 1000000) {
    return 6;
  }
  if (param_1 < 10000000) {
    return 7;
  }
  return 9 - (uint)(param_1 < 100000000);
}

