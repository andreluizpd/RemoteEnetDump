
undefined4 __thiscall FUN_004225b0(void *this,void *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_1 == (void *)0x0) {
    return 0x80030009;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  uVar6 = uVar2 + param_2;
  uVar3 = *(int *)((int)this + 0x14) + (uint)CARRY4(uVar2,param_2);
  if ((*(uint *)((int)this + 0x24) <= uVar3) &&
     ((*(uint *)((int)this + 0x24) < uVar3 || (*(uint *)((int)this + 0x20) < uVar6)))) {
    if (param_2 <= param_4) {
      uVar6 = param_4 + uVar2;
      uVar3 = *(int *)((int)this + 0x14) + (uint)CARRY4(param_4,uVar2);
    }
                    /* WARNING: Load size is inaccurate */
    iVar4 = (**(code **)(*this + 0x18))(this,uVar6,uVar3);
    if (iVar4 < 0) {
                    /* WARNING: Load size is inaccurate */
      uVar5 = (**(code **)(*this + 0x18))(this,uVar6,uVar3);
      return uVar5;
    }
  }
  FID_conflict__memcpy
            ((void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10)),param_1,param_2);
  if (param_3 != (uint *)0x0) {
    *param_3 = param_2;
  }
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + (uint)CARRY4(uVar2,param_2);
  uVar2 = *(uint *)((int)this + 0x14);
  if ((*(uint *)((int)this + 0x1c) <= uVar2) &&
     ((*(uint *)((int)this + 0x1c) < uVar2 ||
      (*(uint *)((int)this + 0x18) < *(uint *)((int)this + 0x10))))) {
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x10);
    *(uint *)((int)this + 0x1c) = uVar2;
  }
  return 0;
}

