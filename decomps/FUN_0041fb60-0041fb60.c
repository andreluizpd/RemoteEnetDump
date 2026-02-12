
undefined4 __fastcall FUN_0041fb60(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    ReleaseMutex((HANDLE)**(undefined4 **)(param_1 + 0x18));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  return 1;
}

