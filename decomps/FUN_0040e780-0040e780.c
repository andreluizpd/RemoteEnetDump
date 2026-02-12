
void __thiscall FUN_0040e780(void *this,short *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int *local_248;
  char local_241;
  int local_240 [3];
  short *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044508b;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (((param_2 != (undefined4 *)0x0) && (*param_2 = 0, param_1 != (short *)0x0)) && (*param_1 != 0)
     ) {
    FUN_0040b820(local_240);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    local_241 = (**(code **)(*this + 0x100))(param_1,local_234,uVar1);
    if (local_241 != '\0') {
      piVar2 = FUN_0040cea0((int *)local_234);
      FUN_0040cd70(piVar2);
      if (0 < *(int *)(local_234[0] + -6)) {
        local_248 = (int *)0x0;
        uVar1 = FUN_0040b0a0(local_234[0],(ulong *)&local_248);
        piVar2 = local_248;
        if (((char)uVar1 != '\0') && (local_248 != (int *)0x0)) {
          (**(code **)(*local_248 + 4))(local_248);
          *param_2 = piVar2;
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_004030c0(local_240);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

