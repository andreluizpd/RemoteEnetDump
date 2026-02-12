
void __thiscall FUN_00426540(void *this,char *param_1,char *param_2)

{
  uint uVar1;
  void *this_00;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_664 [202];
  undefined4 local_33c [202];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044700c;
  local_10 = ExceptionList;
  uVar1 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (char *)0x0)) {
    this_00 = (void *)FUN_00423220(0x19c);
    if ((this_00 == (void *)0x0) ||
       (puVar2 = FUN_00423c60(this_00,param_1,param_2,0), puVar2 == (undefined4 *)0x0)) {
      FUN_00402ef0(local_664,PTR_s_1ECJVz9rQXU_004574c4,'\0');
      local_8 = 0;
      FUN_00402ef0(local_33c,DAT_00459770,'\0');
      local_8._0_1_ = 1;
      FUN_00405140(param_2);
      FUN_0040f9e0(5,(wchar_t *)"(%s) %s() pPair=NULL appending element %s, %s");
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00402a60(local_33c);
      puVar2 = local_664;
    }
    else {
      uVar3 = FUN_00425070((void *)((int)this + 0xb8));
      if (-1 < (int)uVar3) goto LAB_0042670d;
      (**(code **)*puVar2)(1,uVar1);
      FUN_00402ef0(local_33c,PTR_s_1ECJVz9rQXU_004574c4,'\0');
      local_8 = 2;
      FUN_00402ef0(local_664,DAT_00459770,'\0');
      local_8._0_1_ = 3;
      FUN_00405140(param_2);
      FUN_0040f9e0(5,(wchar_t *)"(%s) %s() error appending element %s, %s");
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00402a60(local_664);
      puVar2 = local_33c;
    }
    local_8 = 0xffffffff;
    FUN_00402a60(puVar2);
  }
LAB_0042670d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

