
void __thiscall FUN_0042b760(void *this,uint param_1,int param_2)

{
  DWORD DVar1;
  uintptr_t uVar2;
  WPARAM wParam;
  
  if (*(HANDLE *)((int)this + 8) != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 8),1);
    if (DVar1 == 0) {
      CloseHandle(*(HANDLE *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 0x47c) = 1;
    *(undefined4 *)((int)this + 0x480) = 1;
    if (param_1 != 0) {
      *(uint *)((int)this + 0x484) = param_1;
    }
    if (param_2 != 0) {
      *(int *)((int)this + 0x488) = param_2;
    }
    ResetEvent(*(HANDLE *)((int)this + 4));
    param_1 = 0;
    uVar2 = __beginthreadex((void *)0x0,0,FUN_0042b750,this,0,&param_1);
    *(uintptr_t *)((int)this + 8) = uVar2;
    if (uVar2 == 0) {
      wParam = GetLastError();
      if (0 < (int)wParam) {
        wParam = wParam & 0xffff | 0x80070000;
      }
      *(WPARAM *)((int)this + 0x48c) = wParam;
      *(undefined4 *)((int)this + 0x480) = 0;
      if ((*(HWND *)((int)this + 0x484) != (HWND)0x0) && (*(UINT *)((int)this + 0x488) != 0)) {
        PostMessageW(*(HWND *)((int)this + 0x484),*(UINT *)((int)this + 0x488),wParam,0);
      }
    }
  }
  return;
}

