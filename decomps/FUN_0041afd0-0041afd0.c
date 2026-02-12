
void __fastcall FUN_0041afd0(int param_1)

{
  BOOL BVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00446018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  if (*(HGDIOBJ *)(param_1 + 0xb8) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb8));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  local_8._0_1_ = 1;
  if (*(HGDIOBJ *)(param_1 + 0xb4) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb4));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (*(HGDIOBJ *)(param_1 + 0xb0) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xb0));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  local_8 = 0xffffffff;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    FreeStdCallThunk(*(void **)(param_1 + 0x14));
  }
  ExceptionList = local_10;
  return;
}

