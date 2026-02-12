
void __fastcall FUN_00409ec0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00409ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0x10))();
    return;
  }
  return;
}

