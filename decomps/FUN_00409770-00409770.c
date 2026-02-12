
void __thiscall FUN_00409770(void *this,int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1b0 [103];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044494b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*param_1 + 4))(local_14);
  if (cVar1 != '\0') {
    iVar4 = 0;
    do {
                    /* WARNING: Load size is inaccurate */
      iVar3 = (**(code **)(*this + 0x14))();
      if (iVar3 <= iVar4) {
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 8))();
        }
        break;
      }
      FUN_004234b0(local_1b0);
      local_8 = 0;
                    /* WARNING: Load size is inaccurate */
      cVar2 = (**(code **)(*this + 0x188))(iVar4,local_1b0);
      if (cVar2 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0xc))(local_1b0);
      }
      local_8 = 0xffffffff;
      FUN_004235e0(local_1b0);
      iVar4 = iVar4 + 1;
    } while (cVar1 != '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

