
void __fastcall FUN_004235e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00446bfe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStringStringPair::vftable;
  local_8 = 2;
  FUN_00423300((int)(param_1 + 1));
  FUN_00423360((int)(param_1 + 0x1c));
  local_8._0_1_ = 1;
  param_1[0x1c] = CBufferedString<260,0>::vftable;
  FUN_00423360((int)(param_1 + 0x1c));
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[1] = CBufferedString<80,0>::vftable;
  FUN_00423300((int)(param_1 + 1));
  *param_1 = IStringStringPair::vftable;
  ExceptionList = local_10;
  return;
}

