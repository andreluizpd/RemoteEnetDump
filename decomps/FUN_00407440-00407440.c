
void __thiscall FUN_00407440(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  *param_1 = *this;
  param_1[1] = *(uint *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 0xc);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = uVar3;
  if ((param_1[1] & 0x80000000) == 0) {
    uVar3 = param_1[2];
    do {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      *param_1 = uVar1 * 2;
      param_1[1] = uVar2 << 1 | uVar1 >> 0x1f;
      uVar3 = uVar3 - 1;
      param_1[2] = uVar3;
    } while ((uVar2 << 1 & 0x80000000) == 0);
  }
  return;
}

