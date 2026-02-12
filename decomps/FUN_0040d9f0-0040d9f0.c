
void __thiscall FUN_0040d9f0(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *local_144;
  char local_13d;
  int local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444eab;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (((param_2 != (undefined4 *)0x0) && (*param_2 = 0, param_1 != (char *)0x0)) &&
     (*param_1 != '\0')) {
    FUN_00403220(local_13c);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    local_13d = (**(code **)(*this + 0x104))(param_1,local_130,uVar2);
    if (local_13d != '\0') {
      piVar3 = FUN_0040cbc0((int *)local_130);
      FUN_0040cc40(piVar3);
      if (0 < *(int *)(local_130[0] + -0xc)) {
        local_144 = (int *)0x0;
        cVar1 = FUN_0040b060(local_130[0],(ulong *)&local_144);
        piVar3 = local_144;
        if ((cVar1 != '\0') && (local_144 != (int *)0x0)) {
          (**(code **)(*local_144 + 4))(local_144);
          *param_2 = piVar3;
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

