
undefined4 __fastcall FUN_00411280(int param_1)

{
  FUN_004295c0(param_1 + 0x10c);
  if (*(char *)(param_1 + 0x6a8) != '\0') {
    FUN_00405ab0((void *)(param_1 + 0x6a4),0,0);
  }
  if (*(char *)(param_1 + 0x5a4) != '\0') {
    FUN_004148c0((void *)(param_1 + 0x59c),0,0);
  }
  EndDialog(*(HWND *)(param_1 + 4),1);
  return 0;
}

