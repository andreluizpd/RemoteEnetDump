
void __cdecl FUN_00413dc0(int param_1,uint param_2,uint param_3,uint *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  pbVar1 = (byte *)(param_1 + iVar2 * 4);
  for (iVar2 = -iVar2; iVar2 != 0; iVar2 = iVar2 + 1) {
    uVar3 = (*(int *)(pbVar1 + iVar2 * 4) * 0x16a88000 |
            (uint)(*(int *)(pbVar1 + iVar2 * 4) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ param_3;
    param_3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  }
  uVar3 = param_2 & 3;
  uVar4 = 0;
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_00413e39;
      uVar4 = (uint)pbVar1[2] << 0x10;
    }
    uVar4 = uVar4 ^ (uint)pbVar1[1] << 8;
  }
  param_3 = param_3 ^ ((*pbVar1 ^ uVar4) * 0x16a88000 | (*pbVar1 ^ uVar4) * -0x3361d2af >> 0x11) *
                      0x1b873593;
LAB_00413e39:
  uVar3 = ((param_3 ^ param_2) >> 0x10 ^ param_3 ^ param_2) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  *param_4 = uVar3 >> 0x10 ^ uVar3;
  return;
}

