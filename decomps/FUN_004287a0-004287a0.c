
void __cdecl FUN_004287a0(__time64_t *param_1,void *param_2)

{
  wchar_t *local_2f8;
  wchar_t local_2f4 [260];
  tm local_ec;
  tm local_c8;
  tm local_a4;
  tm local_80;
  tm local_5c;
  tm local_38;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004471db;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2f8 = local_2f4;
  FUN_0040f510(&local_2f8,PTR_s__04d__02d__02dT_02d__02d__02d_004574c8,3);
  local_8 = 0;
  __localtime64_s(&local_a4,param_1);
  __localtime64_s(&local_38,param_1);
  __localtime64_s(&local_5c,param_1);
  __localtime64_s(&local_80,param_1);
  __localtime64_s(&local_c8,param_1);
  __localtime64_s(&local_ec,param_1);
  FUN_00412ea0(param_2,local_2f8);
  local_8 = 0xffffffff;
  if (local_2f8 != local_2f4) {
    _free(local_2f8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

