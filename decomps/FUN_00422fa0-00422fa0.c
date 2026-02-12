
void __thiscall FUN_00422fa0(void *this,char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  if ((0 < param_2) && (iVar1 = 0, 0 < param_2)) {
    local_110 = param_2;
    do {
      if ((param_1 == '\t') && (0 < *(int *)((int)this + 8))) {
        iVar2 = 0;
        if (0 < *(int *)((int)this + 8)) {
          do {
            if (0x7f < iVar1) {
                    /* WARNING: Load size is inaccurate */
              (**(code **)(*this + 4))(local_10c,0x80);
              iVar1 = 0;
            }
            local_10c[iVar1] = ' ';
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 1;
          } while (iVar2 < *(int *)((int)this + 8));
        }
      }
      else {
        if (0x7f < iVar1) {
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 4))(local_10c,0x80);
          iVar1 = 0;
        }
        local_10c[iVar1] = param_1;
        iVar1 = iVar1 + 1;
      }
      local_110 = local_110 + -1;
    } while (local_110 != 0);
    if (0 < iVar1) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 4))(local_10c,iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

