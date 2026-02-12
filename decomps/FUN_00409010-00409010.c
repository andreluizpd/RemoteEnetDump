
undefined4 __fastcall FUN_00409010(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444861;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408dd0(param_1);
  if ((uint)param_1[5] < param_1[4] + 8U) {
    FUN_00407f40(param_1 + 1,1);
  }
  puVar1 = (undefined4 *)param_1[4];
  param_1[4] = (int)(puVar1 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  local_8 = 0xffffffff;
  this = (void *)*param_1;
  if (*(uint *)((int)this + 0x10) < *(int *)((int)this + 0xc) + 1U) {
    FUN_00407ec0(this,1);
  }
  puVar2 = *(undefined1 **)((int)this + 0xc);
  *(undefined1 **)((int)this + 0xc) = puVar2 + 1;
  *puVar2 = 0x7b;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}

