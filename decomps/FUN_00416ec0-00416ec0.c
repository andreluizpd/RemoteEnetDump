
uint * __cdecl FUN_00416ec0(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445b51;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = param_1[1] + 0x20;
  if (uVar1 < 0x8001) {
    piVar3 = (int *)*param_1;
    puVar2 = (uint *)((int)piVar3 + param_1[1] + 0x14);
    param_1[1] = uVar1;
  }
  else {
    puVar2 = FUN_00414a60(param_1,0x20,&param_1);
    piVar3 = param_1;
  }
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = param_2 - 1U | (uint)piVar3;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  ExceptionList = local_10;
  return puVar2;
}

