
void FUN_004102d0(ushort param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_48 [5];
  int local_34 [9];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445348;
  local_10 = ExceptionList;
  local_34[8] = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00406190(local_48);
  local_8 = 0;
  bVar1 = FUN_00406310(local_48,param_1,DAT_004597f0);
  if (bVar1) {
    local_34[4] = 0;
    local_34[5] = 0;
    local_34[6] = 0;
    local_34[7] = 0;
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    cVar2 = FUN_00406200(local_48,local_34,0x10);
    if (cVar2 != '\0') {
      local_34[4] = 0x8672433b;
      local_34[5] = 0xaedde07;
      local_34[6] = 0xf77953f;
      local_34[7] = 0x338a2c2;
      uVar3 = 0x10;
      iVar4 = 0;
      do {
        if (*(int *)((int)local_34 + iVar4 + 0x10) != *(int *)((int)local_34 + iVar4)) break;
        uVar3 = uVar3 - 4;
        iVar4 = iVar4 + 4;
      } while (3 < uVar3);
    }
  }
  local_8 = 0xffffffff;
  FUN_00406360(local_48);
  ExceptionList = local_10;
  __security_check_cookie(local_34[8] ^ (uint)&stack0xfffffffc);
  return;
}

