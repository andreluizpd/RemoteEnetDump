
void __thiscall FUN_00413cc0(void *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  puVar1 = (undefined1 *)((int)this + 0x14);
  do {
    local_10[uVar4] = *puVar1;
    local_10[uVar4 + 1] = puVar1[1];
    local_10[uVar4 + 2] = puVar1[2];
    local_10[uVar4 + 3] = puVar1[3];
    uVar4 = uVar4 + 4;
    puVar1 = puVar1 + 4;
  } while (uVar4 < 8);
  uVar4 = *(uint *)((int)this + 0x14) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar4) {
    iVar2 = 0x78;
  }
  FUN_00413c10(this,&DAT_00456c98,iVar2 - uVar4);
  FUN_00413c10(this,local_10,8);
  puVar1 = (undefined1 *)((int)this + 0x5d);
  iVar2 = 4;
  puVar3 = (undefined1 *)((int)this + 4);
  do {
    puVar1[-1] = *puVar3;
    *puVar1 = puVar3[1];
    puVar1[1] = puVar3[2];
    puVar1[2] = puVar3[3];
    puVar3 = puVar3 + 4;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x5c);
    param_1[1] = *(undefined4 *)((int)this + 0x60);
    param_1[2] = *(undefined4 *)((int)this + 100);
    param_1[3] = *(undefined4 *)((int)this + 0x68);
  }
  _memset((undefined1 *)((int)this + 4),0,0x58);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

