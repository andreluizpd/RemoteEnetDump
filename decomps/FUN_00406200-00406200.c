
void __thiscall FUN_00406200(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_88;
  undefined4 local_80 [27];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004445b8;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004134f0(local_80);
  uVar3 = 0;
  local_8 = 0;
  local_88 = 0;
  if (((*(int *)((int)this + 0x10) != 0) && (*(int *)(*(int *)((int)this + 0x10) + 0x414) != 0)) &&
     (0xf < param_2)) {
    FUN_004134c0((int)local_80);
    iVar1 = *(int *)((int)this + 0x10);
    if (*(int *)(iVar1 + 0x414) != 0) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 0x418 + iVar1;
        if (((iVar1 != 0) && (*(void **)(iVar1 + 0xc) != (void *)0x0)) &&
           (*(uint *)(iVar1 + 0x10) != 0)) {
          FUN_00413c10(local_80,*(void **)(iVar1 + 0xc),*(uint *)(iVar1 + 0x10));
          local_88 = local_88 + 1;
        }
        iVar1 = *(int *)((int)this + 0x10);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x20;
      } while (uVar3 < *(uint *)(iVar1 + 0x414));
      if (0 < local_88) {
        FUN_00413cc0(local_80,param_1);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00413490(local_80);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

