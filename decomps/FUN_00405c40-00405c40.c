
void FUN_00405c40(void)

{
  int *piVar1;
  uint uVar2;
  HRESULT HVar3;
  int iVar4;
  BSTR bstrString;
  int iVar5;
  BSTR pOVar6;
  wchar_t *local_a78;
  int *local_a74;
  BSTR local_a70;
  int *local_a6c;
  BSTR local_a68;
  int *local_a64;
  undefined4 local_a60 [3];
  OLECHAR *local_a54;
  WCHAR local_834 [1040];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444580;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  GetModuleFileNameW((HMODULE)0x0,local_834,0x410);
  local_a74 = (int *)0x0;
  local_8 = 1;
  HVar3 = CoCreateInstance((IID *)&DAT_00448848,(LPUNKNOWN)0x0,1,(IID *)&DAT_00448858,&local_a74);
  if (HVar3 < 0) goto LAB_0040606a;
  local_a6c = (int *)0x0;
  local_8._0_1_ = 3;
  iVar4 = (**(code **)(*local_a74 + 0x48))(local_a74,&local_a6c,uVar2);
  if (-1 < iVar4) {
    bstrString = SysAllocString(L"RemoteEnet Module");
    if (bstrString == (BSTR)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x8007000e);
    }
    local_8._0_1_ = 4;
    FUN_00405ba0(local_a60,local_834);
    local_8._0_1_ = 5;
    if (local_a54 == (OLECHAR *)0x0) {
      local_a70 = (BSTR)0x0;
    }
    else {
      local_a70 = SysAllocString(local_a54);
      if (local_a70 == (BSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x8007000e);
      }
    }
    local_a64 = (int *)0x0;
    local_8._0_1_ = 8;
    iVar4 = (**(code **)(*local_a6c + 0x28))(local_a6c,bstrString,&local_a64);
    if (iVar4 < 0) {
LAB_00405e63:
      HVar3 = CoCreateInstance((IID *)&DAT_004488b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_004488c0,&local_a64
                              );
      if (-1 < HVar3) goto LAB_00405e88;
    }
    else {
      local_a78 = (wchar_t *)0x0;
      local_8 = CONCAT31(local_8._1_3_,9);
      iVar5 = (**(code **)(*local_a64 + 0x2c))(local_a64,&local_a78);
      if (iVar5 < 0) goto LAB_00405e3b;
      if (local_a78 == (wchar_t *)0x0) {
LAB_00405e36:
        iVar5 = -0x7fffbffb;
LAB_00405e3b:
        (**(code **)(*local_a6c + 0x24))(local_a6c,bstrString);
      }
      else {
        iVar5 = __wcsicmp(local_a78,local_a70);
        if (iVar5 != 0) goto LAB_00405e36;
        iVar5 = (**(code **)(*local_a64 + 0x6c))(local_a64,&local_a68);
        if (iVar5 < 0) goto LAB_00405e3b;
        if (local_a68 != (BSTR)0x1) goto LAB_00405e36;
        iVar5 = (**(code **)(*local_a64 + 0xa4))(local_a64,&local_a68);
        if (iVar5 < 0) goto LAB_00405e3b;
        if (local_a68 != (BSTR)0x1) goto LAB_00405e36;
        local_a68 = (BSTR)0x0;
        iVar5 = (**(code **)(*local_a64 + 0x94))(local_a64,&local_a68);
        if (iVar5 < 0) goto LAB_00405e3b;
        iVar5 = iVar4;
        if (((byte)local_a68 & 7) != 7) goto LAB_00405e36;
      }
      local_8._0_1_ = 8;
      SysFreeString(local_a78);
      if (iVar5 < 0) goto LAB_00405e63;
LAB_00405e88:
      piVar1 = local_a64;
      pOVar6 = SysAllocString(L"RemoteEnet Module");
      local_a68 = pOVar6;
      if (pOVar6 == (BSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x8007000e);
      }
      local_8._0_1_ = 10;
      iVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,pOVar6);
      local_8._0_1_ = 8;
      SysFreeString(pOVar6);
      piVar1 = local_a64;
      if (-1 < iVar4) {
        pOVar6 = SysAllocString(L"Allow inbound trafic for remote");
        local_a68 = pOVar6;
        if (pOVar6 == (BSTR)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00401760(0x8007000e);
        }
        local_8._0_1_ = 0xb;
        iVar4 = (**(code **)(*piVar1 + 0x28))(piVar1,pOVar6);
        local_8._0_1_ = 8;
        SysFreeString(pOVar6);
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*local_a64 + 0x70))(local_a64,1);
          if (-1 < iVar4) {
            iVar4 = (**(code **)(*local_a64 + 0xa8))(local_a64,1);
            if (-1 < iVar4) {
              iVar4 = (**(code **)(*local_a64 + 0x30))(local_a64,local_a70);
              if (-1 < iVar4) {
                iVar4 = (**(code **)(*local_a64 + 0x98))(local_a64,0x7fffffff);
                piVar1 = local_a64;
                if (-1 < iVar4) {
                  pOVar6 = SysAllocString(L"All");
                  local_a68 = pOVar6;
                  if (pOVar6 == (BSTR)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00401760(0x8007000e);
                  }
                  local_8._0_1_ = 0xc;
                  iVar4 = (**(code **)(*piVar1 + 0x80))(piVar1,pOVar6);
                  local_8._0_1_ = 8;
                  SysFreeString(pOVar6);
                  if (-1 < iVar4) {
                    iVar4 = (**(code **)(*local_a64 + 0x88))(local_a64,0xffffffff);
                    if (-1 < iVar4) {
                      (**(code **)(*local_a6c + 0x20))(local_a6c,local_a64);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_8._0_1_ = 6;
    if (local_a64 != (int *)0x0) {
      (**(code **)(*local_a64 + 8))(local_a64);
    }
    local_8._0_1_ = 5;
    SysFreeString(local_a70);
    local_8._0_1_ = 4;
    FUN_004030c0(local_a60);
    local_8._0_1_ = 3;
    SysFreeString(bstrString);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_a6c != (int *)0x0) {
    (**(code **)(*local_a6c + 8))(local_a6c);
  }
LAB_0040606a:
  local_8 = 0xffffffff;
  if (local_a74 != (int *)0x0) {
    (**(code **)(*local_a74 + 8))(local_a74);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

