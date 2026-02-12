
char * __thiscall FUN_00415110(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  if ((cVar1 == '\"') || (cVar1 == '\'')) {
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    if (cVar2 != '\0') {
      while (cVar2 != cVar1) {
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar2 == '\0') {
          *(char **)((int)this + 8) = param_1;
          *(undefined4 *)((int)this + 0xc) = 9;
          return (char *)0x0;
        }
      }
      if (*param_1 != '\0') {
        return param_1 + 1;
      }
    }
  }
  else if (cVar1 == '<') {
    if (param_1[1] == '?') {
      cVar1 = param_1[2];
      param_1 = param_1 + 2;
      if (cVar1 != '\0') {
        while ((cVar1 != '?' || (param_1[1] != '>'))) {
          cVar1 = param_1[1];
          param_1 = param_1 + 1;
          if (cVar1 == '\0') {
            *(char **)((int)this + 8) = param_1;
            *(undefined4 *)((int)this + 0xc) = 9;
            return (char *)0x0;
          }
        }
        if (*param_1 != '\0') {
          return param_1 + 2;
        }
      }
    }
    else if (((param_1[1] == '!') && (param_1[2] == '-')) && (param_1[3] == '-')) {
      cVar1 = param_1[4];
      param_1 = param_1 + 4;
      if (cVar1 != '\0') {
        while (((cVar1 != '-' || (param_1[1] != '-')) || (param_1[2] != '>'))) {
          cVar1 = param_1[1];
          param_1 = param_1 + 1;
          if (cVar1 == '\0') {
            *(char **)((int)this + 8) = param_1;
            *(undefined4 *)((int)this + 0xc) = 9;
            return (char *)0x0;
          }
        }
        if (*param_1 != '\0') {
          return param_1 + 3;
        }
      }
    }
  }
  *(char **)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 9;
  return (char *)0x0;
}

