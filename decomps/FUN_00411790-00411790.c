
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00411790(void *this,HWND param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  HRESULT HVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 auStackY_44 [2];
  undefined4 uStackY_3c;
  uint local_34;
  undefined2 local_24 [4];
  BSTR local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445688;
  local_10 = ExceptionList;
  local_34 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStackY_3c = 0x4117c7;
  local_14 = local_34;
  iVar3 = GetWindowTextLengthW(param_1);
  iVar2 = (iVar3 + 1) * -2;
  *(int *)(&stack0xffffffc8 + iVar2) = iVar3 + 1;
  *(int *)((int)&uStackY_3c + iVar2) = (int)&local_34 + iVar2;
  *(HWND *)((int)auStackY_44 + iVar2 + 4) = param_1;
  puVar6 = (undefined1 *)((int)auStackY_44 + iVar2);
  *(undefined4 *)((int)auStackY_44 + iVar2) = 0x4117e0;
  iVar3 = GetWindowTextW(*(HWND *)((int)auStackY_44 + iVar2 + 4),
                         *(LPWSTR *)((int)&uStackY_3c + iVar2),*(int *)(&stack0xffffffc8 + iVar2));
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)(puVar6 + -4);
    puVar6 = puVar6 + -4;
    *puVar7 = 0x4117ea;
    DVar4 = GetLastError();
    if (DVar4 != 0) goto LAB_0041186a;
  }
  *(undefined2 **)(puVar6 + -4) = local_24;
  local_24[0] = 0;
  puVar8 = puVar6 + -8;
  *(undefined4 *)(puVar6 + -8) = 0x411802;
  HVar5 = VariantClear(*(VARIANTARG **)(puVar6 + -4));
  if (HVar5 < 0) {
    *(HRESULT *)(puVar8 + -4) = HVar5;
                    /* WARNING: Subroutine does not return */
    *(undefined4 *)(puVar8 + -8) = 0x41180c;
    FUN_00401760(*(undefined4 *)(puVar8 + -4));
  }
  *(int *)(puVar8 + -4) = (int)&local_34 + iVar2;
  local_24[0] = 8;
  puVar9 = puVar8 + -8;
  *(undefined4 *)(puVar8 + -8) = 0x41181c;
  local_1c = SysAllocString(*(OLECHAR **)(puVar8 + -4));
  if ((local_1c == (BSTR)0x0) && ((undefined1 *)((int)&local_34 + iVar2) != (undefined1 *)0x0)) {
    *(undefined4 *)(puVar9 + -4) = 0x8007000e;
    local_24[0] = 10;
    local_1c = (BSTR)0x8007000e;
                    /* WARNING: Subroutine does not return */
    *(undefined4 *)(puVar9 + -8) = 0x411841;
    FUN_00401760(*(undefined4 *)(puVar9 + -4));
  }
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x40);
  *(undefined2 **)(puVar9 + -4) = local_24;
  puVar10 = puVar9 + -8;
  *(undefined4 *)(puVar9 + -8) = 0x411855;
  (*pcVar1)();
  local_8 = 0xffffffff;
  *(undefined2 **)(puVar10 + -4) = local_24;
  *(undefined4 *)(puVar10 + -8) = 0x411868;
  VariantClear(*(VARIANTARG **)(puVar10 + -4));
LAB_0041186a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

