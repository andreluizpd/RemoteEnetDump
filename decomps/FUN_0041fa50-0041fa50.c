
void __cdecl FUN_0041fa50(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *this;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  this = param_1;
  uVar2 = *(int *)((int)param_1 + 0x68) * 8;
  uVar5 = *(uint *)((int)param_1 + 0x60) << 9 | uVar2;
  uVar6 = *(int *)((int)param_1 + 100) << 9 | *(uint *)((int)param_1 + 0x60) >> 0x17 |
          (int)uVar2 >> 0x1f;
  param_1 = (void *)CONCAT13(0x80,param_1._0_3_);
  FUN_0041f6c0(this,(undefined1 *)((int)&param_1 + 3),1);
  iVar4 = *(int *)((int)this + 0x68);
  param_1 = (void *)((uint)param_1 & 0xffffff);
  while (iVar4 != 0x38) {
    FUN_0041f6c0(this,(undefined1 *)((int)&param_1 + 3),1);
    iVar4 = *(int *)((int)this + 0x68);
  }
  *(char *)((int)this + 0x39) = (char)(uVar6 >> 0x10);
  *(char *)((int)this + 0x3a) = (char)(uVar6 >> 8);
  *(char *)((int)this + 0x38) = (char)(uVar6 >> 0x18);
  *(char *)((int)this + 0x3c) = (char)(uVar5 >> 0x18);
  *(char *)((int)this + 0x3b) = (char)uVar6;
  *(char *)((int)this + 0x3e) = (char)(uVar5 >> 8);
  *(char *)((int)this + 0x3d) = (char)(uVar5 >> 0x10);
  *(char *)((int)this + 0x3f) = (char)uVar2;
  FUN_0041f470(this,(int)this);
  puVar3 = (undefined1 *)((int)this + 2);
  puVar7 = (undefined4 *)((int)this + 0x40);
  iVar4 = 8;
  do {
    uVar1 = *puVar7;
    puVar3[-2] = (char)((uint)uVar1 >> 0x18);
    puVar3[-1] = (char)((uint)uVar1 >> 0x10);
    *puVar3 = (char)((uint)uVar1 >> 8);
    puVar3[1] = (char)uVar1;
    puVar3 = puVar3 + 4;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _memset((void *)((int)this + 0x20),0,0x50);
  return;
}

