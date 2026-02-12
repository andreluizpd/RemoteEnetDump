
void __fastcall FUN_00402a60(undefined4 *param_1)

{
  undefined1 *puVar1;
  SIZE_T SVar2;
  undefined1 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00444078;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CDecStr<260,1>::vftable;
  local_8 = 0;
  puVar1 = (undefined1 *)param_1[1];
  puVar3 = (undefined1 *)((int)param_1 + 0xd);
  if (puVar1 == puVar3) {
    iVar4 = 0x104;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else if (puVar1 != (undefined1 *)0x0) {
    SVar2 = HeapSize(DAT_0045648c,0,puVar1);
    puVar3 = puVar1;
    for (; SVar2 != 0; SVar2 = SVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00405450(puVar1);
  }
  puVar1 = (undefined1 *)param_1[0x45];
  puVar3 = (undefined1 *)((int)param_1 + 0x11e);
  if (puVar1 == puVar3) {
    iVar4 = 0x208;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else if (puVar1 != (undefined1 *)0x0) {
    SVar2 = HeapSize(DAT_0045648c,0,puVar1);
    puVar3 = puVar1;
    for (; SVar2 != 0; SVar2 = SVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00405450(puVar1);
  }
  local_8 = 0xffffffff;
  FUN_00405030(param_1);
  ExceptionList = local_10;
  return;
}

