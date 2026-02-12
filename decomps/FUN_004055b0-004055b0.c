
int * __thiscall FUN_004055b0(void *this,uint param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(PTR_vftable_004575c8 + 0xc))(DAT_00457600 ^ (uint)&stack0xfffffffc);
  *(int *)this = iVar1 + 0x10;
  local_8 = 1;
  if (param_1 < 0x40) {
    param_1 = 0x40;
  }
  *(uint *)((int)this + 4) = param_1;
  if (-1 < (int)param_1) {
                    /* WARNING: Load size is inaccurate */
    if ((int)(*(int *)(*this + -8) - param_1 | 1U - *(int *)(*this + -4)) < 0) {
      FUN_00402d90(this,param_1);
    }
                    /* WARNING: Load size is inaccurate */
    if (-1 < *(int *)(*this + -8)) {
      *(undefined4 *)(*this + -0xc) = 0;
                    /* WARNING: Load size is inaccurate */
      **this = 0;
      ExceptionList = local_10;
      return (int *)this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

