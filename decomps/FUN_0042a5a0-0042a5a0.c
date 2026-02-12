
undefined4 * __thiscall FUN_0042a5a0(void *this,char *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004475fb;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = CStringTokenizerA::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x10) = 5;
  if (*(int **)((int)this + 4) != (int *)0x0) {
    FUN_004049b0(*(int **)((int)this + 4),*(int *)((int)this + 8));
    _free(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar3 = FUN_00404d60(&param_1,param_1);
  local_8._0_1_ = 1;
  FUN_00429e40(this,piVar3,param_2,(char)param_3);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar3 = (int *)(param_1 + -4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -0x10) + 4))(param_1 + -0x10,uVar2);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}

