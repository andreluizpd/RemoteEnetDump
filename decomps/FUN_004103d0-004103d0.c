
int * __thiscall FUN_004103d0(void *this,LPCWSTR param_1)

{
  char cVar1;
  LRESULT LVar2;
  int *piVar3;
  LPCWSTR pWVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  LPCWSTR pWVar8;
  WPARAM local_8;
  
  if (param_1 == (LPCWSTR)0x0) {
    return (int *)0x0;
  }
  local_8 = 0;
  LVar2 = SendMessageW(*(HWND *)((int)this + 4),0x18b,0,0);
  if (0 < LVar2) {
    do {
      piVar3 = (int *)SendMessageW(*(HWND *)((int)this + 4),0x199,local_8,0);
      pWVar8 = param_1;
      pWVar4 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
      iVar5 = lstrcmpW(pWVar4,pWVar8);
      if (iVar5 == 0) {
        return piVar3;
      }
      cVar1 = (**(code **)(*piVar3 + 4))();
      if (cVar1 == '\x01') {
        iVar5 = 0;
        while( true ) {
          if ((iVar5 < 0) || (piVar3[6] <= iVar5)) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = *(int **)(piVar3[5] + iVar5 * 4);
          }
          iVar5 = iVar5 + 1;
          if (piVar7 == (int *)0x0) break;
          pWVar8 = param_1;
          pWVar4 = (LPCWSTR)(**(code **)(*piVar7 + 0xc))();
          iVar6 = lstrcmpW(pWVar4,pWVar8);
          if (iVar6 == 0) {
            return piVar7;
          }
        }
      }
      local_8 = local_8 + 1;
      LVar2 = SendMessageW(*(HWND *)((int)this + 4),0x18b,0,0);
    } while ((int)local_8 < LVar2);
  }
  return (int *)0x0;
}

