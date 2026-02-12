
undefined2 __cdecl FUN_00412ab0(int param_1,uint param_2,WNDCLASSEXW *param_3,UINT *param_4)

{
  wchar_t *pwVar1;
  LPCWSTR lpszClass;
  BOOL BVar2;
  HINSTANCE pHVar3;
  HCURSOR pHVar4;
  uint uVar5;
  int iVar6;
  tagWNDCLASSEXW *ptVar7;
  WNDCLASSEXW *pWVar8;
  tagWNDCLASSEXW local_80;
  tagWNDCLASSEXW local_50;
  LPCRITICAL_SECTION local_20;
  undefined1 local_1c;
  WNDPROC local_18;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445878;
  local_10 = ExceptionList;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (WNDCLASSEXW *)0x0)) &&
     (param_4 != (UINT *)0x0)) {
    if ((short)param_3[1].cbWndExtra == 0) {
      local_20 = (LPCRITICAL_SECTION)(param_2 + 4);
      local_1c = 0;
      local_8 = 0;
      ExceptionList = &local_10;
      EnterCriticalSection(local_20);
      local_1c = 1;
      if ((short)param_3[1].cbWndExtra == 0) {
        if ((LPCWSTR)param_3[1].cbSize == (LPCWSTR)0x0) {
          if (param_3[1].cbClsExtra == 0) {
            pHVar3 = *(HINSTANCE *)(param_1 + 8);
          }
          else {
            pHVar3 = (HINSTANCE)0x0;
          }
          pHVar4 = LoadCursorW(pHVar3,(LPCWSTR)param_3[1].lpfnWndProc);
          param_3->hCursor = pHVar4;
        }
        else {
          local_14 = param_3->lpszClassName;
          local_18 = param_3->lpfnWndProc;
          local_50.cbSize = 0x30;
          BVar2 = GetClassInfoExW((HINSTANCE)0x0,(LPCWSTR)param_3[1].cbSize,&local_50);
          if ((BVar2 == 0) &&
             (BVar2 = GetClassInfoExW(*(HINSTANCE *)(param_1 + 4),(LPCWSTR)param_3[1].cbSize,
                                      &local_50), BVar2 == 0)) {
            local_8 = 0xffffffff;
            FUN_00410640(&local_20);
            ExceptionList = local_10;
            return 0;
          }
          ptVar7 = &local_50;
          pWVar8 = param_3;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            pWVar8->cbSize = ptVar7->cbSize;
            ptVar7 = (tagWNDCLASSEXW *)&ptVar7->style;
            pWVar8 = (WNDCLASSEXW *)&pWVar8->style;
          }
          param_3[1].style = (UINT)param_3->lpfnWndProc;
          param_3->lpszClassName = local_14;
          param_3->lpfnWndProc = local_18;
        }
        pHVar3 = *(HINSTANCE *)(param_1 + 4);
        param_3->style = param_3->style & 0xffffbfff;
        param_3->hInstance = pHVar3;
        if (param_3->lpszClassName == (LPCWSTR)0x0) {
          pwVar1 = (wchar_t *)((int)&param_3[1].cbWndExtra + 2);
          FUN_00410c80(pwVar1,0x25,param_3);
          param_3->lpszClassName = pwVar1;
        }
        lpszClass = param_3->lpszClassName;
        pWVar8 = param_3;
        ptVar7 = &local_80;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          ptVar7->cbSize = pWVar8->cbSize;
          pWVar8 = (WNDCLASSEXW *)&pWVar8->style;
          ptVar7 = (tagWNDCLASSEXW *)&ptVar7->style;
        }
        BVar2 = GetClassInfoExW(param_3->hInstance,lpszClass,&local_80);
        *(short *)&param_3[1].cbWndExtra = (short)BVar2;
        if ((short)BVar2 == 0) {
          uVar5 = FUN_00412a70(param_2,param_3);
          *(short *)&param_3[1].cbWndExtra = (short)uVar5;
        }
      }
      local_8 = 0xffffffff;
      FUN_00410640(&local_20);
    }
    if (param_3[1].cbSize != 0) {
      *param_4 = param_3[1].style;
    }
    ExceptionList = local_10;
    return (short)param_3[1].cbWndExtra;
  }
  return 0;
}

