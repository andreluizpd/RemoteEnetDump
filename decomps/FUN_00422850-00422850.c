
undefined4 __thiscall FUN_00422850(void *this,int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  int *this_00;
  int iVar3;
  
  this_00 = param_1;
  uVar1 = *(uint *)((int)this + 0x18);
  if (-1 < *(int *)(*param_1 + -8)) {
    *(undefined4 *)(*param_1 + -0xc) = 0;
    *(undefined1 *)*param_1 = 0;
    if (uVar1 == 0) {
      return 0x80070057;
    }
    param_1 = (int *)FUN_00405180(uVar1,(byte)param_2);
    iVar3 = (int)param_1 + 1;
    if (-1 < iVar3) {
      if ((int)(1U - *(int *)(*this_00 + -4) | *(int *)(*this_00 + -8) - iVar3) < 0) {
        FUN_00402d90(this_00,iVar3);
      }
      puVar2 = (undefined2 *)*this_00;
      if (iVar3 <= *(int *)(puVar2 + -4)) {
        *(int *)(puVar2 + -6) = iVar3;
        *(undefined1 *)(iVar3 + *this_00) = 0;
        iVar3 = FUN_00405220(*(byte **)((int)this + 8),uVar1,puVar2,(int *)&param_1,(byte)param_2);
        if (iVar3 == 0) {
          if (*(int *)(*this_00 + -8) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00401760(0x80070057);
          }
          *(undefined4 *)(*this_00 + -0xc) = 0;
          *(undefined1 *)*this_00 = 0;
          return 0x80004005;
        }
        *(undefined1 *)((int)puVar2 + (int)param_1) = 0;
        if ((-1 < (int)param_1) && ((int)param_1 <= *(int *)(*this_00 + -8))) {
          *(int **)(*this_00 + -0xc) = param_1;
          *(undefined1 *)((int)param_1 + *this_00) = 0;
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401760(0x80070057);
}

