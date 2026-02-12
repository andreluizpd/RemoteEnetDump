
void __fastcall FUN_0041ca10(undefined4 *param_1)

{
  BOOL BVar1;
  
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    BVar1 = DeleteObject((HGDIOBJ)*param_1);
    if (BVar1 != 0) {
      *param_1 = 0;
    }
  }
  return;
}

