
uint __cdecl FUN_004047a0(int param_1)

{
  return (int)((uint)*(ushort *)(param_1 + 0xe) * (uint)*(ushort *)(param_1 + 0xc) *
               *(int *)(param_1 + 4) + 0x1f) >> 3 & 0xfffffffc;
}

