
int __thiscall FUN_00424cd0(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (-(uint)(param_1 != (int *)0x0) & 0x7fffbffd) + 0x80004003;
  if (-1 < iVar4) {
    iVar4 = -0x7fffbffb;
    cVar2 = (**(code **)(*param_1 + 0x2c))("Collection");
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x28))(), cVar2 != '\0')) {
      (**(code **)(*param_1 + 0x2c))(&DAT_0044af44);
      iVar1 = *param_1;
      uVar3 = (**(code **)(*(int *)((int)this + -0xc) + 0x1a8))();
      (**(code **)(iVar1 + 0x20))(uVar3);
      (**(code **)(*param_1 + 0x2c))(&DAT_0044af3c);
      iVar1 = *param_1;
      uVar3 = (**(code **)(*(int *)((int)this + -0xc) + 0x14))();
      (**(code **)(iVar1 + 0xc))(uVar3);
      cVar2 = (**(code **)(*param_1 + 0x2c))("Items");
      if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x38))(), cVar2 != '\0')) {
        iVar4 = 0;
        uVar5 = 0;
        if (*(int *)((int)this + 0xb0) != 0) {
          do {
            if (iVar4 < 0) break;
            if (*(uint *)((int)this + 0xb0) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00401760(0x80070057);
            }
            iVar4 = (**(code **)(**(int **)(*(int *)((int)this + 0xac) + uVar5 * 4) + 0x68))
                              (param_1);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)((int)this + 0xb0));
        }
        (**(code **)(*param_1 + 0x3c))(0);
      }
      (**(code **)(*param_1 + 0x34))(0);
    }
  }
  return iVar4;
}

