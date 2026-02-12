
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00410780(void *this,undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  uint local_3c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445378;
  local_10 = ExceptionList;
  local_3c = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  iStack_40 = 0x4107b7;
  local_14 = local_3c;
  iVar5 = (**(code **)(*this + 0x34))();
  iStack_40 = 0x4107c2;
  iVar4 = (iVar5 + 1) * -2;
                    /* WARNING: Load size is inaccurate */
  iVar6 = *this;
  *(int *)((int)&iStack_40 + iVar4) = iVar5 + 1;
  *(int *)(auStack_44 + iVar4) = (int)&local_3c + iVar4;
  pcVar1 = *(code **)(iVar6 + 0x30);
  puVar8 = (undefined1 *)((int)&uStack_48 + iVar4);
  *(undefined4 *)((int)&uStack_48 + iVar4) = 0x4107d2;
  iVar6 = (*pcVar1)();
  if (iVar6 != 0) {
    uVar2 = *param_1;
    local_8 = 0;
    *(undefined4 *)(puVar8 + -4) = 1;
    *(undefined4 *)(puVar8 + -8) = uVar2;
    puVar9 = puVar8 + -0xc;
    *(undefined4 *)(puVar8 + -0xc) = 0x4107eb;
    SetBkMode(*(HDC *)(puVar8 + -8),*(int *)(puVar8 + -4));
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      uVar7 = param_1[9];
    }
    else {
      uVar7 = param_1[0xe];
    }
    *(undefined4 *)(puVar9 + -4) = uVar7;
    *(undefined4 *)(puVar9 + -8) = uVar2;
    puVar10 = puVar9 + -0xc;
    *(undefined4 *)(puVar9 + -0xc) = 0x410801;
    SetTextColor(*(HDC *)(puVar9 + -8),*(COLORREF *)(puVar9 + -4));
    *(undefined4 *)(puVar10 + -4) = param_1[10];
    *(undefined4 *)(puVar10 + -8) = uVar2;
    puVar11 = puVar10 + -0xc;
    *(undefined4 *)(puVar10 + -0xc) = 0x41080c;
    SetBkColor(*(HDC *)(puVar10 + -8),*(COLORREF *)(puVar10 + -4));
    uVar7 = param_1[3];
    iVar6 = param_1[1];
    uVar3 = param_1[2];
    *(undefined4 *)(puVar11 + -4) = 0xa824;
    local_1c = uVar7;
    *(int **)(puVar11 + -8) = &local_24;
    local_24 = iVar6 + 2;
    *(undefined4 *)(puVar11 + -0xc) = 0xffffffff;
    local_20 = uVar3;
    uVar7 = param_1[4];
    *(int *)(puVar11 + -0x10) = (int)&local_3c + iVar4;
    *(undefined4 *)(puVar11 + -0x14) = uVar2;
    local_18 = uVar7;
    *(undefined4 *)(puVar11 + -0x18) = 0x41083d;
    DrawTextW(*(HDC *)(puVar11 + -0x14),*(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
              *(LPRECT *)(puVar11 + -8),*(UINT *)(puVar11 + -4));
    local_8 = 0xffffffff;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

