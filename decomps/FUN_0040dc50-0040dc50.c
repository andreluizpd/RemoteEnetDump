
int * __thiscall FUN_0040dc50(void *this,char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  char *pcVar4;
  rsize_t rVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444f28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401760(0x80004005);
  }
  iVar2 = (**(code **)(*param_2 + 0xc))(DAT_00457600 ^ (uint)&stack0xfffffffc);
  *(int *)this = iVar2 + 0x10;
  local_8 = 0;
  if (param_1 == (char *)0x0) {
    rVar5 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      pHVar3 = FUN_00401eb0((uint)param_1 & 0xffff,0);
      if (pHVar3 == (HMODULE)0x0) {
        ExceptionList = local_10;
        return (int *)this;
      }
      FUN_00404b80(this,pHVar3,(uint)param_1 & 0xffff);
      ExceptionList = local_10;
      return (int *)this;
    }
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    rVar5 = (int)pcVar4 - (int)(param_1 + 1);
  }
  FUN_00403380(this,param_1,rVar5);
  ExceptionList = local_10;
  return (int *)this;
}

