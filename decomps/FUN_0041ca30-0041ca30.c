
void __fastcall FUN_0041ca30(undefined4 *param_1)

{
  HDC hdc;
  
  hdc = (HDC)*param_1;
  if (hdc != (HDC)0x0) {
    *param_1 = 0;
    DeleteDC(hdc);
  }
  return;
}

