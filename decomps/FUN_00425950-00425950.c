
bool __thiscall FUN_00425950(void *this,uint param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0xbc) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    piVar1 = *(int **)(*(int *)((int)this + 0xb8) + param_1 * 4);
    bVar2 = piVar1 != (int *)0x0;
    if (bVar2) {
      if (piVar1 == (int *)0x0) {
        return false;
      }
      (**(code **)(*piVar1 + 0x2c))(param_2);
    }
  }
  return bVar2;
}

