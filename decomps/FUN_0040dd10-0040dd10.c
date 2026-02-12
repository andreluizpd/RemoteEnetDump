
void __thiscall FUN_0040dd10(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00403380((void *)((int)this + 0x20),param_1,(int)pcVar2 - (int)(param_1 + 1));
    return;
  }
  FUN_00403380((void *)((int)this + 0x20),&PTR_0044862c,0);
  return;
}

