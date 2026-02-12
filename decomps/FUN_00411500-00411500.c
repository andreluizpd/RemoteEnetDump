
undefined4 __thiscall FUN_00411500(void *this,undefined4 param_1,ushort param_2)

{
  FUN_004295c0((int)this + 0x10c);
  if (*(char *)((int)this + 0x6a8) != '\0') {
    FUN_00405ab0((void *)((int)this + 0x6a4),0,0);
  }
  if (*(char *)((int)this + 0x5a4) != '\0') {
    FUN_004148c0((void *)((int)this + 0x59c),0,0);
  }
  EndDialog(*(HWND *)((int)this + 4),(uint)param_2);
  return 0;
}

