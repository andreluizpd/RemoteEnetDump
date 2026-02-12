
bool __cdecl FUN_00428930(byte *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *local_10;
  char *local_c;
  char local_8;
  undefined1 local_7;
  
  local_10 = (byte *)0x0;
  local_c = (char *)0x0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while( true ) {
    if (cVar1 == '\0') goto LAB_0042898e;
    if (*param_1 == 0x2a) break;
    param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
    param_2._0_2_ = (ushort)*param_1;
    CharUpperA((LPSTR)&param_2);
    local_8 = *pcVar3;
    cVar1 = (char)param_2;
    local_7 = 0;
    CharUpperA(&local_8);
    if ((cVar1 != local_8) && (*param_1 != 0x3f)) {
      return false;
    }
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar3;
  }
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    if (*param_1 == 0x2a) {
      local_10 = param_1 + 1;
      if (*local_10 == 0) {
        return true;
      }
      param_1 = local_10;
      local_c = pcVar3 + 1;
    }
    else {
      param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
      param_2._0_2_ = (ushort)*param_1;
      CharUpperA((LPSTR)&param_2);
      local_8 = *pcVar3;
      cVar1 = (char)param_2;
      local_7 = 0;
      CharUpperA(&local_8);
      if ((cVar1 == local_8) || (*param_1 == 0x3f)) {
        param_1 = param_1 + 1;
        pcVar3 = pcVar3 + 1;
      }
      else {
        param_1 = local_10;
        pcVar3 = local_c;
        local_c = local_c + 1;
      }
    }
    cVar1 = *pcVar3;
  }
LAB_0042898e:
  bVar2 = *param_1;
  while (bVar2 == 0x2a) {
    param_1 = param_1 + 1;
    bVar2 = *param_1;
  }
  return *param_1 == 0;
}

