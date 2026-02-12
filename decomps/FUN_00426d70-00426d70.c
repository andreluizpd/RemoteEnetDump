
void __cdecl FUN_00426d70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = param_2 - (int)param_1;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    param_2 = *(int *)((int)param_1 + (uVar1 - 4));
    *(undefined4 *)((int)param_1 + (uVar1 - 4)) = *param_1;
    uVar1 = uVar1 - 4;
    FUN_00425ab0((int)param_1,0,(int)uVar1 >> 2,&param_2);
  }
  return;
}

