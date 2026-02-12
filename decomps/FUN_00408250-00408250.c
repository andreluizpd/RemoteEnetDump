
void __fastcall FUN_00408250(void *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(uint *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0xc) + 1U) {
    FUN_00407ec0(param_1,1);
  }
  puVar1 = *(undefined1 **)((int)param_1 + 0xc);
  *(undefined1 **)((int)param_1 + 0xc) = puVar1 + 1;
  *puVar1 = 0;
  pvVar2 = *(void **)((int)param_1 + 8);
  if (*(void **)((int)param_1 + 0xc) == pvVar2) {
    (**(code **)(*(int *)PTR_DAT_004564d4 + 0x18))(pvVar2);
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + -1;
    *(undefined4 *)((int)param_1 + 8) = 0;
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    return;
  }
  iVar3 = (int)*(void **)((int)param_1 + 0xc) - (int)pvVar2;
  pvVar2 = FUN_00407e40(pvVar2,*(int *)((int)param_1 + 0x10) - (int)pvVar2,iVar3);
  *(void **)((int)param_1 + 8) = pvVar2;
  *(int *)((int)param_1 + 0xc) = (int)pvVar2 + iVar3;
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + -1;
  *(int *)((int)param_1 + 0x10) = (int)pvVar2 + iVar3;
  return;
}

