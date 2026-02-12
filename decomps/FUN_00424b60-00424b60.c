
void __thiscall FUN_00424b60(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 0x16c))();
  local_8 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_c = 0;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    if (iVar2 <= (int)local_c) {
      if (-1 < local_8) {
                    /* WARNING: Load size is inaccurate */
        iVar2 = (**(code **)(*this + 0x14))();
        if (0 < iVar2) {
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 0x170))();
        }
      }
      *(int *)((int)this + 0x10) = local_8;
      return;
    }
    if ((uint)param_1[0x2f] <= local_c) break;
    if ((*(int *)(param_1[0x2e] + local_c * 4) != 0) &&
       (piVar1 = *(int **)(param_1[0x2e] + local_c * 4), piVar1 != (int *)0x0)) {
                    /* WARNING: Load size is inaccurate */
      iVar2 = *this;
      uVar3 = (**(code **)(*piVar1 + 0x18))();
      uVar3 = (**(code **)(*piVar1 + 0xc))(uVar3);
      iVar2 = (**(code **)(iVar2 + 0x84))(uVar3);
      if (iVar2 < 0) {
        local_8 = -0x7ff8fff2;
      }
    }
    local_c = local_c + 1;
    if (local_8 < 0) {
      *(int *)((int)this + 0x10) = local_8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

