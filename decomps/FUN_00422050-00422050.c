
bool __cdecl FUN_00422050(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00421f70(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1),param_3,'\x01');
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}

