
uint __fastcall FUN_004068b0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004068c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

