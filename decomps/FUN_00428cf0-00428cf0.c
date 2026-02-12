
void __cdecl FUN_00428cf0(char *param_1,ulong *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  char *_Str;
  char *local_148;
  ulong *local_144;
  undefined1 local_13d;
  undefined4 local_13c [3];
  char *local_130 [71];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044721b;
  local_10 = ExceptionList;
  local_14 = DAT_00457600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = param_2;
  local_13d = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_00428e77;
  FUN_0040e9a0(local_13c,param_1);
  local_8 = 0;
  piVar2 = FUN_0040cbc0((int *)local_130);
  FUN_0040cc40(piVar2);
  if (0 < *(int *)(local_130[0] + -0xc)) {
    FUN_00428c10((int *)local_130);
    if (*(int *)(local_130[0] + -0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401760(0x80070057);
    }
    _Str = local_130[0];
    if (*local_130[0] == 'x') {
      FUN_00428380(local_130,0,0x30);
      _Str = local_130[0];
    }
    uVar3 = (uint)(*_Str == '-');
    sVar4 = _strspn(_Str + uVar3,PTR_s_0123456789abcdefx_00457544);
    if (_Str[uVar3 + sVar4] == '\0') {
      sVar4 = _strspn(_Str + uVar3,PTR_s_0123456789_00457548);
      if (_Str[uVar3 + sVar4] == '\0') {
        uVar5 = _atol(_Str);
        *local_144 = uVar5;
      }
      else {
        pcVar6 = _strchr(_Str,0x78);
        if (pcVar6 != (char *)0x0) {
          pcVar6 = _Str;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if ((((uint)((int)pcVar6 - (int)(_Str + 1)) < 2) || (*_Str != '0')) || (_Str[1] != 'x'))
          goto LAB_00428e65;
        }
        uVar5 = _strtoul(_Str,&local_148,0x10);
        *local_144 = uVar5;
        if (*local_148 != '\0') {
          *local_144 = 0;
          goto LAB_00428e65;
        }
      }
      local_13d = 1;
    }
  }
LAB_00428e65:
  local_8 = 0xffffffff;
  FUN_00402e50(local_13c);
LAB_00428e77:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

