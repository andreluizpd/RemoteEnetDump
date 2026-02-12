
void __thiscall FUN_00422960(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (-1 < (int)((-(uint)(*(int *)((int)this + 0x10) != 0) & 0x7fffbffd) + 0x80004003)) {
                    /* WARNING: Load size is inaccurate */
    local_c = 0;
    local_8 = 0;
    (**(code **)(*this + 0xdc))(param_1,0,param_2,&local_c);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_c;
    }
  }
  return;
}

