
void __fastcall FUN_00409c00(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStringSerializer::vftable;
  local_8 = 0;
  if ((*(char *)(param_1 + 4) != '\0') && (piVar1 = (int *)param_1[3], piVar1 != (int *)0x0)) {
    FUN_00405550(piVar1);
    FUN_0042bc24(piVar1);
    param_1[3] = 0;
  }
  *param_1 = IBasicSerializer::vftable;
  ExceptionList = local_10;
  return;
}

