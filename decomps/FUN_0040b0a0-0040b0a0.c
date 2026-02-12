
uint __cdecl FUN_0040b0a0(short *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint in_EAX;
  uint uVar2;
  
  puVar1 = param_2;
  uVar2 = in_EAX & 0xffffff00;
  *param_2 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    param_2 = (ulong *)0x0;
    uVar2 = FUN_00428ea0(param_1,(ulong *)&param_2);
    if ((char)uVar2 != '\0') {
      *puVar1 = (ulong)param_2;
    }
  }
  return uVar2;
}

