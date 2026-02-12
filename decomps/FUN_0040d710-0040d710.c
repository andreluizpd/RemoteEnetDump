
void __thiscall FUN_0040d710(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int local_264 [74];
  int local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444ef6;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_00403220(local_264);
  local_8 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00403220(local_13c);
    local_8 = CONCAT31(local_8._1_3_,1);
                    /* WARNING: Load size is inaccurate */
    cVar1 = (**(code **)(*this + 0x104))(param_1,local_130,uVar2);
    if (cVar1 != '\0') {
      piVar3 = FUN_0040cbc0((int *)local_130);
      FUN_0040cc40(piVar3);
      FUN_004293b0(local_130[0],param_2);
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00402e50(local_13c);
  }
  local_8 = 0xffffffff;
  FUN_00402e50(local_264);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

