
void __fastcall FUN_00408350(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00444831;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CJsonWriter::vftable;
  local_8 = 2;
  param_1[4] = param_1[3];
  FUN_00408250(param_1 + 1);
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_8._0_1_ = 1;
  _free((void *)param_1[10]);
  FUN_0042bc24((void *)param_1[9]);
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))(param_1[3]);
  FUN_0042bc24((void *)param_1[2]);
  *param_1 = IJsonWriter::vftable;
  ExceptionList = local_10;
  return;
}

