
int __thiscall FUN_00414350(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (param_1 == (short *)0x0) {
    FUN_00403710((void *)((int)this + 0xc),(void *)0x0,0);
    return (int)this;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00403710((void *)((int)this + 0xc),param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (int)this;
}

