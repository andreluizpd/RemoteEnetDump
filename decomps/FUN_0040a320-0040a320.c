
undefined4 __thiscall FUN_0040a320(void *this,undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  void *this_00;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444a62;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = FUN_0042dcce(0xc);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00408180(this_00,'\x01');
  }
  local_8 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x28))(uVar2);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)((int)this + 0xc) + 8))(piVar3);
      (**(code **)(*piVar3 + 0x34))(0);
    }
    (**(code **)(*piVar3 + 0x44))(param_1);
    (**(code **)*piVar3)(1);
    ExceptionList = local_10;
    return *param_1;
  }
  ExceptionList = local_10;
  return *param_1;
}

