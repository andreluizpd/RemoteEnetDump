
char * __thiscall FUN_00401f40(void *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != 0) {
    _sprintf(param_1," <%08x>",*this);
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FID_conflict__memcpy
              (param_1 + ((int)pcVar2 - (int)(param_2 + 1)),param_1,
               (size_t)(pcVar3 + (1 - (int)(param_1 + 1))));
    FID_conflict__memcpy(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1));
    return param_1;
  }
  return param_2;
}

