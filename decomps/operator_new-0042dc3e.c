
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2010 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined **local_14 [3];
  char *local_8;
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_0045989c & 1) == 0) {
    _DAT_0045989c = _DAT_0045989c | 1;
    local_8 = "bad allocation";
    std::exception::exception((exception *)&DAT_00459890,&local_8,1);
    _DAT_00459890 = std::bad_alloc::vftable;
    _atexit((_func_4879 *)&LAB_00447e1d);
  }
  std::exception::exception((exception *)local_14,(exception *)&DAT_00459890);
  local_14[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_14,&DAT_00454424);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}

