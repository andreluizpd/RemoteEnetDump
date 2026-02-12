
undefined4 FUN_00422360(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  uint uVar4;
  LPVOID pvVar5;
  int iVar6;
  uint dwSize;
  longlong lVar7;
  
  uVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x28);
  param_1 = param_2 / uVar1;
  if (((param_3 != 0) || (param_2 != 0)) && (lVar7 = __aullrem(param_2,param_3,uVar1,0), lVar7 != 0)
     ) {
    param_1 = param_1 + 1;
  }
  if (*(uint *)(uVar2 + 0x30) == param_1) {
    return 0;
  }
  if (param_3 <= *(uint *)(uVar2 + 0x24)) {
    if ((param_3 < *(uint *)(uVar2 + 0x24)) || (param_2 < *(uint *)(uVar2 + 0x20))) {
      iVar6 = *(uint *)(uVar2 + 0x30) - param_1;
      if (*(int *)(uVar2 + 0x30) < iVar6) {
        iVar6 = *(int *)(uVar2 + 0x30);
      }
      if (iVar6 < 1) {
        return 0;
      }
      BVar3 = VirtualFree((LPVOID)(uVar1 * param_1 + *(int *)(uVar2 + 8)),uVar1 * iVar6,0x4000);
      if (BVar3 == 0) {
        return 0x8007000e;
      }
      *(int *)(uVar2 + 0x30) = *(int *)(uVar2 + 0x30) - iVar6;
      *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x28) * *(int *)(uVar2 + 0x30);
      *(undefined4 *)(uVar2 + 0x24) = 0;
      if (*(uint *)(uVar2 + 0x1c) < param_3) {
        return 0;
      }
      if ((*(uint *)(uVar2 + 0x1c) <= param_3) && (*(uint *)(uVar2 + 0x18) <= param_2)) {
        return 0;
      }
      *(uint *)(uVar2 + 0x1c) = param_3;
      *(uint *)(uVar2 + 0x18) = param_2;
      return 0;
    }
    if (param_3 < *(uint *)(uVar2 + 0x24)) {
      return 0;
    }
    if ((param_3 <= *(uint *)(uVar2 + 0x24)) && (param_2 <= *(uint *)(uVar2 + 0x20))) {
      return 0;
    }
  }
  dwSize = uVar1 * param_1;
  if (*(uint *)(uVar2 + 0x38) < param_1) {
    uVar4 = ((dwSize / *(uint *)(uVar2 + 0x2c) + 1) * *(uint *)(uVar2 + 0x2c)) / uVar1;
    pvVar5 = VirtualAlloc((LPVOID)0x0,uVar1 * uVar4,0x2000,1);
    if (pvVar5 == (LPVOID)0x0) {
      return 0x80030070;
    }
    pvVar5 = VirtualAlloc(pvVar5,dwSize,0x1000,4);
    if (pvVar5 == (LPVOID)0x0) {
      return 0x80030070;
    }
    if (*(void **)(uVar2 + 8) != (void *)0x0) {
      FID_conflict__memcpy(pvVar5,*(void **)(uVar2 + 8),*(size_t *)(uVar2 + 0x18));
    }
    FUN_004220a0(uVar2);
    *(LPVOID *)(uVar2 + 8) = pvVar5;
    *(uint *)(uVar2 + 0x38) = uVar4;
  }
  else {
    pvVar5 = VirtualAlloc(*(LPVOID *)(uVar2 + 8),dwSize,0x1000,4);
    *(LPVOID *)(uVar2 + 8) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0x80030070;
    }
  }
  *(uint *)(uVar2 + 0x30) = param_1;
  *(uint *)(uVar2 + 0x20) = dwSize;
  *(undefined4 *)(uVar2 + 0x24) = 0;
  return 0;
}

