
void __fastcall FUN_00424e10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 6;
  *param_1 = CBufferedString<512,0>::vftable;
  param_1[1] = puVar1;
  param_1[2] = 0x201;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = 0x202;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

