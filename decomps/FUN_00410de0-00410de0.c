
void __fastcall FUN_00410de0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0044549b;
  local_10 = ExceptionList;
  uVar3 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CCategoryProperty::vftable;
  local_8 = 1;
  iVar4 = 0;
  if (0 < (int)param_1[6]) {
    do {
      if ((iVar4 < 0) || ((int)param_1[6] <= iVar4)) {
        RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = *(undefined4 **)(param_1[5] + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1,uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[6]);
  }
  local_8 = local_8 & 0xffffff00;
  if ((void *)param_1[5] != (void *)0x0) {
    _free((void *)param_1[5]);
    param_1[5] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = CProperty::vftable;
  local_8 = 2;
  FUN_0042eaea((void *)param_1[2]);
  *param_1 = IProperty::vftable;
  ExceptionList = local_10;
  return;
}

