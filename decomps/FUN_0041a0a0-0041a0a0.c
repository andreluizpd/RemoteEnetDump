
int FUN_0041a0a0(int param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445ea8;
  local_10 = ExceptionList;
  if ((param_2 != (LPCWSTR)0x0) && (param_3 != 0)) {
    ExceptionList = &local_10;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    local_8 = 0;
    iVar1 = FUN_00419ef0(param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    ExceptionList = local_10;
    return (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  return -0x7ff8ffa9;
}

