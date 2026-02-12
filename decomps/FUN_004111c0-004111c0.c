
undefined4 FUN_004111c0(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445538;
  local_10 = ExceptionList;
  uVar4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  puVar5 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    DVar2 = GetCurrentThreadId();
    puVar3 = (undefined4 *)0x0;
    do {
      if (puVar5[1] == DVar2) {
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x1c) = puVar5[2];
        }
        else {
          puVar3[2] = puVar5[2];
        }
        uVar4 = *puVar5;
        break;
      }
      piVar1 = puVar5 + 2;
      puVar3 = puVar5;
      puVar5 = (undefined4 *)*piVar1;
    } while ((undefined4 *)*piVar1 != (undefined4 *)0x0);
  }
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  ExceptionList = local_10;
  return uVar4;
}

