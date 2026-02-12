
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00404fe0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = CExStr::vftable;
  if (_DAT_00458cd0 == 0) {
    iVar2 = 1;
    uVar1 = 0;
    do {
      (&DAT_00458cd0)[uVar1] = ((char)uVar1 << ((byte)iVar2 & 0x1f)) + (char)uVar1;
      if (iVar2 == 8) {
        iVar2 = 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
  }
  return param_1;
}

