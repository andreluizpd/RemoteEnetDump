
void __fastcall FUN_00406a20(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444618;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))
            (*(undefined4 *)(param_1 + 8),DAT_00457600 ^ (uint)&stack0xfffffffc);
  FUN_0042bc24(*(void **)(param_1 + 4));
  ExceptionList = local_10;
  return;
}

