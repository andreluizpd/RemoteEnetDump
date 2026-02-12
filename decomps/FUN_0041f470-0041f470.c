
void __thiscall FUN_0041f470(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint auStack_148 [4];
  uint local_128;
  uint local_124 [5];
  uint local_110 [66];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  puVar4 = (undefined1 *)((int)this + 2);
  do {
    local_110[iVar5 + 2] = CONCAT31(CONCAT21(CONCAT11(puVar4[-2],puVar4[-1]),*puVar4),puVar4[1]);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 4;
  } while (iVar5 < 0x10);
  local_110[1] = *(uint *)(param_1 + 0x44);
  local_110[0] = *(uint *)(param_1 + 0x48);
  local_128 = *(uint *)(param_1 + 0x4c);
  local_124[4] = *(uint *)(param_1 + 0x54);
  local_124[1] = *(uint *)(param_1 + 0x5c);
  local_124[0] = *(uint *)(param_1 + 0x40);
  local_124[2] = *(uint *)(param_1 + 0x58);
  local_124[3] = 0;
  uVar7 = *(uint *)(param_1 + 0x50);
  do {
    uVar10 = local_124[0];
    uVar8 = local_124[2];
    uVar6 = uVar7;
    uVar3 = local_110[1];
    uVar2 = local_110[0];
    local_124[2] = local_124[4];
    uVar7 = local_128;
    if (0xf < (int)local_124[3]) {
      uVar9 = local_110[local_124[3]];
      uVar11 = auStack_148[local_124[3] + 1];
      local_110[local_124[3] + 2] =
           ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3) +
           ((uVar9 << 0xf | uVar9 >> 0x11) ^ (uVar9 << 0xd | uVar9 >> 0x13) ^ uVar9 >> 10) +
           local_124[local_124[3]] + auStack_148[local_124[3]];
    }
    iVar5 = ((uVar6 >> 0xb | uVar6 << 0x15) ^ (uVar6 << 7 | uVar6 >> 0x19) ^
            (uVar6 >> 6 | uVar6 << 0x1a)) + (~uVar6 & uVar8 ^ local_124[4] & uVar6) +
            *(int *)(&DAT_0044a518 + local_124[3] * 4) + local_110[local_124[3] + 2] + local_124[1];
    uVar9 = (local_110[1] ^ uVar10) & local_110[0];
    uVar11 = local_110[1] & uVar10;
    local_124[1] = uVar8;
    local_124[4] = uVar6;
    local_128 = local_110[0];
    local_110[0] = local_110[1];
    uVar7 = uVar7 + iVar5;
    local_110[1] = uVar10;
    local_124[0] = ((uVar10 >> 0xd | uVar10 << 0x13) ^ (uVar10 << 10 | uVar10 >> 0x16) ^
                   (uVar10 >> 2 | uVar10 << 0x1e)) + (uVar9 ^ uVar11) + iVar5;
    local_124[3] = local_124[3] + 1;
  } while ((int)local_124[3] < 0x40);
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_124[0];
  *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar10;
  *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar3;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar2;
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar7;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar6;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_124[2];
  puVar1 = (uint *)(param_1 + 0x60);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + uVar8;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (uint)(0xfffffffe < uVar7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

