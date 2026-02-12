
uint __fastcall FUN_00406850(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00406864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

