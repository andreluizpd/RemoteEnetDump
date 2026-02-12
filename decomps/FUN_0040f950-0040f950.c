
void __cdecl FUN_0040f950(undefined4 param_1,wchar_t *param_2,va_list param_3)

{
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_00457600 ^ 0x452168;
  ExceptionList = &local_14;
  local_8 = 0;
  FUN_0040f870(param_3,param_2);
  ExceptionList = local_14;
  return;
}

