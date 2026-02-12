
int __thiscall FUN_0041ec30(void *this,short *param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = param_1;
  iVar4 = 0;
  if (param_1 != (short *)0x0) {
    psVar1 = param_1 + 1;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    param_1 = (short *)((int)param_1 - (int)psVar1 >> 1);
                    /* WARNING: Load size is inaccurate */
    iVar4 = (**(code **)(*this + 0x50))(&param_1,4);
    if ((-1 < iVar4) && (param_1 != (short *)0x0)) {
                    /* WARNING: Load size is inaccurate */
      iVar4 = (**(code **)(*this + 0x50))(psVar3,(int)param_1 * 2);
    }
  }
  return iVar4;
}

