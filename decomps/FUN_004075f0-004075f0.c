
void __fastcall
FUN_004075f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  short sVar1;
  int iVar2;
  float10 extraout_ST0;
  ulonglong uVar3;
  
  uVar3 = FUN_0042db20(param_1,param_2);
  iVar2 = (int)uVar3;
  if ((float10)0.0 < extraout_ST0 - (float10)iVar2) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 >> 3;
  *param_5 = 0x15c - (iVar2 * 8 + 8);
  *param_3 = *(undefined4 *)(&DAT_00448b70 + iVar2 * 8);
  sVar1 = *(short *)(&DAT_00448aba + iVar2 * 2);
  param_3[1] = *(undefined4 *)(&DAT_00448b74 + iVar2 * 8);
  param_3[2] = (int)sVar1;
  return;
}

