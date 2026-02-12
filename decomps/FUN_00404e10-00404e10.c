
uint __thiscall FUN_00404e10(void *this,char *param_1)

{
  void *this_00;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004443a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar2 = FUN_00404900(this,uVar1 + 1);
    if ((char)uVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
  }
                    /* WARNING: Load size is inaccurate */
  this_00 = (void *)(*this + uVar1 * 4);
  local_8 = 0;
  if (this_00 != (void *)0x0) {
    FUN_00404d60(this_00,param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return uVar1;
}

