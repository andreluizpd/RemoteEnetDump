
void __thiscall FUN_004200f0(void *this,int param_1)

{
  int local_240 [3];
  int local_234 [136];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004459bb;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0040b820(local_240);
  local_8 = 0;
  FUN_00420080(this,local_234);
  if (0 < *(int *)(local_234[0] + -0xc)) {
    ConvertStringSecurityDescriptorToSecurityDescriptorW
              (local_234[0],1,(undefined4 *)(param_1 + 4),0);
  }
  local_8 = 0xffffffff;
  FUN_004030c0(local_240);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

