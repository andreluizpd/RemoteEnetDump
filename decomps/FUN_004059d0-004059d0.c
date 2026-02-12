
WPARAM __thiscall FUN_004059d0(void *this,undefined4 param_1)

{
  HANDLE hObject;
  WPARAM wParam;
  uint local_8;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  wParam = 0;
  local_8 = 0;
  if (*(HANDLE *)((int)this + 0x20) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)((int)this + 0x20));
  }
  hObject = (HANDLE)__beginthreadex((void *)0x0,0,FUN_004059c0,this,0,&local_8);
  if (hObject == (HANDLE)0x0) {
    wParam = GetLastError();
    if (0 < (int)wParam) {
      wParam = wParam & 0xffff | 0x80070000;
    }
    if ((*(HWND *)((int)this + 0x18) != (HWND)0x0) && (*(UINT *)((int)this + 0x1c) != 0)) {
      PostMessageW(*(HWND *)((int)this + 0x18),*(UINT *)((int)this + 0x1c),wParam,0);
      return wParam;
    }
  }
  else {
    CloseHandle(hObject);
    if ((*(int *)((int)this + 0x18) == 0) && (*(HANDLE *)((int)this + 0x20) != (HANDLE)0x0)) {
      WaitForSingleObject(*(HANDLE *)((int)this + 0x20),0xffffffff);
    }
  }
  return wParam;
}

