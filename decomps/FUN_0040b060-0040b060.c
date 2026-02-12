
void __cdecl FUN_0040b060(char *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_2 = (ulong *)0x0;
    cVar2 = FUN_00428cf0(param_1,(ulong *)&param_2);
    if (cVar2 != '\0') {
      *puVar1 = (ulong)param_2;
    }
  }
  return;
}

