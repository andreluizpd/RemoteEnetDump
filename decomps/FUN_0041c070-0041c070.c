
void __thiscall
FUN_0041c070(void *this,undefined4 param_1,undefined4 param_2,short param_3,undefined4 *param_4)

{
  int iVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)((int)this + 4),&local_18);
  InflateRect(&local_18,-10,0);
  iVar1 = (int)param_3;
  if (local_18.right < param_3) {
    iVar1 = local_18.right;
  }
  if (iVar1 < local_18.left) {
    iVar1 = local_18.left;
  }
  if (0 < *(int *)((int)this + 0xbc)) {
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + (iVar1 - *(int *)((int)this + 0xbc));
    InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,1);
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *param_4 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

