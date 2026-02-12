
undefined4 * __fastcall FUN_00421100(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446abb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0xffffffff;
  FUN_00403b00(param_1 + 1,param_1,(undefined **)PTR_s_Yij8a8fOezGD90XXa_mupg_00457258,'\x01',1000);
  ExceptionList = local_10;
  return param_1;
}

