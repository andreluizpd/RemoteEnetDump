
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00418da0(LPCWSTR param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445c3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  if ((DAT_004590b4 & 1) == 0) {
    DAT_004590b4 = DAT_004590b4 | 1;
    DAT_00459098 = 8;
    DAT_00459094 = &DAT_00449f20;
    DAT_0045909c = &DAT_00449f1c;
    _DAT_004590a0 = 0x4008;
    _DAT_004590a4 = &DAT_00449f18;
    _DAT_004590a8 = 0x13;
    _DAT_004590ac = &DAT_00449f14;
    _DAT_004590b0 = 0x11;
  }
  local_8 = 0xffffffff;
  do {
    iVar1 = lstrcmpiW(param_1,(LPCWSTR)(&DAT_00459094)[uVar2 * 2]);
    if (iVar1 == 0) {
      *param_2 = (&DAT_00459098)[uVar2 * 4];
      ExceptionList = local_10;
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  ExceptionList = local_10;
  return 0;
}

