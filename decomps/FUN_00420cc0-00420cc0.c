
undefined4 __fastcall FUN_00420cc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    iVar2 = FUN_0041fb80(iVar2);
    if ((iVar2 == 0) &&
       (puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 4), puVar1 != (undefined4 *)0x0)) {
      return *puVar1;
    }
  }
  return 0;
}

