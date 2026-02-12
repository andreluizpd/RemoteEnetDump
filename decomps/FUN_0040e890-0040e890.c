
void __thiscall FUN_0040e890(void *this,short *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_248;
  undefined4 local_244;
  int local_240 [3];
  wchar_t *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004450cb;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_0040b820(local_240);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    cVar1 = (**(code **)(*this + 0x100))(param_1,local_234,uVar2);
    if (cVar1 != '\0') {
      piVar3 = FUN_0040cea0((int *)local_234);
      FUN_0040cd70(piVar3);
      local_248 = 0;
      local_244 = 0;
      cVar1 = FUN_00428060(local_234[0],&local_248);
      if (cVar1 != '\0') {
        *param_2 = local_248;
        param_2[1] = local_244;
      }
    }
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

