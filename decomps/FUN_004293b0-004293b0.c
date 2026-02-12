
uint __cdecl FUN_004293b0(char *param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = in_EAX & 0xffffff00;
  if (param_1 != (char *)0x0) {
    uVar1 = FUN_00429070(param_1,(longlong *)&local_c);
    if ((char)uVar1 != '\0') {
      *param_2 = local_c;
      param_2[1] = local_8;
    }
  }
  return uVar1;
}

