
void __cdecl FUN_004049b0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444368;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    do {
      local_8 = 0xffffffff;
      puVar4 = (undefined4 *)(*param_1 + -0x10);
      piVar1 = (int *)(*param_1 + -4);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 + -1 < 1) {
        (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_10;
  return;
}

