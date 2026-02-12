
void __thiscall FUN_00407520(void *this,longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  local_10 = *(int *)((int)this + 4);
  local_8 = *(int *)((int)this + 8);
  uVar3 = local_10 << 1 | uVar1 >> 0x1f;
  uVar2 = uVar1 * 2;
  local_34 = uVar2 + 1;
  local_2c = local_8 + -1;
  local_30 = uVar3 + (0xfffffffe < uVar2);
  local_c = local_2c;
  FUN_004074a0(&local_34,&local_24);
  if ((uVar1 == 0) && (local_10 == 0x100000)) {
    local_2c = local_8 + -2;
    local_34 = -1;
    local_30 = 0x3fffff;
  }
  else {
    local_34 = uVar2 - 1;
    local_30 = (uVar3 - 1) + (uint)(uVar2 != 0);
    local_2c = local_c;
  }
  lVar4 = __allshl((char)local_2c - (char)local_1c,local_30);
  *param_2 = local_24;
  param_2[1] = local_20;
  param_2[2] = local_1c;
  param_2[3] = local_18;
  *param_1 = lVar4;
  *(uint *)(param_1 + 1) = local_1c;
  *(undefined4 *)((int)param_1 + 0xc) = local_28;
  return;
}

