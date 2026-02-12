
void __thiscall FUN_004253d0(void *this,uint param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = *(uint *)((int)this + 4);
  if (param_1 < uVar2) {
    if (-uVar2 - 1 < param_3) goto LAB_0042543a;
    uVar4 = uVar2 + param_3;
    if (uVar4 == 0) {
                    /* WARNING: Load size is inaccurate */
      if (*this != (void *)0x0) {
        _free(*this);
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      if (*(uint *)((int)this + 8) < uVar4) {
        uVar1 = FUN_00404900(this,uVar4);
        if ((char)uVar1 == '\0') goto LAB_00425479;
        uVar3 = *(uint *)((int)this + 4);
LAB_004254c8:
                    /* WARNING: Load size is inaccurate */
        FUN_00424f00(*this + uVar3 * 4,uVar4 - uVar3);
      }
      else {
        uVar3 = uVar2;
        if (uVar2 < uVar4) goto LAB_004254c8;
      }
      *(uint *)((int)this + 4) = uVar4;
    }
                    /* WARNING: Load size is inaccurate */
    FUN_00404840((void *)(*this + (param_1 + param_3) * 4),(void *)(param_1 * 4 + *this),
                 uVar2 - param_1);
    local_8 = 0;
                    /* WARNING: Load size is inaccurate */
    FUN_00424f00(*this + param_1 * 4,param_3);
    goto LAB_00425525;
  }
  if (-param_1 - 1 < param_3) {
LAB_0042543a:
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80070216);
  }
  uVar4 = param_1 + param_3;
  if (uVar4 == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*this != (void *)0x0) {
      _free(*this);
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    goto LAB_00425525;
  }
  if (*(uint *)((int)this + 8) < uVar4) {
    uVar1 = FUN_00404900(this,uVar4);
    if ((char)uVar1 == '\0') {
LAB_00425479:
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
    uVar2 = *(uint *)((int)this + 4);
LAB_0042545e:
                    /* WARNING: Load size is inaccurate */
    FUN_00424f00(*this + uVar2 * 4,uVar4 - uVar2);
  }
  else if (uVar2 < uVar4) goto LAB_0042545e;
  *(uint *)((int)this + 4) = uVar4;
LAB_00425525:
  uVar2 = param_1 + param_3;
  if (param_1 < uVar2) {
    do {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(*this + param_1 * 4) = *param_2;
      param_1 = param_1 + 1;
    } while (param_1 < uVar2);
  }
  ExceptionList = local_10;
  return;
}

