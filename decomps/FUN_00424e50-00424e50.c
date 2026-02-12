
void __fastcall FUN_00424e50(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) != param_1 + 0x18)) {
    piVar1 = (int *)FUN_00401d70();
    (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  puVar2 = (undefined1 *)(param_1 + 0x18);
  *(undefined1 **)(param_1 + 4) = puVar2;
  *(undefined4 *)(param_1 + 8) = 0x201;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = 0x202;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

