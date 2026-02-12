
void FUN_00410d70(undefined4 *param_1)

{
  HBRUSH hbr;
  
  if ((*(byte *)(param_1 + 0x1f) & 4) != 0) {
    hbr = GetSysColorBrush(0xf);
    FillRect((HDC)*param_1,(RECT *)(param_1 + 1),hbr);
  }
  return;
}

