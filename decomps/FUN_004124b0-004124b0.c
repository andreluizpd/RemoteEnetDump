
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004124b0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004457fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_00458f08 & 1) == 0) {
    DAT_00458f08 = DAT_00458f08 | 1;
    local_8 = 0;
    _DAT_00456ad4 = 1;
    _DAT_00456ac8 = L"EDIT";
    _DAT_00456acc = 0;
    _DAT_00456ad0 = 0;
    _DAT_00456ad8 = 0;
    _memset(&DAT_00456adc,0,0x48);
  }
  ExceptionList = local_10;
  return &DAT_00456a98;
}

