
undefined4 __thiscall
FUN_00412d30(void *this,undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  if (param_6 == 0) {
    if (param_2 == 0x110) {
      FUN_004120a0(100);
      *param_5 = 1;
      return 1;
    }
    if ((param_2 == 0x111) && ((ushort)(param_3 - 1) < 7)) {
      EndDialog(*(HWND *)((int)this + 4),(uint)param_3);
      *param_5 = 0;
      return 1;
    }
  }
  return 0;
}

