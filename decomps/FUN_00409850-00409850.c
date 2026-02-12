
undefined1 __thiscall FUN_00409850(void *this,int *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  void *local_8;
  
  local_8 = this;
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 == '\0') {
    return 0;
  }
  iVar5 = 0;
  do {
                    /* WARNING: Load size is inaccurate */
    iVar4 = (**(code **)(*this + 0x14))();
    if (iVar4 <= iVar5) {
      if (cVar1 == '\0') {
        return 0;
      }
      uVar3 = (**(code **)(*param_1 + 8))();
      return uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    local_8 = (void *)0x0;
    cVar2 = (**(code **)(*this + 0x184))(iVar5,&local_8);
    if (cVar2 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xc))(local_8);
    }
    iVar5 = iVar5 + 1;
  } while (cVar1 != '\0');
  return 0;
}

