
int __cdecl FUN_004276f0(char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    if (cVar1 == param_2) {
      iVar2 = iVar2 + 1;
    }
    cVar1 = *param_1;
  }
  return iVar2;
}

