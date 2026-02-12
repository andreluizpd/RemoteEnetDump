
void __fastcall FUN_004234b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = IStringStringPair::vftable;
  *param_1 = CStringStringPair::vftable;
  puVar1 = param_1 + 7;
  param_1[1] = CBufferedString<80,0>::vftable;
  param_1[2] = puVar1;
  param_1[3] = 0x51;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar2 = 0x52;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x22;
  param_1[0x1c] = CBufferedString<260,0>::vftable;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = 0x105;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  iVar2 = 0x106;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[100] = 0;
  param_1[0x65] = 0xffffffff;
  param_1[0x66] = 0;
  return;
}

