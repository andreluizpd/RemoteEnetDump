
void __thiscall FUN_00424c30(void *this,int *param_1,char param_2,undefined4 param_3)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = 0;
  iVar1 = (**(code **)(*this + 0x14))();
  this_00 = param_1;
  if (0 < iVar1) {
    do {
      if (*(uint *)((int)this + 0xbc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x80070057);
      }
      if (*(int *)(*(int *)((int)this + 0xb8) + uVar2 * 4) != 0) {
        (**(code **)(**(int **)(*(int *)((int)this + 0xb8) + uVar2 * 4) + 0x60))(this_00,param_3);
      }
                    /* WARNING: Load size is inaccurate */
      iVar1 = (**(code **)(*this + 0x14))();
      if ((int)uVar2 < iVar1 + -1) {
        param_1 = (int *)CONCAT31(param_1._1_3_,param_2);
        if ((param_2 == '\t') && (this_00[2] != 0)) {
          FUN_00422fa0(this_00,' ',this_00[2]);
        }
        else {
          (**(code **)(*this_00 + 4))(&param_1,1);
        }
      }
                    /* WARNING: Load size is inaccurate */
      uVar2 = uVar2 + 1;
      iVar1 = (**(code **)(*this + 0x14))();
    } while ((int)uVar2 < iVar1);
  }
  return;
}

