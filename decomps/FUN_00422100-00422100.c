
undefined4 FUN_00422100(int *param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  *param_3 = 0;
  bVar1 = FUN_00401b30(param_2,(byte *)&DAT_0044d2ec);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  if (param_1[0xd] != 0) {
    uVar2 = (*(code *)**(undefined4 **)param_1[0xd])((undefined4 *)param_1[0xd],param_2,param_3);
    return uVar2;
  }
  return 0x80004002;
}

