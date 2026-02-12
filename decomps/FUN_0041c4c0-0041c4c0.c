
void FUN_0041c4c0(undefined4 *param_1)

{
  HBITMAP hbm;
  HBRUSH pHVar1;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446279;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pHVar1 = (HBRUSH)0x0;
  local_24 = 0x5555;
  uStack_22 = 0xaaaa;
  uStack_20 = 0x5555;
  uStack_1e = 0xaaaa;
  uStack_1c = 0x5555;
  local_1a = 0xaaaa;
  uStack_18 = 0x5555;
  local_16 = 0xaaaa;
  hbm = CreateBitmap(8,8,1,1,&local_24);
  if (hbm != (HBITMAP)0x0) {
    pHVar1 = CreatePatternBrush(hbm);
    DeleteObject(hbm);
  }
  *param_1 = pHVar1;
  local_8 = 0;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

