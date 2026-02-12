
void __thiscall FUN_00413c10(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2;
  uVar3 = *(uint *)((int)this + 0x14) + param_2 * 8;
  uVar2 = *(uint *)((int)this + 0x14) >> 3 & 0x3f;
  *(uint *)((int)this + 0x14) = uVar3;
  if (uVar3 < param_2 * 8) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + (param_2 >> 0x1d);
  uVar3 = -uVar2 + 0x40;
  if (param_2 < uVar3) {
    param_2 = 0;
  }
  else {
    FID_conflict__memcpy((void *)(uVar2 + 0x1c + (int)this),param_1,uVar3);
    FUN_00413560((int *)((int)this + 4),(int)this + 0x1c);
    for (uVar2 = -uVar2 + 0x7f; uVar2 < param_2; uVar2 = uVar2 + 0x40) {
      FUN_00413560((int *)((int)this + 4),(int)param_1 + (uVar2 - 0x3f));
      uVar3 = uVar3 + 0x40;
    }
    uVar2 = 0;
    param_2 = uVar3;
  }
  FID_conflict__memcpy
            ((void *)(uVar2 + 0x1c + (int)this),(void *)(param_2 + (int)param_1),uVar1 - param_2);
  return;
}

