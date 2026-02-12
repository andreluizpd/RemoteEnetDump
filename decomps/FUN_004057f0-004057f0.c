
void FUN_004057f0(int param_1)

{
  int iVar1;
  uint uVar2;
  WPARAM wParam;
  uint uVar3;
  undefined4 local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  wchar_t *local_20;
  undefined4 local_1c;
  wchar_t *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00444478;
  local_10 = ExceptionList;
  uVar2 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_14 = uVar2;
  wParam = CoInitializeEx((LPVOID)0x0,2);
  if (-1 < (int)wParam) {
    local_30 = (int *)0x0;
    local_8 = 1;
    wParam = CoCreateInstance((IID *)&DAT_00448848,(LPUNKNOWN)0x0,1,(IID *)&DAT_00448858,&local_30);
    if (-1 < (int)wParam) {
      iVar1 = *(int *)(param_1 + 0x14);
      local_2c = 1;
      local_28 = L"Domain";
      local_24 = 2;
      local_20 = L"Private";
      local_1c = 4;
      local_18 = L"Public";
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        wParam = (**(code **)(*local_30 + 0x1c))(local_30,param_1 + 8);
        if (-1 < (int)wParam) {
          uVar2 = 0;
          do {
            uVar3 = (&local_2c)[uVar2 * 2];
            local_38 = 0;
            wParam = (**(code **)(*local_30 + 0x20))(local_30,uVar3,&local_38);
            param_1 = local_34;
            if ((int)wParam < 0) break;
            if ((short)local_38 != 0) {
              *(uint *)(local_34 + 0xc) = *(uint *)(local_34 + 0xc) | uVar3;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < 3);
        }
      }
      else if (iVar1 == 2) {
        *(undefined1 *)(param_1 + 4) = 1;
        uVar2 = 0;
        do {
          wParam = (**(code **)(*local_30 + 0x24))(local_30,(&local_2c)[uVar2 * 2],0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < 3);
      }
      else if (iVar1 == 3) {
        uVar3 = 0;
        do {
          if ((*(uint *)(param_1 + 0xc) & (&local_2c)[uVar3 * 2]) != 0) {
            wParam = (**(code **)(*local_30 + 0x24))
                               (local_30,(&local_2c)[uVar3 * 2],0xffffffff,uVar2);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    CoUninitialize();
    if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)(param_1 + 0x20));
    }
    local_8 = 0xffffffff;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
    }
  }
  *(WPARAM *)(param_1 + 0x10) = wParam;
  if ((*(HWND *)(param_1 + 0x18) != (HWND)0x0) && (*(UINT *)(param_1 + 0x1c) != 0)) {
    PostMessageW(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x1c),wParam,0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

