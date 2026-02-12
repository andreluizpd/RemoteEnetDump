
void __fastcall FUN_00409f20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00409f33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    return;
  }
  return;
}

