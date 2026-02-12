
WPARAM __thiscall FUN_004148c0(void *this,uint param_1,undefined4 param_2)

{
  HANDLE hObject;
  WPARAM wParam;
  
  *(uint *)((int)this + 0x11c) = param_1;
  wParam = 0;
  *(undefined4 *)((int)this + 0x120) = param_2;
  *(undefined4 *)((int)this + 4) = 2;
  param_1 = 0;
  if (*(HANDLE *)((int)this + 0x124) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)((int)this + 0x124));
  }
  hObject = (HANDLE)__beginthreadex((void *)0x0,0,FUN_00414680,this,0,&param_1);
  if (hObject == (HANDLE)0x0) {
    wParam = GetLastError();
    if (0 < (int)wParam) {
      wParam = wParam & 0xffff | 0x80070000;
    }
    if ((*(HWND *)((int)this + 0x11c) != (HWND)0x0) && (*(UINT *)((int)this + 0x120) != 0)) {
      PostMessageW(*(HWND *)((int)this + 0x11c),*(UINT *)((int)this + 0x120),wParam,0);
      return wParam;
    }
  }
  else {
    CloseHandle(hObject);
    if ((*(int *)((int)this + 0x11c) == 0) && (*(HANDLE *)((int)this + 0x124) != (HANDLE)0x0)) {
      WaitForSingleObject(*(HANDLE *)((int)this + 0x124),0xffffffff);
    }
  }
  return wParam;
}

