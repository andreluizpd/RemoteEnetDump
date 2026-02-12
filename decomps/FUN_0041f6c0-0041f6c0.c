
void __cdecl FUN_0041f6c0(void *param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_148 [4];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124 [4];
  uint local_114;
  uint local_110 [66];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (0 < (int)param_3) {
    do {
      if (*(int *)((int)param_1 + 0x68) == 0) {
        if (0x3f < param_3) {
          local_124[0] = *(uint *)((int)param_1 + 0x48);
          uVar5 = *(uint *)((int)param_1 + 0x40);
          uVar9 = *(uint *)((int)param_1 + 0x44);
          local_12c = *(uint *)((int)param_1 + 0x4c);
          local_124[2] = *(uint *)((int)param_1 + 0x50);
          local_148[2] = *(uint *)((int)param_1 + 0x54);
          local_148[3] = *(uint *)((int)param_1 + 0x58);
          local_128 = *(uint *)((int)param_1 + 0x5c);
          local_148[0] = param_3 >> 6;
          param_3 = param_3 + (param_3 >> 6) * -0x40;
          do {
            local_110[1] = 0;
            puVar6 = param_2 + 2;
            do {
              local_110[local_110[1] + 2] =
                   CONCAT31(CONCAT21(CONCAT11(puVar6[-2],puVar6[-1]),*puVar6),puVar6[1]);
              local_110[1] = local_110[1] + 1;
              puVar6 = puVar6 + 4;
            } while ((int)local_110[1] < 0x10);
            local_134 = uVar5;
            local_110[0] = uVar9;
            local_130 = local_12c;
            local_114 = local_124[0];
            local_124[1] = local_128;
            local_124[3] = local_148[2];
            local_138 = local_148[3];
            local_110[1] = 0;
            uVar8 = local_124[2];
            do {
              uVar12 = local_134;
              uVar10 = local_138;
              uVar7 = uVar8;
              uVar3 = local_110[0];
              uVar2 = local_114;
              local_138 = local_124[3];
              uVar8 = local_130;
              if (0xf < (int)local_110[1]) {
                local_148[1] = local_110[local_110[1]];
                uVar11 = local_148[local_110[1] + 1];
                local_110[local_110[1] + 2] =
                     ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^
                     uVar11 >> 3) +
                     ((local_148[1] << 0xf | local_148[1] >> 0x11) ^
                      (local_148[1] << 0xd | local_148[1] >> 0x13) ^ local_148[1] >> 10) +
                     local_124[local_110[1]] + local_148[local_110[1]];
              }
              iVar4 = ((uVar7 >> 0xb | uVar7 << 0x15) ^ (uVar7 << 7 | uVar7 >> 0x19) ^
                      (uVar7 >> 6 | uVar7 << 0x1a)) + (~uVar7 & uVar10 ^ local_124[3] & uVar7) +
                      *(int *)(&DAT_0044a518 + local_110[1] * 4) + local_110[local_110[1] + 2] +
                      local_124[1];
              uVar11 = (local_110[0] ^ uVar12) & local_114;
              uVar13 = local_110[0] & uVar12;
              local_124[1] = uVar10;
              local_124[3] = uVar7;
              local_130 = local_114;
              local_114 = local_110[0];
              uVar8 = uVar8 + iVar4;
              local_110[0] = uVar12;
              local_134 = ((uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 << 10 | uVar12 >> 0x16) ^
                          (uVar12 >> 2 | uVar12 << 0x1e)) + (uVar11 ^ uVar13) + iVar4;
              local_110[1] = local_110[1] + 1;
            } while ((int)local_110[1] < 0x40);
            uVar5 = uVar5 + local_134;
            local_124[0] = local_124[0] + uVar3;
            uVar9 = uVar9 + uVar12;
            *(uint *)((int)param_1 + 0x48) = local_124[0];
            local_12c = local_12c + uVar2;
            *(uint *)((int)param_1 + 0x4c) = local_12c;
            local_124[2] = local_124[2] + uVar8;
            local_148[2] = local_148[2] + uVar7;
            *(uint *)((int)param_1 + 0x54) = local_148[2];
            local_148[3] = local_148[3] + local_138;
            *(uint *)((int)param_1 + 0x58) = local_148[3];
            local_128 = local_128 + uVar10;
            *(uint *)((int)param_1 + 0x50) = local_124[2];
            *(uint *)((int)param_1 + 0x5c) = local_128;
            puVar1 = (uint *)((int)param_1 + 0x60);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 + 1;
            *(uint *)((int)param_1 + 0x40) = uVar5;
            *(int *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) + (uint)(0xfffffffe < uVar8)
            ;
            param_2 = param_2 + 0x40;
            local_148[0] = local_148[0] - 1;
            *(uint *)((int)param_1 + 0x44) = uVar9;
          } while (local_148[0] != 0);
        }
        if (param_3 == 0) break;
      }
      *(undefined1 *)(*(int *)((int)param_1 + 0x68) + (int)param_1) = *param_2;
      *(int *)((int)param_1 + 0x68) = *(int *)((int)param_1 + 0x68) + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      if (*(int *)((int)param_1 + 0x68) == 0x40) {
        FUN_0041f470(param_1,(int)param_1);
        *(undefined4 *)((int)param_1 + 0x68) = 0;
      }
    } while (0 < (int)param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

