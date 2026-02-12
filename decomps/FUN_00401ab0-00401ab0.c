
void __fastcall FUN_00401ab0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00401ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

