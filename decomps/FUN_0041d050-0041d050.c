
void __fastcall FUN_0041d050(undefined4 *param_1)

{
  HDC pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446328;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pHVar1 = (HDC)*param_1;
  *param_1 = 0;
  ReleaseDC((HWND)param_1[1],pHVar1);
  local_8 = 0xffffffff;
  pHVar1 = (HDC)*param_1;
  if (pHVar1 != (HDC)0x0) {
    *param_1 = 0;
    DeleteDC(pHVar1);
  }
  ExceptionList = local_10;
  return;
}

