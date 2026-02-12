
uint __thiscall FUN_00425670(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*this + 0x1e4))(param_1);
  if (-1 < (int)uVar1) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = (**(code **)(*this + 0x168))(uVar1,param_2);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

