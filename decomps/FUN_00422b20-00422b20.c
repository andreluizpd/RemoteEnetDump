
void __thiscall FUN_00422b20(void *this,int *param_1)

{
  int iVar1;
  uint local_58;
  int local_54;
  undefined1 local_50 [8];
  uint local_48;
  int local_44;
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if (-1 < (int)((-(uint)(*(int *)((int)this + 0x10) != 0) & 0x7fffbffd) + 0x80004003)) {
                    /* WARNING: Load size is inaccurate */
    local_58 = 0;
    local_54 = 0;
    iVar1 = (**(code **)(*this + 0xe0))(0,0,1,&local_58);
    if (-1 < iVar1) {
      _memset(local_50,0,0x48);
      iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0x30))
                        (*(int **)((int)this + 0x10),local_50,1);
      if (-1 < iVar1) {
        *param_1 = local_48 - local_58;
        param_1[1] = (local_44 - local_54) - (uint)(local_48 < local_58);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

