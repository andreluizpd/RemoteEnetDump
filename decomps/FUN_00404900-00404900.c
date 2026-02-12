
uint __thiscall FUN_00404900(void *this,uint param_1)

{
  undefined4 in_EAX;
  void *pvVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  
  if (param_1 <= *(uint *)((int)this + 8)) {
LAB_004049a5:
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(uint *)((int)this + 0xc);
  if (*this == 0) {
    if (param_1 < uVar2) {
      param_1 = uVar2;
    }
    pvVar1 = _calloc(param_1,4);
    *(void **)this = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(uint *)((int)this + 8) = param_1;
      return CONCAT31((int3)((uint)pvVar1 >> 8),1);
    }
  }
  else {
    if (uVar2 == 0) {
      uVar2 = *(uint *)((int)this + 4) >> 3;
      if (uVar2 < 4) {
        uVar2 = 4;
      }
      else if (0x400 < uVar2) {
        uVar2 = 0x400;
      }
    }
    uVar2 = uVar2 + *(uint *)((int)this + 8);
    if (uVar2 <= param_1) {
      uVar2 = param_1;
    }
    pvVar1 = _calloc(uVar2,4);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
      FUN_00404840(pvVar1,*this,*(int *)((int)this + 4));
                    /* WARNING: Load size is inaccurate */
      _free(*this);
      *(void **)this = pvVar1;
      *(uint *)((int)this + 8) = uVar2;
      in_EAX = extraout_EAX;
      goto LAB_004049a5;
    }
  }
  return (uint)pvVar1 & 0xffffff00;
}

