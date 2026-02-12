
void __fastcall FUN_0041d930(int param_1)

{
  BOOL BVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004464a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 6;
  FUN_00426220((undefined4 *)(param_1 + 0x6c8));
  local_8._0_1_ = 5;
  FUN_00405740((undefined4 *)(param_1 + 0x6a4));
  local_8._0_1_ = 4;
  FUN_00414280((undefined4 *)(param_1 + 0x59c));
  local_8._0_1_ = 3;
  FUN_00429ab0((undefined4 *)(param_1 + 0x10c));
  local_8._0_1_ = 2;
  if (*(HGDIOBJ *)(param_1 + 0xf4) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xf4));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  local_8._0_1_ = 1;
  if (*(HGDIOBJ *)(param_1 + 0xf0) != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject(*(HGDIOBJ *)(param_1 + 0xf0));
    if (BVar1 != 0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041afd0(param_1 + 0x24);
  local_8 = 0xffffffff;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    FreeStdCallThunk(*(void **)(param_1 + 0x14));
  }
  ExceptionList = local_10;
  return;
}

