
void FUN_00411110(int param_1,int *param_2,int param_3)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445538;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) goto LAB_00411150;
  do {
    RaiseException(0xc0000005,1,0,(ULONG_PTR *)0x0);
LAB_00411150:
  } while ((param_2 == (int *)0x0) || (param_3 == 0));
  *param_2 = param_3;
  DVar1 = GetCurrentThreadId();
  param_2[1] = DVar1;
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  param_2[2] = *(int *)(param_1 + 0x1c);
  *(int **)(param_1 + 0x1c) = param_2;
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  ExceptionList = local_10;
  return;
}

