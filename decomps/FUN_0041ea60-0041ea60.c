
void __cdecl FUN_0041ea60(LPCWSTR param_1,LPCWSTR param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_74;
  undefined1 local_70 [92];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446788;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 == (LPCWSTR)0x0) || (param_3 == (undefined4 *)0x0)) {
    iVar2 = -0x7fffbffd;
  }
  else {
    iVar2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (-1 < iVar2) {
    FUN_0041e620(&local_74);
    local_8 = 0;
    cVar1 = FUN_0041e820(&local_74,param_1,param_2);
    if ((cVar1 != '\0') && (iVar2 = ConvertSidToStringSidW(local_70,param_3), iVar2 == 0)) {
      GetLastError();
    }
    local_8 = 0xffffffff;
    FUN_0041e6f0(&local_74);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

