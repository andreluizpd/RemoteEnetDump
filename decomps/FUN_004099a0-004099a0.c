
void __thiscall FUN_004099a0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
                    /* WARNING: Load size is inaccurate */
  param_2 = (undefined4 *)0x0;
  cVar2 = (**(code **)(*this + 0xec))(param_1,&param_2);
  if (cVar2 == '\0') {
    *puVar1 = param_2;
  }
  return;
}

