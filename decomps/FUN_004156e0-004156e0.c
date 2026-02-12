
void __thiscall FUN_004156e0(void *this,undefined4 *param_1)

{
  uint *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *(uint **)(*this + 0x10);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      *param_1 = 0;
      return;
    }
    if ((*puVar1 & 7) == 1) break;
    puVar1 = (uint *)puVar1[6];
  }
  *param_1 = puVar1;
  return;
}

