
undefined4 __thiscall FUN_00425350(void *this,uint param_1,int param_2)

{
  void *extraout_EAX;
  void *_Memory;
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0xc) = param_2;
  }
  if (param_1 == 0) {
                    /* WARNING: Load size is inaccurate */
    _Memory = *this;
    if (_Memory != (void *)0x0) {
      _free(_Memory);
      *(undefined4 *)this = 0;
      _Memory = extraout_EAX;
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return CONCAT31((int3)((uint)_Memory >> 8),1);
  }
  if (*(uint *)((int)this + 8) < param_1) {
    uVar1 = FUN_00404900(this,param_1);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    uVar2 = *(uint *)((int)this + 4);
  }
  else {
    uVar2 = *(uint *)((int)this + 4);
    if (param_1 <= uVar2) goto LAB_004253c4;
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = FUN_00424f00(*this + uVar2 * 4,param_1 - uVar2);
LAB_004253c4:
  *(uint *)((int)this + 4) = param_1;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

