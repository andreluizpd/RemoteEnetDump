
uint __thiscall FUN_00424ad0(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
    uVar3 = 0;
    iVar2 = (**(code **)(*this + 0x14))();
    if (0 < iVar2) {
      while( true ) {
        if (*(uint *)((int)this + 0xbc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x80070057);
        }
        if ((*(int *)(*(int *)((int)this + 0xb8) + uVar3 * 4) != 0) &&
           (cVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0xb8) + uVar3 * 4) + 0x44))
                              (param_1,param_2), local_8 = uVar3, cVar1 != '\0')) break;
                    /* WARNING: Load size is inaccurate */
        uVar3 = uVar3 + 1;
        iVar2 = (**(code **)(*this + 0x14))();
        if (iVar2 <= (int)uVar3) {
          return 0xffffffff;
        }
      }
    }
  }
  return local_8;
}

