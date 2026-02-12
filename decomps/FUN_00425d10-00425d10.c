
uint __thiscall FUN_00425d10(void *this,LPCWSTR param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00425c20(this,param_1);
  if (-1 < (int)uVar1) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = (**(code **)(*this + 0x1e0))(uVar1,param_2);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

