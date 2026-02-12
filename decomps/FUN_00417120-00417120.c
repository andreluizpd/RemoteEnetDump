
undefined * __cdecl FUN_00417120(uint param_1)

{
  switch((param_1 >> 5 & 0x40 | param_1 & 0x30) >> 4) {
  case 0:
    return FUN_004157e0;
  case 1:
    return FUN_00415860;
  case 2:
    return FUN_00415970;
  case 3:
    return FUN_00415a70;
  case 4:
    return FUN_00415bb0;
  case 5:
    return FUN_00415c70;
  case 6:
    return FUN_00415da0;
  case 7:
    return FUN_00415ee0;
  default:
    return (undefined *)0x0;
  }
}

