
void __thiscall FUN_0040e5b0(void *this,undefined4 param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  double dVar4;
  int local_240 [3];
  wchar_t *local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044504b;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_0040b820(local_240);
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  cVar1 = (**(code **)(*this + 0x100))(param_1,local_234,uVar2);
  if (cVar1 != '\0') {
    piVar3 = FUN_0040cea0((int *)local_234);
    FUN_0040cd70(piVar3);
    dVar4 = __wtof(local_234[0]);
    *param_2 = dVar4;
  }
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

