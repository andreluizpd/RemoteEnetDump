
LRESULT __thiscall FUN_004127a0(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  LRESULT LVar2;
  HWND hWnd;
  
  LVar1 = CallWindowProcW(*(WNDPROC *)((int)this + 0x20),*(HWND *)((int)this + 4),param_1,param_2,
                          param_3);
  LVar2 = SendMessageW(*(HWND *)((int)this + 4),0xb8,0,0);
  *(byte *)((int)this + 0x24) = *(byte *)((int)this + 0x24) | LVar2 == 0;
  hWnd = GetParent(*(HWND *)((int)this + 4));
  SendMessageW(hWnd,(*(char *)((int)this + 0x24) != '\0') + 0x5ae,0,*(LPARAM *)((int)this + 4));
  return LVar1;
}

