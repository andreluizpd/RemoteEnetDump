
int __thiscall FUN_00426730(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (-(uint)(param_1 != (undefined4 *)0x0) & 0x7fffbffd) + 0x80004003;
  if (iVar2 < 0) {
    return iVar2;
  }
  this_00 = (void *)FUN_00409ad0(0xcc);
  if ((this_00 != (void *)0x0) &&
     (puVar1 = FUN_00426170(this_00,(int *)this), puVar1 != (undefined4 *)0x0)) {
    *param_1 = puVar1;
    return iVar2;
  }
  return -0x7ff8fff2;
}

