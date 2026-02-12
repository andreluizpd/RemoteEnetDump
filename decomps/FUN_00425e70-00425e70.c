
uint __thiscall FUN_00425e70(void *this,int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446ef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  iVar5 = *(int *)((int)this + 4) + -1;
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  uVar4 = iVar5 / 2;
  if (iVar5 < 0) {
LAB_00425f0e:
    if ((param_3 != 0) && (0 < (int)*(uint *)((int)this + 4))) {
      if (param_3 != 1) {
        if (param_3 != 3) {
          ExceptionList = local_10;
          return uVar4;
        }
        ExceptionList = local_10;
        return 0xffffffff;
      }
      if (uVar4 < *(uint *)((int)this + 4)) {
                    /* WARNING: Load size is inaccurate */
        *(int **)(*this + uVar4 * 4) = param_1;
        uVar4 = FUN_00425f67();
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
  }
  else {
    do {
      iVar2 = (**(code **)(*param_1 + 0x58))(*(undefined4 *)(iVar1 + uVar4 * 4));
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          if (iVar2 == 0) goto LAB_00425f0e;
          if (-1 < iVar2) goto LAB_00425ed6;
        }
        iVar5 = uVar4 - 1;
      }
      else {
LAB_00425ed6:
        iVar3 = uVar4 + 1;
      }
      uVar4 = (iVar5 - iVar3) / 2 + iVar3;
    } while (iVar3 <= iVar5);
  }
  local_8 = 0;
  FUN_004253d0(this,uVar4,&param_1,param_2);
  local_8 = 0xffffffff;
  uVar4 = FUN_00425f67();
  return uVar4;
}

