
void FUN_00420650(wchar_t *param_1,undefined4 *param_2)

{
  LPCWSTR pWVar1;
  int *piVar2;
  wchar_t *pwVar3;
  HANDLE hFileMappingObject;
  int iVar4;
  undefined4 *lpBaseAddress;
  DWORD DVar5;
  undefined **local_240 [3];
  LPCWSTR local_234 [3];
  size_t local_228;
  undefined1 local_220 [524];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004469cc;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pwVar3 = L"Global\\";
  if (DAT_004571fc == '\0') {
    pwVar3 = L"Local\\";
  }
  FUN_00405ba0(local_240,pwVar3);
  lpBaseAddress = (undefined4 *)0x0;
  local_8 = 0;
  if (param_1 == (wchar_t *)0x0) {
    DVar5 = 0x80004003;
  }
  else {
    DVar5 = (*param_1 != L'\0') - 1 & 0x80070057;
    if (-1 < (int)DVar5) {
      if (DAT_004571fc == '\0') {
        pwVar3 = L"Local\\";
      }
      else {
        pwVar3 = L"Global\\";
      }
      pwVar3 = FUN_00428ae0(param_1,pwVar3,-1);
      if (pwVar3 == (wchar_t *)0x0) {
        FUN_00403e20(local_234,param_1);
      }
      else {
        FUN_00414350(local_240,param_1);
      }
      hFileMappingObject = OpenFileMappingW(4,0,local_234[0]);
      if (((hFileMappingObject == (HANDLE)0x0) || (hFileMappingObject == (HANDLE)0xffffffff)) &&
         (DVar5 = GetLastError(), 0 < (int)DVar5)) {
        DVar5 = DVar5 & 0xffff | 0x80070000;
      }
      if (-1 < (int)DVar5) {
        iVar4 = 0;
        do {
          if (lpBaseAddress != (undefined4 *)0x0) goto LAB_00420792;
          lpBaseAddress = (undefined4 *)MapViewOfFile(hFileMappingObject,4,0,0,4);
          if (lpBaseAddress == (undefined4 *)0x0) {
            DVar5 = GetLastError();
            if (DVar5 == 0) goto LAB_004207a5;
            SleepEx(5,1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        if (lpBaseAddress != (undefined4 *)0x0) {
LAB_00420792:
          *param_2 = *lpBaseAddress;
          UnmapViewOfFile(lpBaseAddress);
        }
LAB_004207a5:
        DVar5 = 0;
        CloseHandle(hFileMappingObject);
      }
    }
  }
  FUN_00405160((undefined *)param_1);
  FUN_004045a0(&DAT_00459110,PTR_s_a5WHG1dY4Flsz2NIHvULM8Orrw7IdqaW_0045722c,DVar5,", %d, %S, %S");
  local_240[0] = ATL::
                 CFixedStringT<class_ATL::CStringT<wchar_t,class_ATL::StrTraitATL<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,260>
                 ::vftable;
  local_8 = 2;
  if (local_228 != 0) {
    _memset(local_220,0,local_228);
  }
  piVar2 = *(int **)(local_234[0] + -8);
  if (*(int *)(local_234[0] + -6) != 0) {
    pWVar1 = local_234[0] + -2;
    if (*(int *)(local_234[0] + -2) < 0) {
      if (*(int *)(local_234[0] + -4) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401760(0x80070057);
      }
      local_234[0][-0xffffffff00000006] = L'\0';
      local_234[0][-0xffffffff00000005] = L'\0';
      *local_234[0] = L'\0';
    }
    else {
      LOCK();
      iVar4 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(local_234[0] + -8) + 4))(local_234[0] + -8);
      }
      iVar4 = (**(code **)(*piVar2 + 0xc))();
      local_234[0] = (LPCWSTR)(iVar4 + 0x10);
    }
  }
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),1);
  pWVar1 = local_234[0] + -2;
  LOCK();
  iVar4 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_234[0] + -8) + 4))(local_234[0] + -8);
  }
  local_8 = 0xffffffff;
  local_240[0] = ATL::CFixedStringMgr::vftable;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

