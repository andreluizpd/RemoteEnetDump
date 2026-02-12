
undefined4 __cdecl
FUN_00405220(byte *param_1,uint param_2,undefined2 *param_3,int *param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  size_t _Size;
  int local_c;
  int local_8;
  
  pbVar5 = param_1;
  if (((param_1 != (byte *)0x0) && (param_3 != (undefined2 *)0x0)) && (param_4 != (int *)0x0)) {
    iVar1 = FUN_00405180(param_2,param_5);
    if (iVar1 <= *param_4) {
      iVar1 = (((int)param_2 / 3) * 4) / 0x4c;
      iVar2 = 0x13;
      param_1 = (byte *)0x0;
      local_c = 0x13;
      local_8 = 0;
      if (-1 < iVar1) {
        do {
          if (local_8 == iVar1) {
            iVar2 = ((int)param_2 / 3) * 4 + iVar1 * -0x4c;
            iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
            local_c = iVar2;
          }
          iVar4 = iVar2;
          if (0 < iVar2) {
            do {
              uVar3 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
              *(undefined *)param_3 = (&DAT_004487d0)[(uVar3 << 8) >> 0x1a];
              *(undefined *)((int)param_3 + 1) = (&DAT_004487d0)[(uVar3 << 0xe) >> 0x1a];
              *(undefined *)(param_3 + 1) = (&DAT_004487d0)[(uVar3 << 0x14) >> 0x1a];
              *(undefined *)((int)param_3 + 3) = (&DAT_004487d0)[uVar3 & 0x3f];
              pbVar5 = pbVar5 + 3;
              param_3 = param_3 + 2;
              iVar4 = iVar4 + -1;
              iVar2 = local_c;
            } while (iVar4 != 0);
          }
          param_1 = param_1 + iVar2 * 4;
          if ((param_5 & 2) == 0) {
            *param_3 = 0xa0d;
            param_3 = param_3 + 1;
            param_1 = param_1 + 2;
          }
          local_8 = local_8 + 1;
        } while (local_8 <= iVar1);
        if ((param_1 != (byte *)0x0) && ((param_5 & 2) == 0)) {
          param_3 = param_3 + -1;
          param_1 = param_1 + -2;
        }
      }
      iVar1 = (int)param_2 % 3;
      if ((iVar1 != 0) && (iVar2 = iVar1 + 1, iVar2 != 0)) {
        uVar3 = 0;
        if (0 < iVar1) {
          uVar3 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
        }
        uVar3 = uVar3 << 8;
        if (1 < iVar1) {
          uVar3 = uVar3 | *pbVar5;
          pbVar5 = pbVar5 + 1;
        }
        uVar3 = uVar3 << 8;
        if (2 < iVar1) {
          uVar3 = uVar3 | *pbVar5;
        }
        uVar3 = uVar3 << 8;
        iVar1 = iVar2;
        if (0 < iVar2) {
          do {
            *(undefined *)param_3 = (&DAT_004487d0)[uVar3 >> 0x1a];
            param_3 = (undefined2 *)((int)param_3 + 1);
            uVar3 = uVar3 << 6;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        param_1 = param_1 + iVar2;
        if ((param_5 & 1) == 0) {
          _Size = 4 - iVar2;
          if (0 < (int)_Size) {
            _memset(param_3,0x3d,_Size);
          }
          param_1 = param_1 + _Size;
        }
      }
      *param_4 = (int)param_1;
      return 1;
    }
    return 0;
  }
  return 0;
}

