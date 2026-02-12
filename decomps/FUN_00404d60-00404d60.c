
int * __thiscall FUN_00404d60(void *this,char *param_1)

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
  iVar2 = (**(code **)(PTR_vftable_004575c8 + 0xc))(DAT_00457600 ^ (uint)&stack0xfffffffc);
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

