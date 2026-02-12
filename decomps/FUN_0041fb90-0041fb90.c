
void __fastcall FUN_0041fb90(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

