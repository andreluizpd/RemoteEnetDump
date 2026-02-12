
void __fastcall FUN_004080a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00444789;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CJsonPrettyWriter::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  _free((void *)param_1[10]);
  FUN_0042bc24((void *)param_1[9]);
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))(param_1[3]);
  FUN_0042bc24((void *)param_1[2]);
  *param_1 = IJsonWriter::vftable;
  ExceptionList = local_10;
  return;
}

