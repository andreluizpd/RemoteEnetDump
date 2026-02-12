
void __thiscall FUN_00423070(void *this,byte *param_1,char param_2)

{
  byte *pbVar1;
  char *pcVar2;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Load size is inaccurate */
    if (param_2 != '\0') {
      pbVar1 = (byte *)(**(code **)(*this + 0xc))();
      FUN_00428930(pbVar1,(char *)param_1);
      return;
    }
    pcVar2 = (char *)(**(code **)(*this + 0xc))();
    FUN_00428930(param_1,pcVar2);
  }
  return;
}

