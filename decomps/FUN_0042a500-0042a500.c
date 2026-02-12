
undefined4 * __thiscall FUN_0042a500(void *this,undefined4 *param_1,char *param_2,char param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004473eb;
  local_10 = ExceptionList;
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
  FUN_00429e40(this,param_1,param_2,param_3);
  ExceptionList = local_10;
  return (undefined4 *)this;
}

