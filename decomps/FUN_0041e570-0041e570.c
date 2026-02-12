
int __thiscall FUN_0041e570(void *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  uVar3 = param_1 * 2;
                    /* WARNING: Load size is inaccurate */
  pvVar2 = *this;
  if (pvVar2 == (void *)0x0) {
    if (0x80 < uVar3) {
      FUN_00419260(this,uVar3);
                    /* WARNING: Load size is inaccurate */
      return *this;
    }
    *(int *)this = (int)this + 4;
    return (int)this + 4;
  }
  pvVar1 = (void *)((int)this + 4);
  if (uVar3 < 0x81) {
    if (pvVar2 != pvVar1) {
      FUN_00401d80(pvVar1,0x80,pvVar2,uVar3);
      FUN_00419250((undefined4 *)this);
    }
    *(void **)this = pvVar1;
                    /* WARNING: Load size is inaccurate */
    return *this;
  }
  if (pvVar2 == pvVar1) {
    FUN_00419260(this,uVar3);
                    /* WARNING: Load size is inaccurate */
    FUN_00401d80(*this,uVar3,pvVar1,0x80);
                    /* WARNING: Load size is inaccurate */
    return *this;
  }
  FUN_0041e540(this,uVar3);
                    /* WARNING: Load size is inaccurate */
  return *this;
}

