
void __thiscall FUN_004185c0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445bdb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004182c0(this,param_1,param_2,param_3);
  if (iVar1 < 0) {
    ExceptionList = local_10;
    return;
  }
  DVar2 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x30) = DVar2;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_8 = 0;
  puVar3 = (undefined4 *)operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 **)((int)this + 0x34) = puVar3;
    local_8 = 0xffffffff;
    FUN_00418673();
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  local_8 = 0xffffffff;
  FUN_00418673();
  return;
}

