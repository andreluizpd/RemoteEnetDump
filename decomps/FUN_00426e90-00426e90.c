
void __cdecl FUN_00426e90(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *local_c;
  undefined4 *local_8;
  
  iVar1 = (int)param_2 - (int)param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00426f22:
      if (1 < iVar1) {
        FUN_004259b0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_004260b0((int)param_1,(int)param_2,(char)param_4);
        }
        FUN_00426d70(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_00426f22;
    }
    FUN_00426790(&local_c,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_c - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_8 & 0xfffffffcU)) {
      FUN_00426e90(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00426e90(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = (int)param_2 - (int)param_1;
  } while( true );
}

