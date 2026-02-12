
void __thiscall FUN_004074a0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  *param_1 = *this;
  param_1[1] = *(uint *)((int)this + 4);
  uVar2 = *(uint *)((int)this + 0xc);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = uVar2;
  if ((param_1[1] & 0x200000) == 0) {
    uVar2 = param_1[2];
    uVar3 = param_1[1];
    do {
      uVar1 = uVar3 << 1;
      uVar3 = uVar1 | *param_1 >> 0x1f;
      *param_1 = *param_1 * 2;
      uVar2 = uVar2 - 1;
    } while ((uVar1 & 0x200000) == 0);
    param_1[1] = uVar3;
    param_1[2] = uVar2;
  }
  uVar2 = *param_1;
  param_1[2] = param_1[2] - 10;
  *param_1 = uVar2 << 10;
  param_1[1] = param_1[1] << 10 | uVar2 >> 0x16;
  return;
}

