
void __thiscall FUN_00409a40(void *this,undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_8 = 0;
  cVar1 = (**(code **)(*this + 0xc0))(param_1,&local_8);
  if (cVar1 != '\0') {
    *param_2 = local_8;
  }
  return;
}

