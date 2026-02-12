
void FUN_0041b880(int *param_1,ushort param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  LPCWSTR pWVar2;
  HMODULE pHVar3;
  bool bVar4;
  uint uVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  HMODULE pHVar9;
  WCHAR *pWVar10;
  undefined **local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  _RTL_CRITICAL_SECTION local_a68;
  undefined1 local_a50;
  LPCRITICAL_SECTION local_a4c;
  int *local_a48;
  WCHAR local_a44 [520];
  WCHAR local_634;
  undefined2 local_632 [523];
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004461fd;
  local_10 = ExceptionList;
  uVar5 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a48 = param_1;
  local_a78 = ATL::CRegObject::vftable;
  local_a74 = 0;
  local_a70 = 0;
  local_a6c = 0;
  local_a4c = &local_a68;
  local_a68.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_a68.LockCount = 0;
  local_a68.RecursionCount = 0;
  local_a68.OwningThread = (HANDLE)0x0;
  local_a68.LockSemaphore = (HANDLE)0x0;
  local_a68.SpinCount = 0;
  local_a50 = 0;
  local_8 = 4;
  local_14 = uVar5;
  BVar6 = InitializeCriticalSectionAndSpinCount(local_a4c,0);
  if (BVar6 == 0) {
    DVar7 = GetLastError();
    if (0 < (int)DVar7) {
      DVar7 = DVar7 & 0xffff | 0x80070000;
    }
    if (-1 < (int)DVar7) goto LAB_0041b958;
  }
  else {
LAB_0041b958:
    local_a50 = 1;
    if (param_4 != (undefined4 *)0x0) {
      pWVar2 = (LPCWSTR)*param_4;
      while (pWVar2 != (LPCWSTR)0x0) {
        iVar8 = param_4[1];
        if ((pWVar2 != (LPCWSTR)0x0) && (iVar8 != 0)) {
          EnterCriticalSection(&local_a68);
          local_a4c = (LPCRITICAL_SECTION)0x0;
          local_8._0_1_ = 5;
          FUN_00419ef0(pWVar2,iVar8);
          LeaveCriticalSection(&local_a68);
          local_8 = CONCAT31(local_8._1_3_,4);
        }
        puVar1 = param_4 + 2;
        param_4 = param_4 + 2;
        param_1 = local_a48;
        pWVar2 = (LPCWSTR)*puVar1;
      }
    }
    iVar8 = (**(code **)(*param_1 + 0x14))(&local_a78,uVar5);
    pHVar3 = DAT_004597ec;
    if (-1 < iVar8) {
      local_a48 = (int *)0x0;
      local_8._0_1_ = 6;
      DVar7 = GetModuleFileNameW(DAT_004597ec,local_21c,0x104);
      if (DVar7 == 0) {
        FUN_004187c0();
      }
      else {
        if (DVar7 == 0x104) {
          local_8 = CONCAT31(local_8._1_3_,4);
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
          ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                    ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_a48);
          local_8 = 0xffffffff;
          FUN_00419830(&local_a78);
          goto LAB_0041bb7f;
        }
        FUN_00418960(local_a44,0x208,local_21c);
        if ((pHVar3 == (HMODULE)0x0) || (pHVar9 = GetModuleHandleW((LPCWSTR)0x0), pHVar3 == pHVar9))
        {
          local_634 = L'\"';
          bVar4 = FUN_004186b0(local_632,0x20b,local_a44);
          if (!bVar4) {
            local_8 = CONCAT31(local_8._1_3_,4);
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
            ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                      ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_a48);
            local_8 = 0xffffffff;
            FUN_00419830(&local_a78);
            goto LAB_0041bb7f;
          }
          iVar8 = lstrlenW(&local_634);
          local_632[iVar8 + -1] = 0x22;
          local_632[iVar8] = 0;
          pWVar10 = &local_634;
        }
        else {
          pWVar10 = local_a44;
        }
        iVar8 = FUN_0041a0a0((int)&local_a78,L"Module",(int)pWVar10);
        if ((-1 < iVar8) &&
           (iVar8 = FUN_0041a0a0((int)&local_a78,L"Module_Raw",(int)local_a44), -1 < iVar8)) {
          if (param_3 == 0) {
            FUN_0041b470(&local_a78,local_21c,param_2,L"REGISTRY");
          }
          else {
            FUN_0041b390(&local_a78,local_21c,param_2,L"REGISTRY");
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
      ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_a48);
    }
  }
  local_8 = 0xffffffff;
  FUN_00419830(&local_a78);
LAB_0041bb7f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

