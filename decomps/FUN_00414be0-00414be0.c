
undefined4 __cdecl FUN_00414be0(char param_1,char param_2,char param_3,char param_4)

{
  if (param_1 == '\0') {
    if (param_2 != '\0') {
      if (param_2 != '<') {
        return 1;
      }
      if ((param_3 == '\0') && (param_4 == '?')) {
        return 3;
      }
      return 3;
    }
    if (param_3 == -2) {
      if (param_4 != -1) {
        return 1;
      }
      return 6;
    }
    if (param_3 != '\0') {
      return 1;
    }
    if (param_4 != '<') {
      return 1;
    }
    return 6;
  }
  if (param_1 == -1) {
    if (param_2 != -2) {
      return 1;
    }
  }
  else {
    if (param_1 == -2) {
      if (param_2 != -1) {
        return 1;
      }
      return 3;
    }
    if (param_1 == -0x11) {
      return 1;
    }
    if (param_1 != '<') {
      return 1;
    }
    if (param_2 != '\0') {
      if (param_2 == '?') {
        return 1;
      }
      if (param_2 == '\0') {
        return 2;
      }
      return 1;
    }
  }
  if ((param_3 == '\0') && (param_4 == '\0')) {
    return 5;
  }
  return 2;
}

