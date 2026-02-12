
void __thiscall FUN_00410530(void *this,int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  int iVar2;
  HWND hWnd;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  FUN_00410000((int)this);
  if ((((param_2 != 0xffffffff) &&
       (WVar1 = SendMessageW(*(HWND *)((int)this + 4),0x188,0,0), param_2 == WVar1)) &&
      (iVar2 = (**(code **)(*param_1 + 0x14))(), iVar2 != 0)) &&
     (*(char *)((int)this + 0xc9) != '\0')) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    FUN_0040ffc0(this,param_2,&local_18.left);
    InflateRect(&local_18,0,-1);
    hWnd = (HWND)(**(code **)(*param_1 + 0x28))(*(undefined4 *)((int)this + 4),&local_18);
    *(HWND *)((int)this + 0xa4) = hWnd;
    if (hWnd != (HWND)0x0) {
      SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x53);
      *(WPARAM *)((int)this + 0xa8) = param_2;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

