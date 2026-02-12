
undefined4 FUN_00401c40(int *param_1,byte *param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00401b30(&DAT_0044d2cc,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = -(uint)(param_1 != (int *)0x4) & (uint)param_1;
    return 0;
  }
  return 0x80004001;
}

