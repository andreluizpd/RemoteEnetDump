
void __fastcall FUN_00401a60(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00401a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 8))();
    return;
  }
  return;
}

