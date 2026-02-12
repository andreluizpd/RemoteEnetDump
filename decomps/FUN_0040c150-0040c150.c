
void __thiscall FUN_0040c150(void *this,LPCWSTR param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *local_11c;
  undefined1 local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444c7b;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if ((param_1 != (LPCWSTR)0x0) && (*param_1 != L'\0')) {
    local_11c = local_118;
    FUN_00402790(&local_11c,param_1,3);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x1d0))(local_11c,param_2,uVar1);
    local_8 = 0xffffffff;
    if (local_11c != local_118) {
      _free(local_11c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

