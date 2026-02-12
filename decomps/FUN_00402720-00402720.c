
int * __cdecl FUN_00402720(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x10))();
  if ((-1 < param_1[3]) && (puVar1 == (undefined4 *)*param_1)) {
    LOCK();
    param_1[3] = param_1[3] + 1;
    UNLOCK();
    return param_1;
  }
  piVar2 = (int *)(**(code **)*puVar1)(param_1[1],1);
  if (piVar2 == (int *)0x0) {
    FUN_004023e0();
  }
  piVar2[1] = param_1[1];
  _memcpy_s(piVar2 + 4,param_1[1] + 1U,param_1 + 4,param_1[1] + 1U);
  return piVar2;
}

