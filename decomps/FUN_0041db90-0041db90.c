
undefined4 * __fastcall FUN_0041db90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446585;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_8 = 4;
  *param_1 = CMainDlg::vftable;
  param_1[8] = 0x1a91;
  FUN_0041b090((int)(param_1 + 9));
  param_1[9] = CPropertyListCtrl::vftable;
  param_1[0x3c] = 0;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  param_1[0x3d] = 0;
  local_8._0_1_ = 8;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_0042a3f0(param_1 + 0x43,(short *)0x0,0x1a9b,0,0);
  local_8._0_1_ = 9;
  FUN_004141c0(param_1 + 0x167);
  local_8._0_1_ = 10;
  FUN_00405700(param_1 + 0x1a9);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_004255e0(param_1 + 0x1b2);
  ExceptionList = local_10;
  return param_1;
}

