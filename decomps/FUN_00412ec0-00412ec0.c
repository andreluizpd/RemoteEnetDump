
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00412ec0(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *this_00;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  uint local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445949;
  local_10 = ExceptionList;
  local_40 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  iStack_44 = 0x412efa;
  local_14 = local_40;
  iVar3 = (**(code **)(*this + 0x34))();
  iStack_44 = 0x412f05;
  iVar2 = (iVar3 + 1) * -2;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x30);
  *(int *)((int)&iStack_44 + iVar2) = iVar3 + 1;
  *(int *)(auStack_48 + iVar2) = (int)&local_40 + iVar2;
  puVar6 = (undefined1 *)((int)&uStack_4c + iVar2);
  *(undefined4 *)((int)&uStack_4c + iVar2) = 0x412f12;
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    *(undefined4 *)(puVar6 + -4) = 0x28;
    *(undefined4 *)(puVar6 + -8) = 0x412f21;
    this_00 = (undefined4 *)operator_new(*(uint *)(puVar6 + -4));
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00[1] = 0;
      this_00[5] = 0;
      this_00[6] = 0;
      this_00[7] = 0;
      this_00[8] = DefWindowProcW_exref;
      *this_00 = CPropertyEditWindow::vftable;
      *(undefined1 *)(this_00 + 9) = 0;
    }
    local_8 = 0xffffffff;
    local_24 = *param_2;
    uVar4 = param_2[1];
    *(undefined4 *)(puVar6 + -4) = 0;
    *(undefined4 *)(puVar6 + -8) = 0;
    local_20 = uVar4;
    uVar4 = param_2[2];
    local_18 = param_2[3];
    *(undefined4 *)(puVar6 + -0xc) = 0;
    *(undefined4 *)(puVar6 + -0x10) = 0x50000080;
    *(int *)(puVar6 + -0x14) = (int)&local_40 + iVar2;
    *(undefined4 *)(puVar6 + -0x18) = 0;
    local_1c = uVar4;
    *(undefined4 *)(puVar6 + -8) = 0;
    *(undefined4 **)(puVar6 + -0x18) = &local_24;
    *(undefined4 *)(puVar6 + -0x1c) = param_1;
    *(undefined4 *)(puVar6 + -0x20) = 0x412fb0;
    uVar4 = FUN_00412e20(this_00,*(HWND *)(puVar6 + -0x1c),*(int **)(puVar6 + -0x18),
                         *(LPCWSTR *)(puVar6 + -0x14),*(uint *)(puVar6 + -0x10),
                         *(DWORD *)(puVar6 + -0xc),*(HMENU *)(puVar6 + -8),*(LPVOID *)(puVar6 + -4))
    ;
    *(undefined4 *)((int)this + 0x28) = uVar4;
    if (*(ushort *)((int)this + 0x18) - 0x11 < 3) {
      uVar4 = this_00[1];
      *(undefined4 *)(puVar6 + -4) = 0xfffffff0;
      *(undefined4 *)(puVar6 + -8) = uVar4;
      puVar7 = puVar6 + -0xc;
      *(undefined4 *)(puVar6 + -0xc) = 0x412fcb;
      uVar5 = GetWindowLongW(*(HWND *)(puVar6 + -8),*(int *)(puVar6 + -4));
      if (uVar5 != (uVar5 | 0x2000)) {
        *(uint *)(puVar7 + -4) = uVar5 | 0x2000;
        uVar4 = this_00[1];
        *(undefined4 *)(puVar7 + -8) = 0xfffffff0;
        *(undefined4 *)(puVar7 + -0xc) = uVar4;
        *(undefined4 *)(puVar7 + -0x10) = 0x412fe4;
        SetWindowLongW(*(HWND *)(puVar7 + -0xc),*(int *)(puVar7 + -8),*(LONG *)(puVar7 + -4));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

