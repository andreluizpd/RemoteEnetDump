
void __thiscall FUN_0040b470(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *local_2c;
  char local_28 [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444b08;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (int *)0x0;
  local_8 = 1;
  _sprintf(local_28,"0x%p",param_2,local_14);
                    /* WARNING: Load size is inaccurate */
  cVar2 = (**(code **)(*this + 0xe4))(param_1,&local_2c);
  if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
    cVar2 = (**(code **)(*this + 0x168))(param_1,local_28);
    piVar1 = local_2c;
    if (cVar2 != '\0') {
      if ((local_2c != param_2) && (local_2c != (int *)0x0)) {
        local_2c = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 4))(param_2);
      }
    }
  }
  local_8 = 0xffffffff;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

