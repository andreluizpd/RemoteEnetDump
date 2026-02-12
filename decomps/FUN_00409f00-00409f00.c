
void __fastcall FUN_00409f00(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00409f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x10) + 8))();
    return;
  }
  return;
}

