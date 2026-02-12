
void __thiscall FUN_0040bf80(void *this,LPCWSTR param_1,LPCWSTR param_2)

{
  uint uVar1;
  undefined1 *local_224;
  undefined1 local_220 [260];
  undefined1 *local_11c;
  undefined1 local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444c06;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (((param_1 != (LPCWSTR)0x0) && (param_2 != (LPCWSTR)0x0)) && (*param_1 != L'\0')) {
    local_224 = local_220;
    FUN_00402790(&local_224,param_2,3);
    local_8 = 0;
    local_11c = local_118;
    FUN_00402790(&local_11c,param_1,3);
    local_8._0_1_ = 1;
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x84))(local_11c,local_224,uVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_11c != local_118) {
      _free(local_11c);
    }
    local_8 = 0xffffffff;
    if (local_224 != local_220) {
      _free(local_224);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

