
void __thiscall
FUN_0041d720(void *this,undefined4 param_1,undefined4 param_2,short param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (0 < *(int *)((int)this + 0xbc)) {
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_18.left = 0;
    GetClientRect(*(HWND *)((int)this + 4),&local_18);
    InflateRect(&local_18,-10,0);
    iVar2 = (int)param_3;
    if (local_18.right < param_3) {
      iVar2 = local_18.right;
    }
    if (iVar2 < local_18.left) {
      iVar2 = local_18.left;
    }
    iVar1 = *(int *)((int)this + 0xc0);
    if (iVar1 != iVar2) {
      if (iVar1 != 0) {
        FUN_0041d5b0(this,iVar1);
      }
      *(int *)((int)this + 0xc0) = iVar2;
      FUN_0041d5b0(this,iVar2);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_4 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

