
int FUN_004054b0(char *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  bool bVar4;
  char *pcVar5;
  LPVOID pvVar6;
  undefined3 extraout_var;
  size_t local_8;
  
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_8 = ((int)pcVar5 - (int)(param_1 + 1)) + 1;
  if (param_3 < (int)local_8) {
    if (DAT_0045648c == (HANDLE)0x0) {
      pvVar6 = _malloc(local_8);
    }
    else {
      pvVar6 = HeapAlloc(DAT_0045648c,0,local_8);
    }
    *param_2 = (int)pvVar6;
  }
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    *(undefined1 *)*param_2 = 0;
  }
  bVar4 = FUN_00404ea0(param_1,(int)pcVar5 - (int)(param_1 + 1),(undefined1 *)*param_2,
                       (int *)&local_8);
  sVar3 = local_8;
  if (CONCAT31(extraout_var,bVar4) != 0) {
    iVar2 = *param_2;
    FUN_00405040(iVar2,local_8);
    *(undefined1 *)(iVar2 + sVar3) = 0;
    return iVar2;
  }
  return 0;
}

