
void __thiscall FUN_0040d250(void *this,undefined4 param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  ulong local_140;
  int local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444e6b;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 != (ulong *)0x0) {
    *param_2 = 0;
    FUN_00403220(local_13c);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    cVar1 = (**(code **)(*this + 0x108))(param_1,local_130,uVar2);
    if (cVar1 != '\0') {
      piVar3 = FUN_0040cbc0((int *)local_130);
      FUN_0040cc40(piVar3);
      if (0 < *(int *)(local_130[0] + -0xc)) {
        local_140 = 0;
        cVar1 = FUN_0040b060(local_130[0],&local_140);
        if (cVar1 != '\0') {
          *param_2 = local_140;
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_00402e50(local_13c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

