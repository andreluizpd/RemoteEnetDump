
void __thiscall FUN_00414980(void *this,uint param_1)

{
  uint uVar1;
  undefined4 local_c;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((*(int *)((int)this + 0x24) == 0) && (uVar1 <= param_1)) {
    local_c = param_1;
    if (param_1 == uVar1) {
      local_c = param_1 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x18))(this,local_c,param_1 == uVar1 && 0xfffffffe < param_1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(uint *)((int)this + 0x18) = param_1;
  return;
}

