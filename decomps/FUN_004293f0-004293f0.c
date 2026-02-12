
uint __cdecl FUN_004293f0(short *param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = in_EAX & 0xffffff00;
  if (param_1 != (short *)0x0) {
    uVar1 = FUN_00429210(param_1,(longlong *)&local_c);
    if ((char)uVar1 != '\0') {
      *param_2 = local_c;
      param_2[1] = local_8;
    }
  }
  return uVar1;
}

