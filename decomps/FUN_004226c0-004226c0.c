
int __thiscall FUN_004226c0(void *this,char *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined3 extraout_var;
  char *local_8;
  
  iVar3 = -0x7fffbffd;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_2;
    if (param_2 == (undefined1 *)0xffffffff) {
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -(int)(param_1 + 1);
    }
    if ((int)pcVar4 < 1) {
      return -0x7ff8ffa9;
    }
    param_2 = (undefined1 *)0x0;
    local_8 = pcVar4;
    iVar3 = FUN_004149d0(this,(uint)pcVar4,(int)pcVar4 >> 0x1f,(int *)&param_2);
    if (-1 < iVar3) {
      bVar2 = FUN_00404ea0(param_1,(int)pcVar4,param_2,(int *)&local_8);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_00414980(this,0);
        return -0x7fffbffb;
      }
      FUN_00414980(this,(uint)local_8);
    }
  }
  return iVar3;
}

