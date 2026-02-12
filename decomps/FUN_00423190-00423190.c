
int __thiscall FUN_00423190(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (-(uint)(param_1 != (int *)0x0) & 0x7fffbffd) + 0x80004003;
  if (-1 < iVar4) {
    cVar2 = (**(code **)(*param_1 + 0x2c))(&DAT_0044ae90);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x28))();
      if (cVar2 != '\0') {
        iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
        uVar3 = (**(code **)(*this + 0xc))();
        (**(code **)(iVar1 + 0x2c))(uVar3);
        iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
        uVar3 = (**(code **)(*this + 0x18))();
        (**(code **)(iVar1 + 0x20))(uVar3);
        (**(code **)(*param_1 + 0x34))(0);
      }
    }
  }
  return iVar4;
}

